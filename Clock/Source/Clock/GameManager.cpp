// Fill out your copyright notice in the Description page of Project Settings.


#include "GameManager.h"
#include "EndingGear.h"
#include <Kismet/GameplayStatics.h>
#include "Components/WidgetComponent.h"

// Sets default values
AGameManager::AGameManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

void AGameManager::CheckEndGame()
{
	for (AActor* actor : EndingGearList)
	{
		AEndingGear* gear = Cast<AEndingGear>(actor);
		
		if (gear == nullptr) { continue; }
		if (gear->GetSpeed() == 0) { return; }

	}

	DisplayEndMenu();
	bGameEnded = true;
}

// Called when the game starts or when spawned
void AGameManager::BeginPlay()
{
	Super::BeginPlay();

	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AEndingGear::StaticClass(), EndingGearList);
}

void AGameManager::DisplayEndMenu()
{
	if (bGameEnded) { return; }

	EndMenu->GetWidget()->SetVisibility(ESlateVisibility::Visible);

	if (GameMenu != nullptr)
	{
		GameMenu->DestroyComponent();
	}
}

// Called every frame
void AGameManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

