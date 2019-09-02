#pragma once
#include "Shape2D.h"
/**
*\author Elif GENC (01elifgenc@gmail.com)
*\date 21.12.2017
*/
class CustomRectangle : public Shape2D
{
public:
	CustomRectangle(string color, bool x, int y, int z);
	~CustomRectangle();
	double CalculateSurfaceArea();
	string GetShapeDescription();
};

