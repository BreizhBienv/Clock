// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameManager.generated.h"

class UWidgetComponent;

UCLASS()
class CLOCK_API AGameManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGameManager();

protected:

	//Level Complete
	TArray<AActor*> EndingGearList;
	UWidgetComponent* EndMenu;
	UWidgetComponent* GameMenu;

	bool bGameEnded = false;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void DisplayEndMenu();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
		bool GetEndBool() { return bGameEnded; }

	void CheckEndGame();

	UFUNCTION(BlueprintCallable)
		void SetGameMenu(UWidgetComponent* widget) { GameMenu = widget; }

	UFUNCTION(BlueprintCallable)
		void SetEndMenu(UWidgetComponent* widget) { EndMenu = widget; }
};
