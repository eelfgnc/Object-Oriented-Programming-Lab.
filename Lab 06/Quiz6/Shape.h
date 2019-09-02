#pragma once
#include<iostream>
#include<string>
using namespace std;
/**
*\author Elif GENC (01elifgenc@gmail.com)
*\date 21.12.2017
*/
class Shape
{
protected:
	/**
	*\brief Seklin rengini belirtir.
	*/
	string m_color;
	/**
	*\brief Sekil gorunuyorsa 1, gorunmuyorsa 0 degerini tutan degisken.
	*/
	bool m_visibility;
public:
	Shape(string &color,int x);
	virtual double CalculateSurfaceArea() = 0;
	virtual string GetShapeDescription() = 0;
	~Shape();
};

