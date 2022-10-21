/***************
geometry.c
Implementation of geometry formulas.
****************/
#include "geometry.h" // Like the contents of the file were pasted here

// Calculate volume of a sphere
double volumeSphere(double r)
{
// Note that we get access to PI defined in geometry.h
	return (4.0 / 3.0) * PI * r * r * r;
}

double volumeCylinder(double r, double h)
{
	return PI * r * r * h;
}

double areaTriangle(double b, double h)
{
	return (1.0 / 2.0) * b * h;
}