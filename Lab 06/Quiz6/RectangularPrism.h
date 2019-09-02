#pragma once
#include "Shape3D.h"
/**
*\author Elif GENC (01elifgenc@gmail.com)
*\date 21.12.2017
*/
class RectangularPrism :public Shape3D
{
public:
	double CalculateSurfaceArea();
	string GetShapeDescription();
	RectangularPrism(string color, bool x, int y, int z,int t);
	~RectangularPrism();
};

