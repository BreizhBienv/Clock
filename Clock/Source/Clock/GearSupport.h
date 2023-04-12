// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GearSupport.generated.h"

UCLASS()
class CLOCK_API AGearSupport : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGearSupport();

protected:

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Mesh)
		UStaticMeshComponent* Support;

	USceneComponent* RootComp;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = StencilValue)
		int OutlinePostProcess = 1;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Tag)
		FName SupportTag = "GearSupport";

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION()
		void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
		void OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
