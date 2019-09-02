#include "Truck.h"
#include<iostream>
#include<string>
using namespace std;
/**
*\brief Yapici Fonksiyon
*\param passengerCount : Aracin yolcu sayisina esit olur.
*\param productionYear : Aracin uretim yilina esit olur.
*\param tireCount : Aracin tekerlek sayisina esit olur.
*\param maxLoadCapacity : Aracin maksimum yuk kapasitesine esit olur.
*/
Truck::Truck(int passengerCount, const string& productionYear, int tireCount, int maxLoadCapacity) :RoadVehicle(passengerCount, productionYear, tireCount), m_maxLoadCapacity(maxLoadCapacity)
{
	cout << "Maximum Load Capacity: " << m_maxLoadCapacity << endl;
}
/**
*\brief Aracin tuk tasidigini bildiren fonksiyon
*/
void Truck::CarryLoad() {
	cout << "Carrying Load..." << endl;
}
/**
*\brief Yikici Fonksiyon.Arac program icerisindeki kapsama alanindan cikarsa cagrilan fonksiyon.
*/
Truck::~Truck() {}
