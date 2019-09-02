#pragma once
#include "Shape2D.h"
/**
*\author Elif GENC (01elifgenc@gmail.com)
*\date 21.12.2017
*/
class Circle : public Shape2D
{
public:
	Circle(string color, bool x, int y, int z);
	~Circle();
	double CalculateSurfaceArea();
	string GetShapeDescription();
};

