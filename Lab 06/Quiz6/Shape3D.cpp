#include "Shape3D.h"
/**
*\brief Seklin yuzey alanini hesaplayan fonksiyondur.
*\return Yuzey alani
*/
double Shape3D::CalculateSurfaceArea()
{
	return 0;
}
/**
*\brief Seklin rengini kullaniciya donduren fonksiyondur.
*\return Cizilen seklin bilgisi
*/
string Shape3D::GetShapeDescription()
{
	return m_color;
}
/**
*\brief Kullanicinin belirledigi koordinat yerleri 3 boyutlu cismin merkezini temsil eder.
*/
Shape3D::Shape3D(string color, bool x, int y, int z, int t) :Shape(color, x)
{
	m_centerofmass[0] = y;
	m_centerofmass[1] = z;
	m_centerofmass[2] = t;
}
/**
*\brief Yikici fonksiyon
*/
Shape3D::~Shape3D()
{
}
