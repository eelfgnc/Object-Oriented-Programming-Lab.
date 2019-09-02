#include "RectangularPrism.h"
/**
*\brief Dikdortgenler prizmasinin yuzey alanini hesaplayan fonksiyondur.Yuzey alani butun kenarlarin alanlari toplanarak bulunur.
*\return Dikdortgenler prizmasinin yuzey alani
*/
double RectangularPrism::CalculateSurfaceArea()
{
	int en = 2, boy = 4, yulseklik = 5;
	return 2 * en*boy + 2 * en*yulseklik + 2 * boy*yulseklik;
}
/**
*\brief Kullaniciya 'rectangularprism' bilgisini donduren fonksiyondur.
*\return Cizilen seklin bilgisi
*/
string RectangularPrism::GetShapeDescription()
{
	return "RectangularPrism";
}
/**
*\brief Kullanicinin belirledigi koordinat yerleri dikdortgenler prizmasinin merkezini temsil eder.
*/
RectangularPrism::RectangularPrism(string color, bool x, int y, int z,int t):Shape3D(color,x,y,z,t) { }
/**
*\brief Yikici fonksiyon
*/
RectangularPrism::~RectangularPrism()
{
}
