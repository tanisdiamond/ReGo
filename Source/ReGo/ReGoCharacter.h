// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "TimerManager.h"
#include "ReGoCharacter.generated.h"

/**
*
*/
UCLASS()
class REGO_API AReGoCharacter : public ACharacter
{
	GENERATED_BODY()



public:
	// Sets default values for this character's properties
	AReGoCharacter();

protected:
	// Called when the game starts or when spawned
	//virtual void BeginPlay() override;

	//bool rewindPressed;
	//TArray<FTransform*> TransformArray;
	//TArray<FTransform*> VelocityArray;



public:	

	// Called every frame
	//virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	//FTimerHandle reGoDelayTimerHandle;
	//void ReGo();
	
};
