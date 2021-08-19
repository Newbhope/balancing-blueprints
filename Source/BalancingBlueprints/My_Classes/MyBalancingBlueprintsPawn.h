// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BalancingBlueprints/BalancingBlueprintsPawn.h"

#include "MyBalancingBlueprintsPawn.generated.h"

/**
 * 
 */
UCLASS()
class BALANCINGBLUEPRINTS_API AMyBalancingBlueprintsPawn : public ABalancingBlueprintsPawn
{
	GENERATED_BODY()


public:
	// Begin Actor Interface
	virtual void Tick(float DeltaSeconds) override;
};
