// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */

class BALANCINGBLUEPRINTS_API FMyVector

{
public:
	FMyVector(double X, double Y, double Z);
	~FMyVector();

	static FMyVector* Add(const FMyVector* VectorOne, const FMyVector* VectorTwo);

	double XValue;
	double YValue;
	double ZValue;
};
