// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Delegates/Delegate.h"
#include "RotationButton.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FRotateGears);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FStopGears);

UCLASS()
class CLOCK_API ARotationButton : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ARotationButton();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Mesh)
		UStaticMeshComponent* Box;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Mesh)
		UStaticMeshComponent* Sphere;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Material)
		UMaterial* Red;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Material)
		UMaterial* Green;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Tag)
		FName CommonGearTag = "Gear";

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Tag)
		FName StartingGearTag = "StartingGear";

	USceneComponent* RootComp;

	UFUNCTION()
		void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp,
			int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	bool bRotating = false;

	TArray<AActor*> FoundActors;

	UPROPERTY(BlueprintCallable, BlueprintAssignable)
		FRotateGears OnRotatePressed;

	UPROPERTY(BlueprintCallable, BlueprintAssignable)
		FStopGears OnStopPressed;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
