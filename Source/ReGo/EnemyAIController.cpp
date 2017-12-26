// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyAIController.h"




void AEnemyAIController::OnMoveCompleted(FAIRequestID RequestID, const FPathFollowingResult & Result)
{


	if (Result.IsFailure())return;
	AEnemyAI* EnemyAI = Cast<AEnemyAI>(GetPawn());
	

	if (EnemyAI) {
	 
		EnemyAI->CurrentWaypoint++;
		EnemyAI->MoveToWaypoints();
	
	}
}
