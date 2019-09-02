#include "Shape2D.h"
#include"Shape.h"
#include<string>
using namespace std;
/**
*\brief Kullanicinin belirledigi koordinat yerleri 2 boyutlu cismin merkezini temsil eder.
*/
Shape2D::Shape2D(string color,int x,int y,int z):Shape(color,x)
{
	m_centerofmass[0] = y;
	m_centerofmass[1] = z;
}
/**
*\brief Yikici fonksiyon
*/
Shape2D::~Shape2D()
{
}
/**
*\brief Seklin yuzey alanini hesaplayan fonksiyondur.
*\return Yuzey alani
*/
double Shape2D::CalculateSurfaceArea()
{
	return 0;

}
/**
*\brief Seklin rengini kullaniciya donduren fonksiyondur.
*\return Seklin rengi
*/
string Shape2D::GetShapeDescription()
{
	return m_color;
}
