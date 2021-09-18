// Fill out your copyright notice in the Description page of Project Settings.


#include "MyVector.h"

FMyVector::FMyVector(const double X, const double Y, const double Z)
{
    XValue = X;
    YValue = Y;
    ZValue = Z;
}

FMyVector::~FMyVector()
{

}

FMyVector* FMyVector::Add(const FMyVector* VectorOne, const FMyVector* VectorTwo)
{
    const int ResultXValue = VectorOne->XValue + VectorTwo->XValue;
    const int ResultYValue = VectorOne->YValue + VectorTwo->YValue;
    const int ResultZValue = VectorOne->ZValue + VectorTwo->ZValue;

    FMyVector* ResultingVector = new FMyVector(ResultXValue, ResultYValue, ResultZValue);

    return ResultingVector;
}

FMyVector* FMyVector::Subtract(const FMyVector* VectorOne, const FMyVector* VectorTwo)
{
    return new FMyVector(1, 2, 3);
}

double FMyVector::DotProduct(const FMyVector* VectorOne, const FMyVector* VectorTwo)
{
    return 1;
}

FMyVector* FMyVector::CrossProduct(const FMyVector* VectorOne, const FMyVector* VectorTwo)
{
    return new FMyVector(1, 2, 3);
}

