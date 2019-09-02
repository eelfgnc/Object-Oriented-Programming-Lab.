#include "AirwayVehicle.h"
#include<iostream>
#include<string>
using namespace std;
/**
*\brief Yapici Fonksiyon
*\param passengerCount: Aracin yolcu sayisina esit olur.
*\param productionYear: Aracin uretim yilina esit olur.
*\param wingCount: Aracin kanat sayisina esit olur.
*/
AirwayVehicle::AirwayVehicle(int passengerCount, const string& productionYear, int wingCount) :Vehicle(passengerCount, productionYear), m_wingCount(wingCount)
{
	cout << "Wings Count: " << m_wingCount << endl;
}
/**
*\brief Arac kanatlarina bakim yapildigini bildiren fonksiyon
*/
void AirwayVehicle::MaintainWings() {
	cout << "Maintaining Wings..." << endl;
}
/**
*\brief Yikici Fonksiyon.Arac program icerisindeki kapsama alanindan cikarsa cagrilan fonksiyon.
*/
AirwayVehicle::~AirwayVehicle() { }