// Fill out your copyright notice in the Description page of Project Settings.


#include "MyVector.h"

FMyVector::FMyVector(int x, int y, int z)
{
    XValue = x;
    YValue = y;
    ZValue = z;
}

FMyVector::~FMyVector()
{

}

FMyVector FMyVector::Add(FMyVector VectorOne, FMyVector VectorTwo)
{
    int ResultXValue = VectorOne.XValue + VectorTwo.XValue;
    int ResultYValue = VectorOne.YValue + VectorTwo.YValue;
    int ResultZValue = VectorOne.ZValue + VectorTwo.ZValue;

    FMyVector ResultingVector = *new FMyVector(ResultXValue, ResultYValue, ResultZValue);

    return ResultingVector;
}

