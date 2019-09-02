#include "Circle.h"
/**
*\brief Kullanicinin belirledigi koordinat yerleri cemberin merkezini temsil eder.
*/
Circle::Circle(string color, bool x, int y, int z) :Shape2D(color, x, y, z)
{
}
/**
*\brief Yikici fonksiyon
*/
Circle::~Circle()
{
}
/**
*\brief Cemberin yuzey alanini hesaplayan fonksiyondur.Cemberin yuzey alani 2*PI*r*r olarak hesaplanir.
*\return Yuzey alani
*/
double Circle::CalculateSurfaceArea()
{
	double r = 2;
	return 3.14*r*r;
}
/**
*\brief Kullanciya 'circle' bilgisini gonderen fonksiyondur.
*\return Cizilen seklin bilgisi
*/
string Circle::GetShapeDescription()
{
	return "circle";
}
