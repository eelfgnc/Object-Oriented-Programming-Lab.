#include "Airplane.h"
#include<iostream>
#include<string>
using namespace std;
/**
*\brief Yapici Fonksiyon
*\param passengerCount: Aracin yolcu sayisina esit olur.
*\param productionYear: Aracin uretim yilina esit olur.
*\param wingCount: Aracin kanat sayisina esit olur.
*\param maxHeight: Aracin maksimum yuklsekligine esit olur.
*/
Airplane::Airplane(int passengerCount, const string& productionYear, int wingCount, int maxHeight) :AirwayVehicle(passengerCount, productionYear, wingCount), m_maxHeight(maxHeight)
{
	cout << "Maximum Height: " << m_maxHeight << endl;
}
/**
*\brief Arac uctugunu bildiren fonksiyon
*/
void Airplane::FlyOnAir()
{
	cout << "Flying On Air..." << endl;
}
/**
*\brief Yikici Fonksiyon.Arac program icerisindeki kapsama alanindan cikarsa cagrilan fonksiyon.
*/
Airplane::~Airplane(){ }
