#pragma once
#include<string>
#include"Shape.h"
#include<iostream>
using namespace std;
/**
*\author Elif GENC (01elifgenc@gmail.com)
*\date 21.12.2017
*/
class Shape3D:public Shape
{
protected:
	/**
	*\brief Uc boyutlu cisimlerin koordinat duzleminde bulunan merkezlerini belirtir. 
	*/
	double m_centerofmass[3];
public:
	virtual double CalculateSurfaceArea() = 0;
	virtual string GetShapeDescription() = 0;
	Shape3D(string color, bool x, int y, int z,int t);
	~Shape3D();
};

