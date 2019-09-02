#include "Vehicle.h"
#include<iostream>
#include<string>
using namespace std;
/**
*\brief Yapici Fonksiyon.
*\param passengerCount: Aracin yolcu sayisina esit olur.
*\param productionYear: Aracin uretim yilina esit olur. 
*/
Vehicle::Vehicle(int passengerCount, const string& productionYear):m_passengerCount(passengerCount),m_productionYear(productionYear){ 
	cout << "Passenger Count: " << m_passengerCount << endl;
	cout << "Production Year: " << m_productionYear << endl;
}
/**
*\brief Yikici Fonksiyon.Arac program icerisindeki kapsama alanindan cikarsa cagrilan fonksiyon
*/
Vehicle::~Vehicle() { }