// Fill out your copyright notice in the Description page of Project Settings.

#include "ReGoCharacter.h"


// Sets default values
AReGoCharacter::AReGoCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
/*
void AReGoCharacter::BeginPlay()
{
	Super::BeginPlay();
	//GetWorld()->GetTimerManager().SetTimer(reGoDelayTimerHandle, this, &AReGoCharacter::ReGo, 20.0f, true);
}
*/
// Called every frame

/*
void AReGoCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
*/

// Called to bind functionality to input
void AReGoCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

/*
void AReGoCharacter::ReGo() {

	GetWorldTimerManager().ClearTimer(reGoDelayTimerHandle);

}
*/

