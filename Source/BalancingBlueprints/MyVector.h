// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */

class BALANCINGBLUEPRINTS_API FMyVector

{
public:
	FMyVector(int x, int y, int z);
	~FMyVector();

	FMyVector Add(FMyVector VectorOne, FMyVector VectorTwo);

	int XValue;
	int YValue;
	int ZValue;
};
