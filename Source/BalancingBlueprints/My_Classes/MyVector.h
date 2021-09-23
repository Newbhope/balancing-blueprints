#pragma once

#include "CoreMinimal.h"

/**
 * Custom 3D vector implementation
 */

class BALANCINGBLUEPRINTS_API FMyVector

{
public:
	FMyVector(double X, double Y, double Z);
	~FMyVector();
	
	double XValue;
	double YValue;
	double ZValue;
	
	// Returns a new MyVector pointer with component values that are the sum of the two MyVector parameters
	static FMyVector* Add(const FMyVector* VectorOne, const FMyVector* VectorTwo);

	// Returns a new MyVector pointer with component values that are the difference of the two MyVector parameters
	static FMyVector* Subtract(const FMyVector* VectorOne, const FMyVector* VectorTwo);

	static FMyVector* ScalarMultiply(const FMyVector* Vector, const double Scalar);

	static double DotProduct(const FMyVector* VectorOne, const FMyVector* VectorTwo);

	static FMyVector* CrossProduct(const FMyVector* VectorOne, const FMyVector* VectorTwo);

	static double Magnitude(const FMyVector* Vector);

	static FMyVector* Normalize(const FMyVector* Vector);
};
