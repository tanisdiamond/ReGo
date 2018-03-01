#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "EnemyAIController.h"
#include "Waypoint.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "EnemyAI.generated.h"

UCLASS()
class REGO_API AEnemyAI : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AEnemyAI();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Waypoint)
		int CurrentWaypoint;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Waypoint)
		FName WaypointTag;
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION(BlueprintCallable, Category = MyFunctions)
		void MoveToWaypoints();

private:
	TArray<AActor*> Waypoints;

};
