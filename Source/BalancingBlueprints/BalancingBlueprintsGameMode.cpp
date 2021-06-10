// Copyright Epic Games, Inc. All Rights Reserved.

#include "BalancingBlueprintsGameMode.h"
#include "BalancingBlueprintsPawn.h"

ABalancingBlueprintsGameMode::ABalancingBlueprintsGameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = ABalancingBlueprintsPawn::StaticClass();
}

