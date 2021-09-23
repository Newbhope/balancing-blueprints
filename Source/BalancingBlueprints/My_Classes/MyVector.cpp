// Fill out your copyright notice in the Description page of Project Settings.

#include <math.h>
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
    const double ResultXValue = VectorOne->XValue + VectorTwo->XValue;
    const double ResultYValue = VectorOne->YValue + VectorTwo->YValue;
    const double ResultZValue = VectorOne->ZValue + VectorTwo->ZValue;

    FMyVector* ResultingVector = new FMyVector(ResultXValue, ResultYValue, ResultZValue);

    return ResultingVector;
}

FMyVector* FMyVector::Subtract(const FMyVector* VectorOne, const FMyVector* VectorTwo)
{
    const double ResultXValue = VectorOne->XValue - VectorTwo->XValue;
    const double ResultYValue = VectorOne->YValue - VectorTwo->YValue;
    const double ResultZValue = VectorOne->ZValue - VectorTwo->ZValue;

    FMyVector* ResultingVector = new FMyVector(ResultXValue, ResultYValue, ResultZValue);

    return ResultingVector;
}

FMyVector* FMyVector::ScalarMultiply(const FMyVector* Vector, const double Scalar)
{
    const double ResultXValue = Vector->XValue * Scalar;
    const double ResultYValue = Vector->YValue * Scalar;
    const double ResultZValue = Vector->ZValue * Scalar;

    FMyVector* ResultingVector = new FMyVector(ResultXValue, ResultYValue, ResultZValue);

    return ResultingVector;
}

double FMyVector::DotProduct(const FMyVector* VectorOne, const FMyVector* VectorTwo)
{
    const double ResultXValue = VectorOne->XValue * VectorTwo->XValue;
    const double ResultYValue = VectorOne->YValue * VectorTwo->YValue;
    const double ResultZValue = VectorOne->ZValue * VectorTwo->ZValue;  

    return ResultXValue + ResultYValue + ResultZValue; 
}

FMyVector* FMyVector::CrossProduct(const FMyVector* VectorOne, const FMyVector* VectorTwo)
{
    const double ResultXValue = (VectorOne->YValue * VectorTwo->ZValue) - (VectorOne->ZValue * VectorTwo->YValue);
    const double ResultYValue = (VectorOne->ZValue * VectorTwo->XValue) - (VectorOne->XValue * VectorTwo->ZValue);
    const double ResultZValue = (VectorOne->XValue * VectorTwo->YValue) - (VectorOne->YValue * VectorTwo->XValue);

    FMyVector* ResultingVector = new FMyVector(ResultXValue, ResultYValue, ResultZValue);

    return ResultingVector;
}

double FMyVector::Magnitude(const FMyVector* Vector)
{
    const double ComponentsSummed = pow(Vector->XValue, 2) + pow(Vector->YValue, 2) + pow(Vector->ZValue, 2);
    return sqrt(ComponentsSummed);
}

FMyVector* FMyVector::Normalize(const FMyVector* Vector)
{
    const double VectorMagnitude = Magnitude(Vector);
    const double ResultXValue = Vector->XValue / VectorMagnitude;
    const double ResultYValue = Vector->YValue / VectorMagnitude;
    const double ResultZValue = Vector->ZValue / VectorMagnitude;

    FMyVector* ResultingVector = new FMyVector(ResultXValue, ResultYValue, ResultZValue);

    return ResultingVector;
}

