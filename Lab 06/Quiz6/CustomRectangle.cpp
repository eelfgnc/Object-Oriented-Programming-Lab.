#include "CustomRectangle.h"
/**
*\brief Kullanicinin belirledigi koordinat yerleri dikdortgenin merkezini temsil eder.
*/
CustomRectangle::CustomRectangle(string color, bool x, int y, int z):Shape2D(color,x,y,z)
{
}
/**
*\brief Yikici fonksiyon
*/
CustomRectangle::~CustomRectangle()
{
}
/**
*\brief Dikdortgenin alani uzun kenar ile kisa kenarin carpimi le bulunur.
*\brief Dikdortgenin alani
*/
double CustomRectangle::CalculateSurfaceArea()
{
	double en = 3, boy = 4;
	return en*boy;
}
/**
*\brief Kullanciya 'customrectangle' bilgisini gonderen fonksiyondur.
*\return Cizilen seklin bilgisi
*/
string CustomRectangle::GetShapeDescription()
{
	return " CustomRectangle";
}
