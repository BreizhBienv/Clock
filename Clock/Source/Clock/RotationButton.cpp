// Fill out your copyright notice in the Description page of Project Settings.


#include "RotationButton.h"
#include "VRPlayer.h"
#include "Gear.h"
#include "StartingGear.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/RotatingMovementComponent.h"
#include "GameFramework/Actor.h"

// Sets default values
ARotationButton::ARotationButton()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	RootComp = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	this->SetRootComponent(RootComponent);

	Box = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Box"));
	Sphere = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Sphere"));

	if (Box != nullptr)
	{
		Box->SetupAttachment(RootComp);

		static ConstructorHelpers::FObjectFinder<UStaticMesh>
			BoxAsset(TEXT("/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube"));

		if (BoxAsset.Succeeded())
		{
			Box->SetStaticMesh(BoxAsset.Object);
		}

		Box->SetCollisionProfileName("Trigger");
	}

	if (Sphere != nullptr)
	{
		Sphere->SetupAttachment(RootComp);

		static ConstructorHelpers::FObjectFinder<UStaticMesh>
			SphereAsset(TEXT("/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere"));

		if (SphereAsset.Succeeded())
		{
			Sphere->SetStaticMesh(SphereAsset.Object);

			Sphere->SetCollisionProfileName("Trigger");
		}
	}
}

void ARotationButton::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	AVRPlayer* player = Cast<AVRPlayer>(OtherActor);
	if (player == nullptr) { return; }

	if (player->GetPause()) { return; }

	if (!bRotating)
	{
		Sphere->SetMaterial(0, Green);
		bRotating = true;
		OnRotatePressed.Broadcast();
	}
	else if (bRotating)
	{
		Sphere->SetMaterial(0, Red);
		bRotating = false;
		OnStopPressed.Broadcast();
	}
}

// Called when the game starts or when spawned
void ARotationButton::BeginPlay()
{
	Super::BeginPlay();
	
	if (Red != nullptr)
	{
		Sphere->SetMaterial(0, Red);
	}

	Sphere->OnComponentBeginOverlap.AddDynamic(this, &ARotationButton::OnOverlapBegin);
	
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AGear::StaticClass(), FoundActors);

	for (int i = 0; i < FoundActors.Num(); ++i)
	{
		if (FoundActors[i]->ActorHasTag(CommonGearTag))
		{
			if (FoundActors[i]->ActorHasTag(StartingGearTag))
			{
				AStartingGear* Actor = Cast<AStartingGear>(FoundActors[i]);
				OnRotatePressed.AddDynamic(Actor, &AStartingGear::PropagateSpeedFromStart);
				OnStopPressed.AddDynamic(Actor, &AStartingGear::StopRotatingMovement);
			}
			else
			{
				AGear* Actor = Cast<AGear>(FoundActors[i]);
				OnStopPressed.AddDynamic(Actor, &AGear::StopRotatingMovement);
			}
		}
	}
}

// Called every frame
void ARotationButton::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

