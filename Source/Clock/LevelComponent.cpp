// Fill out your copyright notice in the Description page of Project Settings.


#include "LevelComponent.h"
#include "Components/SphereComponent.h"
#include "Components/SceneComponent.h"
#include "MotionControllerComponent.h"
#include "Kismet/KismetMathLibrary.h"

// Sets default values
ALevelComponent::ALevelComponent()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	RootComp = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));

	if (RootComp)
	{
		this->SetRootComponent(RootComp);

		RotateCollision = CreateDefaultSubobject<USphereComponent>(TEXT("SphereCollision"));

		if (RotateCollision)
		{
			RotateCollision->SetupAttachment(RootComp);
		}
	}



}

// Called when the game starts or when spawned
void ALevelComponent::BeginPlay()
{
	Super::BeginPlay();
	
}

void ALevelComponent::RotateThroughHand()
{
	if (!ParentHand) { return; }

	float DeltaY = (HandYOldPos - ParentHand->GetComponentLocation().Y) * RotationScalar;
	float DeltaZ = (HandZOldPos - ParentHand->GetComponentLocation().Z) * RotationScalar;

	HandYOldPos = ParentHand->GetComponentLocation().Y;
	HandZOldPos = ParentHand->GetComponentLocation().Z;

	FRotator tmpRotator = FRotator(DeltaZ, DeltaY, 0);
	this->AddActorWorldRotation(tmpRotator);
}

// Called every frame
void ALevelComponent::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	RotateThroughHand();

	SnapLevel(DeltaTime);
}

void ALevelComponent::SnapLevel(float DeltaTime)
{
	if (!bShouldSnap) { return; }
;
	FRotator tmp = FRotator(FQuat::Slerp(FQuat(this->GetActorRotation()), FQuat(TargetLerpRotator), 0.1f));
	this->SetActorRotation(tmp);

	if (this->GetActorRotation() == TargetLerpRotator)
	{
		bShouldSnap = false;
	}
}

void ALevelComponent::CalculTarget(double value, double& Target)
{
	if (value > 0)
	{
		double Clamp;
		UKismetMathLibrary::FMod(value, 90, Clamp);

		if (Clamp >= MinPitchSnapDegree)
		{
			Target = value + (90 - Clamp);
		}
		else
		{
			Target = value - Clamp;
		}
	}
	else
	{
		double Clamp;
		UKismetMathLibrary::FMod(value, -90, Clamp);

		if (Clamp <= (MinPitchSnapDegree * -1))
		{
			Target = value + (-90 - Clamp);
		}
		else
		{
			Target = value - Clamp;
		}
	}
}

void ALevelComponent::RegisterRotationInformation()
{
	StartLerpRotator = this->GetActorRotation();

	double TargetPitch = 0;
	double TargetYaw = 0;
	double TargetRoll = 0;

	CalculTarget(this->GetActorRotation().Pitch, TargetPitch);
	CalculTarget(this->GetActorRotation().Yaw, TargetYaw);
	CalculTarget(this->GetActorRotation().Roll, TargetRoll);

	TargetLerpRotator = FRotator(TargetPitch, TargetYaw, TargetRoll);
	bShouldSnap = true;
}
