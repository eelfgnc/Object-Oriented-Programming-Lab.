#include "Sphere.h"
/**
*\brief Kullanicinin belirledigi koordinat yerleri kurenin merkezini temsil eder.
*/
Sphere::Sphere(string color, bool x, int y, int z, int t) :Shape3D(color, x, y, z, t)
{
}
/**
*\brief Yikici fonksiyon
*/
Sphere::~Sphere()
{
}
/**
*\brief Kurenin yuzey alanini hesaplayan fonksiyondur.Yuzey alani 4/3 * PI *r*r*r formuluyle bulunur.
*\return Kurenin yuzey alani
*/
double Sphere::CalculateSurfaceArea()
{
	double r = 3;
	return (4 / 3) * 3.14 * r*r*r;
}
/**
*\brief Kullaniciya 'sphere' bilgisini donduren fonksiyondur.
*\return Cizilen seklin bilgisi
*/
string Sphere::GetShapeDescription()
{
	return "Sphere";
}
