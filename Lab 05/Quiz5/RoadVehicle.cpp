#include "RoadVehicle.h"
#include<iostream>
#include<string>
using namespace std;
/**
*\brief Yapici Fonksiyon
*\param passengerCount: Aracin yolcu sayisina esit olur.
*\param productionYear: Aracin uretim yilina esit olur. 
*\param tireCount: Aracin tekerlek sayisina esit olur. 
*/
RoadVehicle::RoadVehicle(int passengerCount, const string& productionYear, int tireCount):Vehicle(passengerCount, productionYear),m_tireCount(tireCount) {
	cout << "Tires count: " << m_tireCount << endl;
}
/**
*\brief Arac tekerleklerinin degistigini bildiren fonksiyon 
*/
void RoadVehicle::ChangeTires() {
	cout << "Changing Tires..." << endl;
}
/**
*\brief Yikici Fonksiyon.Arac program icerisindeki kapsama alanindan cikarsa cagrilan fonksiyon. 
*/
RoadVehicle::~RoadVehicle() { }