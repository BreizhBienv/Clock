// Fill out your copyright notice in the Description page of Project Settings.


#include "VRPlayer.h"
#include "Camera/CameraComponent.h"
#include "Components/InputComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "MotionControllerComponent.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Components/InputComponent.h"
#include "Components/WidgetInteractionComponent.h"
#include "GearSupport.h"
#include "Math/TransformNonVectorized.h"
#include "Components/CapsuleComponent.h"
#include "StartingGear.h"
#include "EndingGear.h"
#include "LevelComponent.h"
#include <Kismet/GameplayStatics.h>
#include "GameManager.h"

// Sets default values
AVRPlayer::AVRPlayer()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Camera Set Up
	HeadCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("HeadCamera"));
	if (HeadCamera != nullptr)
	{
		HeadCamera->SetupAttachment(RootComponent);
	}

	//Left Hand Set Up
	LeftMC = CreateDefaultSubobject<UMotionControllerComponent>(TEXT("LeftMotionController"));
	if (LeftMC != nullptr)
	{
		LeftMC->SetupAttachment(RootComponent);

		LeftHand = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("LeftSkeletalHand"));
		if (LeftHand != nullptr)
		{
			LeftHand->SetupAttachment(LeftMC);
		}

	/*	LeftWidgetInterac = CreateDefaultSubobject<UWidgetInteractionComponent>(TEXT("LeftWidgInterac"));
		if (LeftWidgetInterac != nullptr)
		{
			LeftWidgetInterac->SetupAttachment(LeftMC);
		}*/
		
		LeftOverlapCollision = CreateDefaultSubobject<UCapsuleComponent>(TEXT("LeftOverlapCollision"));
		if (LeftOverlapCollision != nullptr)
		{
			LeftOverlapCollision->SetupAttachment(LeftHand);
			LeftOverlapCollision->SetCollisionProfileName("Trigger");
		}
	}

	//Right Hand set up
	RightMC = CreateDefaultSubobject<UMotionControllerComponent>(TEXT("RightMotionController"));
	if (RightMC != nullptr)
	{	
		RightMC->SetupAttachment(RootComponent);
	
		RightHand = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("RightSkeletalHand"));
		if (RightHand != nullptr)
		{
			RightHand->SetupAttachment(RightMC);
		}

		RightWidgetInterac = CreateDefaultSubobject<UWidgetInteractionComponent>(TEXT("RightWidgInterac"));
		if (RightWidgetInterac != nullptr)
		{
			RightWidgetInterac->SetupAttachment(RightMC);
		}
	}
}

// Called when the game starts or when spawned
void AVRPlayer::BeginPlay()
{
	Super::BeginPlay();
	
	GameManager = Cast<AGameManager>(UGameplayStatics::GetActorOfClass(GetWorld(), AGameManager::StaticClass()));
}

void AVRPlayer::RemoveGearFromSupportUponGrabbing(AActor* actor)
{
	AGear* gear = Cast<AGear>(actor);
	if (gear == nullptr || !gear->GetIsAttached()) { return; }

	gear->UponRemovingFromSupport();
}

void AVRPlayer::SetupPlayerInputComponent(class UInputComponent* InputComp)
{
	Super::SetupPlayerInputComponent(InputComp);

	//Grabb & release left and right object
	InputComp->BindAction("LeftGrip", IE_Pressed, this, &AVRPlayer::GrabLeftObject);
	InputComp->BindAction("LeftGrip", IE_Released, this, &AVRPlayer::ReleaseLeftObject);

	InputComp->BindAction("RightGrip", IE_Pressed, this, &AVRPlayer::GrabRightObject);
	InputComp->BindAction("RightGrip", IE_Released, this, &AVRPlayer::ReleaseRightObject);

	InputComp->BindAction("LeftTrigger", IE_Pressed, this, &AVRPlayer::GrabLevelCompLeft);
	InputComp->BindAction("LeftTrigger", IE_Released, this, &AVRPlayer::ReleaseLevelCompLeft);

	InputComp->BindAction("RightTrigger", IE_Pressed, this, &AVRPlayer::GrabLevelCompRight);
	InputComp->BindAction("RightTrigger", IE_Released, this, &AVRPlayer::ReleaseLevelCompRight);
}

// Called every frame
void AVRPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AVRPlayer::GrabLeftObject()
{
	if (bPause || GameManager->GetEndBool()) { return; }

	FHitResult Hit;
	bool HasHit = GetObjectIfAcceptable(Hit, LeftHand);

	if (!HasHit || LeftObject != nullptr) { return; }

	if (Hit.GetActor() == RightObject)
	{
		if (RightObject == nullptr) { return; }

		RightObject->DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
		RightObject = nullptr;
	}

	LeftObject = Hit.GetActor();
	LeftObject->AttachToComponent(LeftHand, FAttachmentTransformRules::KeepWorldTransform);
	RemoveGearFromSupportUponGrabbing(LeftObject);
}

void AVRPlayer::ReleaseLeftObject()
{
	if (LeftObject == nullptr) { return; }

	LeftObject->DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);

	AttachGearToSupport(LeftObject);

	LeftObject = nullptr;
}

