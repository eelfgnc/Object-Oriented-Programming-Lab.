#pragma once
#include"Shape3D.h"
/**
*\author Elif GENC (01elifgenc@gmail.com)
*\date 21.12.2017
*/
class Sphere : public Shape3D
{
public:
	Sphere(string color, bool x, int y, int z, int t);
	~Sphere();
	double CalculateSurfaceArea();
	string GetShapeDescription();
};

