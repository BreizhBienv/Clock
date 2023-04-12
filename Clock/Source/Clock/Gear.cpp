// Fill out your copyright notice in the Description page of Project Settings.


#include "Gear.h"
#include "Components/CapsuleComponent.h"
#include "Components/SphereComponent.h"
#include "GameFramework/RotatingMovementComponent.h"
#include "StartingGear.h"
#include "GearSupport.h"
#include "EndingGear.h"

// Sets default values
AGear::AGear()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	this->Tags.Add(NameOfGearTag);

	Gear = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Gear"));
	if (Gear != nullptr)
	{
		Gear->SetupAttachment(RootComponent);
		Gear->SetCollisionProfileName("BlockAllDynamic");

		RotatingMovement = CreateDefaultSubobject<URotatingMovementComponent>(TEXT("PerpetualRotation"));
		RotatingMovement->RotationRate.Yaw = 0;

		InnerGearOverlap = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("GearOverlap"));
		if (InnerGearOverlap != nullptr)
		{
			InnerGearOverlap->SetupAttachment(Gear);
			InnerGearOverlap->SetCollisionProfileName("Trigger");
			InnerGearOverlap->SetVisibility(false);
		}

		GearTeethOverlap = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("GearTeethOverlap"));
		if (GearTeethOverlap != nullptr)
		{
			GearTeethOverlap->SetupAttachment(Gear);
			GearTeethOverlap->SetCollisionProfileName("Trigger");
			GearTeethOverlap->SetVisibility(false);
		}
	}
}

float AGear::CalculNewSpeed(AGear* InputGear, AGear* OutputGear)
{
	float newSpeed = (-1 * InputGear->RotatingMovement->RotationRate.Yaw) *
		(InputGear->GearTeethOverlap->Bounds.SphereRadius / OutputGear->GearTeethOverlap->Bounds.SphereRadius);

		return newSpeed;
}

// Called when the game starts or when spawned
void AGear::BeginPlay()
{
	Super::BeginPlay();
	
	InnerGearOverlap->OnComponentBeginOverlap.AddDynamic(this, &AGear::OnGearOverlapBegin);
	InnerGearOverlap->OnComponentEndOverlap.AddDynamic(this, &AGear::OnGearOverlapEnd);

	GearTeethOverlap->OnComponentBeginOverlap.AddDynamic(this, &AGear::OnGearTeethOverlapBegin);
	GearTeethOverlap->OnComponentEndOverlap.AddDynamic(this, &AGear::OnGearTeethOverlapEnd);

	StartTransform = this->GetActorTransform();
}

void AGear::OnGearOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{	
	
}

void AGear::OnGearOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
}

void AGear::OnGearTeethOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor->IsA(AGearSupport::StaticClass()))
	{
		SupportToAttachTo = Cast<AGearSupport>(OtherActor);
		SupportRendering = Cast<UStaticMeshComponent>(OtherComp);
	}
}

void AGear::OnGearTeethOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (OtherActor->IsA(AGearSupport::StaticClass()))
	{
		SupportToAttachTo = nullptr;
		SupportRendering = nullptr;
	}
}

void AGear::PropagateSpeed()
{
	if (Speed == 0) return;

	for (AGear* gear : ContactGears)
	{
		if (gear == SourceGear || gear->IsA(AStartingGear::StaticClass()) || 
			gear->RotatingMovement == nullptr || gear == this) continue;

		gear->Speed = CalculNewSpeed(this, gear);
		gear->RotatingMovement->RotationRate.Yaw = gear->Speed;

		gear->SourceGear = this;
		gear->PropagateSpeed();
	}
}

void AGear::StopRotatingMovement()
{
	if (RotatingMovement == nullptr) return;

	this->RotatingMovement->RotationRate.Yaw = 0;
	Speed = 0;
}

bool AGear::OnSnap()
{
	SupportRendering->SetRenderCustomDepth(false);

	TArray<AActor*> InnerGearList;
	InnerGearOverlap->GetOverlappingActors(InnerGearList, AStartingGear::StaticClass());
	InnerGearOverlap->GetOverlappingActors(InnerGearList, AEndingGear::StaticClass());
	InnerGearOverlap->GetOverlappingActors(InnerGearList, AGear::StaticClass());

	for (AActor* actor : InnerGearList)
	{
		AGear* gear = Cast<AGear>(actor);
		if (gear == nullptr || gear == this) { continue; }
		
		this->SetActorTransform(StartTransform);
		return false;
	}

	bIsAttached = true;
	TArray<AActor*> tmp;
	GearTeethOverlap->GetOverlappingActors(tmp, AGear::StaticClass());

	for (AActor* actor : tmp)
	{
		AGear* gear = Cast<AGear>(actor);
		if (gear == this) { continue; }

		ContactGears.Add(gear);
	}

	for (AGear* gear : ContactGears)
	{
		if (gear->IsA(AStartingGear::StaticClass()))
		{
			SourceGear = gear;
			gear->ContactGears.Add(this);
		}

		if (!gear->ContactGears.Contains(this))
		{
			gear->ContactGears.Add(this);
		}
	}

	for (AGear* gear : ContactGears)
	{
		if (gear->Speed != 0)
		{
			SourceGear = gear;
			float tmpbis = CalculNewSpeed(gear, this);
			Speed = tmpbis;
			this->RotatingMovement->RotationRate.Yaw = tmpbis;
			PropagateSpeed();
			return true;
		}
	}

	return true;
}

void AGear::UponRemovingFromSupport()
{
	bIsAttached = false;
	SupportToAttachTo = nullptr;

	PropagateStop();

	for (AGear* gear : ContactGears)
	{
		if (gear->IsA(AStartingGear::StaticClass()) || gear == SourceGear ||
			gear->ContactGears.Contains(this))
		{
			gear->ContactGears.Remove(this);
		}

		if (gear->SourceGear == this)
		{
			gear->SourceGear = nullptr;
		}

	}

	SourceGear = nullptr;

	ContactGears.Empty();
}

void AGear::PropagateStop()
{
	if (Speed == 0) { return; }
	StopRotatingMovement();

	if (ContactGears.IsEmpty()) { return; }

	for (AGear* gear : ContactGears)
	{
		if (gear == SourceGear) { continue; }

		gear->PropagateStop();
	}
}

// Called every frame
void AGear::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}