bool AVRPlayer::GetObjectIfAcceptable(FHitResult& result, USkeletalMeshComponent* Hand)
{
	bool HasHit = UKismetSystemLibrary::SphereTraceSingle(this,
		Hand->GetComponentLocation() + Hand->GetForwardVector() * PosfromHandBase,
		Hand->GetComponentLocation() + Hand->GetForwardVector() * PosfromHandBase,
		SphereRadius, TraceTypeQuery1, false, TArray<AActor*>(), EDrawDebugTrace::Type::ForDuration, result, true);

	if (!HasHit) { return false; }
	if (result.GetActor()->IsA(AStartingGear::StaticClass()) 
		|| result.GetActor()->IsA(AEndingGear::StaticClass())
		|| result.GetActor()->IsA(ALevelComponent::StaticClass()) 
		|| result.GetActor()->IsA(AGearSupport::StaticClass())) { return false; }

	return true;
}

void AVRPlayer::GrabRightObject()
{
	if (bPause || GameManager->GetEndBool()) { return; }

	FHitResult Hit;
	bool HasHit = GetObjectIfAcceptable(Hit, RightHand);

	if (!HasHit || RightObject != nullptr) { return; }

	if (Hit.GetActor() == LeftObject)
	{
		if (LeftObject == nullptr) { return; }

		LeftObject->DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
		LeftObject = nullptr;
	}

	RightObject = Hit.GetActor();
	RightObject->AttachToComponent(RightHand, FAttachmentTransformRules::KeepWorldTransform);
	RemoveGearFromSupportUponGrabbing(RightObject);
}

void AVRPlayer::ReleaseRightObject()
{
	if (RightObject == nullptr) { return; }

	RightObject->DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);

	AttachGearToSupport(RightObject);

	RightObject = nullptr;
}

void AVRPlayer::AttachGearToSupport(AActor* Object)
{
	AGear* gear = Cast<AGear>(Object);
	if (gear == nullptr || gear->GetSupport() == nullptr)  { return; }
	
	FTransform temp(gear->GetSupport()->GetTransform().GetRotation(),
		gear->GetSupport()->GetTransform().GetTranslation(),
		gear->GetTransform().GetScale3D());

	gear->SetActorTransform(temp);

	bool ShouldAttach = gear->OnSnap();
	if (!ShouldAttach) { return; }

	gear->AttachToComponent(gear->GetSupport()->GetRootComponent(), FAttachmentTransformRules::KeepWorldTransform);
}

bool AVRPlayer::GetLevelCompIfAcceptable(FHitResult& result, USkeletalMeshComponent* Hand)
{
	bool HasHit = UKismetSystemLibrary::SphereTraceSingle(this,
		Hand->GetComponentLocation() + Hand->GetForwardVector() * PosfromHandBase,
		Hand->GetComponentLocation() + Hand->GetForwardVector() * PosfromHandBase,
		SphereRadius, TraceTypeQuery1, false, TArray<AActor*>(), EDrawDebugTrace::Type::ForDuration, result, true);

	if (!HasHit) { return false; }
	if (result.GetActor()->IsA(AGearSupport::StaticClass())) { return false; }

	return true;
}

void AVRPlayer::GrabLevelCompLeft()
{
	if (bPause) { return; }

	FHitResult Hit;
	bool HasHit = GetLevelCompIfAcceptable(Hit, LeftHand);

	if (!HasHit && !LeftLevel) { return; }

	LeftLevel = Hit.GetActor();
	
	ALevelComponent* LevelComp = Cast<ALevelComponent>(LeftLevel);
	if (!LevelComp) { return; }

	LevelComp->GetShouldSnap() = false;
	LevelComp->SetParentHand(LeftHand);
	LevelComp->SetYOldPos(LeftHand->GetComponentLocation().Y);
	LevelComp->SetZOldPos(LeftHand->GetComponentLocation().Z);
}

void AVRPlayer::ReleaseLevelCompLeft()
{
	if (!LeftLevel) { return; }
	
	ALevelComponent* LevelComp = Cast<ALevelComponent>(LeftLevel);
	if (!LevelComp) { return; }

	LevelComp->SetParentHand(nullptr);
	LevelComp->RegisterRotationInformation();

	LeftLevel = nullptr;
}

void AVRPlayer::GrabLevelCompRight()
{
	if (bPause) { return; }

	FHitResult Hit;
	bool HasHit = GetLevelCompIfAcceptable(Hit, RightHand);

	if (!HasHit && ! RightLevel) { return; }

	RightLevel = Hit.GetActor();

	ALevelComponent* LevelComp = Cast<ALevelComponent>(RightLevel);
	if (!LevelComp) { return; }

	LevelComp->GetShouldSnap() = false;
	LevelComp->SetParentHand(RightHand);
	LevelComp->SetYOldPos(RightHand->GetComponentLocation().Y);
	LevelComp->SetZOldPos(RightHand->GetComponentLocation().Z);
}

void AVRPlayer::ReleaseLevelCompRight()
{
	if (!RightLevel) { return; }

	ALevelComponent* LevelComp = Cast<ALevelComponent>(RightLevel);
	if (!LevelComp) { return; }

	LevelComp->SetParentHand(nullptr);
	LevelComp->RegisterRotationInformation();

	RightLevel = nullptr;
}