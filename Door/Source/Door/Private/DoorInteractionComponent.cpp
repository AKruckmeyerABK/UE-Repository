// Fill out your copyright notice in the Description page of Project Settings.


#include "DoorInteractionComponent.h"
#include "Engine/TriggerBox.h"

// Sets default values for this component's properties
UDoorInteractionComponent::UDoorInteractionComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UDoorInteractionComponent::BeginPlay()
{
	Super::BeginPlay();

	startRotation = GetOwner()->GetActorRotation();
	finalRotation = GetOwner()->GetActorRotation() + desiredRotation;
	currRotationTime = 0.0f;
	
}


// Called every frame
void UDoorInteractionComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (currRotationTime < timeToRotate)
	{
		if (triggerBox && GetWorld() && GetWorld()->GetFirstPlayerController())
		{
			APawn* playerPawn = GetWorld()->GetFirstPlayerController()->GetPawn();
			if (playerPawn && triggerBox->IsOverlappingActor(playerPawn))
			{
				currRotationTime += DeltaTime;
				const float timeRatio = FMath::Clamp(currRotationTime / timeToRotate, 0.0f, 1.0f);
				const float rotationAlpha = openCurve.GetRichCurve()->Eval(timeRatio);
				const FRotator currRotation = FMath::Lerp(currRotation, finalRotation, rotationAlpha);
				GetOwner()->SetActorRotation(currRotation);
			}
		}
	}
}

