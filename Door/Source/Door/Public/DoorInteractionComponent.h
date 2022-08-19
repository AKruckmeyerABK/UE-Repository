// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Curves/CurveFloat.h"
#include "DoorInteractionComponent.generated.h"


class ATriggerBox;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class DOOR_API UDoorInteractionComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UDoorInteractionComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere);
	FRotator desiredRotation = FRotator(0.0f, 90.0f, 0.0f);

	FRotator startRotation;
	FRotator finalRotation;

	UPROPERTY(EditAnywhere);
	float timeToRotate = 1.0f;
	float currRotationTime = 0.0f;

	UPROPERTY(EditAnywhere);
	ATriggerBox* triggerBox;

	UPROPERTY(EditAnywhere);
	FRuntimeFloatCurve openCurve;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
};
