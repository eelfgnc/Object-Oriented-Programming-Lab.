#include "Shape.h"
/**
*\brief Kullanicinin belirledigi renk m_color,seklin gorunurlugu ise m_visibility uye degiskenine aktarilir.
*/
Shape::Shape(string & color,int x):m_color(color),m_visibility(x) { }
/**
*\brief Seklin yuzey alanini hesaplayan fonksiyondur.
*\return Yuzey alani
*/
double Shape::CalculateSurfaceArea() { return 0;}
/**
*\brief Seklin rengini kullaniciya donduren fonksiyondur.
*\return Seklin rengi
*/
string Shape::GetShapeDescription() { return m_color; }
/**
\brief Yikici fonksiyon
*/
Shape::~Shape()
{
}