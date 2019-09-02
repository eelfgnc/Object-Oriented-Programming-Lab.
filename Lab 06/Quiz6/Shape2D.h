#pragma once
#include"Shape.h"
/**
*\author Elif GENC (01elifgenc@gmail.com)
*\date 21.12.2017
*/
class Shape2D:public Shape
{
protected:
	/**
	*\brief Iki boyutlu cisimlerin koordinat duzleminde bulunan merkezlerini belirtir.
	*/
	double m_centerofmass[2];
public:
	Shape2D(string color,int x,int y, int z);
	~Shape2D();
	virtual double CalculateSurfaceArea() = 0;
	virtual string GetShapeDescription() = 0;
};

