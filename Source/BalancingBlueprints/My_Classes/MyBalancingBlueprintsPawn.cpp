// Fill out your copyright notice in the Description page of Project Settings.


#include "MyBalancingBlueprintsPawn.h"

#include "MyVector.h"

void AMyBalancingBlueprintsPawn::Tick(float DeltaSeconds)
{
	FMyVector* MyVector = new FMyVector(3, 2, 1);
	FMyVector* SecondVector = new FMyVector(1, 2, 3);

	FMyVector* SumVector = FMyVector::Add(MyVector, SecondVector);

	const int Test = SumVector->XValue;
	FString TestString = FString::FromInt(Test);
	UE_LOG(LogTemp, Warning, TEXT("Vector X value: %d"), Test);

}
