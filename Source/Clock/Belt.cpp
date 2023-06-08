// Fill out your copyright notice in the Description page of Project Settings.


#include "Belt.h"
#include "Components/SceneComponent.h"
#include "GearBeltComp.h"
#include "Components/ActorComponent.h"
#include "Components/SplineComponent.h"
#include "Components/SplineMeshComponent.h"
#include "VRPlayer.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
ABelt::ABelt()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	RootComp = CreateDefaultSubobject<USceneComponent>(TEXT("root"));
	
	if (RootComp != nullptr)
	{
		this->SetRootComponent(RootComp);

		SplineComp = CreateDefaultSubobject<USplineComponent>(TEXT("SplineComp"));

		if (SplineComp)
		{
			SplineComp->SetupAttachment(RootComp);

			SplineCompMesh = CreateDefaultSubobject<USplineMeshComponent>(TEXT("SplineMesh"));

			if (SplineCompMesh)
			{
				SplineCompMesh->SetupAttachment(SplineComp);
			}
		}
	}
}

void ABelt::UpdateSplinePoints()
{
	SplineComp->SetLocationAtSplinePoint(0, GearOne->GetActorLocation(), ESplineCoordinateSpace::World);
	SplineCompMesh->SetStartPosition(SplineComp->GetLocationAtSplinePoint(0, ESplineCoordinateSpace::Local) + SplinePointsStartPos[0]);

	SplineComp->SetLocationAtSplinePoint(1, GearTwo->GetActorLocation(), ESplineCoordinateSpace::World);
	SplineCompMesh->SetEndPosition(SplineComp->GetLocationAtSplinePoint(1, ESplineCoordinateSpace::Local) + SplinePointsStartPos[1]);
}

void ABelt::BreakLink()
{
	if (LinkMaxLength > SplineComp->GetSplineLength()) { return; }

	if (GearOne->GetIsAttached())
	{
		GearOne->UponRemovingFromSupport();
	}

	if (GearTwo->GetIsAttached())
	{
		GearTwo->UponRemovingFromSupport();
	}

	if (VRPlayer != nullptr)
	{
		if (VRPlayer->GetLeftObject() == GearOne || VRPlayer->GetLeftObject() == GearTwo)
		{
			VRPlayer->SetLeftObject(nullptr);
		}

		if (VRPlayer->GetRightObject() == GearOne || VRPlayer->GetRightObject() == GearTwo)
		{
			VRPlayer->SetRightObject(nullptr);
		}
	}

	GearOne->SetActorTransform(GearOne->GetStartTransform());
	GearOne->DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);

	GearTwo->SetActorTransform(GearTwo->GetStartTransform());
	GearTwo->DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
}

// Called when the game starts or when spawned
void ABelt::BeginPlay()
{
	Super::BeginPlay();
	
	GearOne->SetLinkedGear(GearTwo);
	GearTwo->SetLinkedGear(GearOne);

	for (int i = 0; i < SplineComp->GetNumberOfSplinePoints(); ++i)
	{
		SplinePointsStartPos.Add(SplineComp->GetLocationAtSplinePoint(i, ESplineCoordinateSpace::Local));
	}


	AActor* tmp = UGameplayStatics::GetActorOfClass(GetWorld(), AVRPlayer::StaticClass());
	VRPlayer = Cast<AVRPlayer>(tmp);
}

// Called every frame
void ABelt::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	UpdateSplinePoints();

	BreakLink();
}