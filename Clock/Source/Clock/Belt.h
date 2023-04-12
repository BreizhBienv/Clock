// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Belt.generated.h"

class AGearBeltComp;

UCLASS()
class CLOCK_API ABelt : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABelt();

protected:

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = Root)
		USceneComponent* RootComp;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = Gear)
		AGearBeltComp* GearOne;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = Gear)
		AGearBeltComp* GearTwo;


	class AVRPlayer* VRPlayer;

	/* ---------- Spline ---------- */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Spline)
		class USplineComponent* SplineComp;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Spline)
		class USplineMeshComponent* SplineCompMesh;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Variable)
		float LinkMaxLength;;

	TArray<FVector> SplinePointsStartPos;

	void UpdateSplinePoints();

	void BreakLink();
	/* ---------------------------------------------------------------- */

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
