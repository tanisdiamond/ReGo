// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "Waypoint.generated.h"

/**
 * 
 */
UCLASS()
class REGO_API AWaypoint : public AStaticMeshActor
{
	GENERATED_BODY()
	


public:
	int GetWaypointOrder();

private:
	UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = "true"))
	int WaypointOrder;
	
	
	
};
