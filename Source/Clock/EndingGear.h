// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Gear.h"
#include "EndingGear.generated.h"

/**
 * 
 */
UCLASS()
class CLOCK_API AEndingGear : public AGear
{
	GENERATED_BODY()
	
public:
	AEndingGear();

protected:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Tag)
		FName TagOfEndingGearTag = "EndingGear";

	virtual void BeginPlay() override;

	class AGameManager* GameManager;

public:

	void PropagateSpeed() override;
};
