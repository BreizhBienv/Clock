// Fill out your copyright notice in the Description page of Project Settings.


#include "GearSupport.h"
#include "Gear.h"

// Sets default values
AGearSupport::AGearSupport()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	this->Tags.Add(SupportTag);

	RootComp = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	
	if (RootComp)
	{
		this->SetRootComponent(RootComp);

		Support = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Support"));

		if (Support)
		{
			Support->SetupAttachment(RootComp);
		}
	}
}

// Called when the game starts or when spawned
void AGearSupport::BeginPlay()
{
	Super::BeginPlay();
	
	Support->OnComponentBeginOverlap.AddDynamic(this, &AGearSupport::OnOverlapBegin);
	Support->OnComponentEndOverlap.AddDynamic(this, &AGearSupport::OnOverlapEnd);
}

void AGearSupport::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (!OtherActor->IsA(AGear::StaticClass())) { return; }

	Support->SetRenderCustomDepth(true);
	Support->CustomDepthStencilValue = OutlinePostProcess;
}

void AGearSupport::OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (!OtherActor->IsA(AGear::StaticClass())) { return; }

	Support->SetRenderCustomDepth(false);
	Support->CustomDepthStencilValue = 0;
}

// Called every frame
void AGearSupport::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

