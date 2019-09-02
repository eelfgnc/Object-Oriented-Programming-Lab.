#include "Zeppelin.h"
#include<iostream>
#include<string>
using namespace std;
/**
*\brief Yapici Fonksiyon
*\param passengerCount: Aracin yolcu sayisina esit olur.
*\param productionYear: Aracin uretim yilina esit olur.
*\param wingCount: Aracin kanat sayisina esit olur.
*\param maxGasPressure:
*/
Zeppelin::Zeppelin(int passengerCount, const string& productionYear, int wingCount, int maxGasPressure) :AirwayVehicle(passengerCount, productionYear, wingCount), m_maxGasPressure(maxGasPressure)
{
	cout << "Maximum Gas Pressure: " << m_maxGasPressure << endl;
}
/**
*\brief Aractaki basincin arttigini bildiren fonksiyon
*/
void Zeppelin::FillPressure() {
	cout << "Filling Pressure..." << endl;
}
/**
*\brief Yikici Fonksiyon.Arac program icerisindeki kapsama alanindan cikarsa cagrilan fonksiyon.
*/
Zeppelin::~Zeppelin() { }