// Fill out your copyright notice in the Description page of Project Settings.


#include "EndingGear.h"
#include "GameManager.h"
#include <Kismet/GameplayStatics.h>

AEndingGear::AEndingGear()
{
	this->Tags.Add(TagOfEndingGearTag);
	
}

void AEndingGear::BeginPlay()
{
	AGear::BeginPlay();

	AActor* tmp = UGameplayStatics::GetActorOfClass(GetWorld(), AGameManager::StaticClass());
	GameManager = Cast<AGameManager>(tmp);
}

void AEndingGear::PropagateSpeed()
{
	if (Speed == 0) { return; }

	GameManager->CheckEndGame();
}
