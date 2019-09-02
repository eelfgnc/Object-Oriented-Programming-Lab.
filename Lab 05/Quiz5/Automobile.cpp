#include "Automobile.h"
#include"Vehicle.h"
/**
*\brief Yapici Fonksiyon
*\param passengerCount: Aracin yolcu sayisina esit olur.
*\param productionYear: Aracin uretim yilina esit olur.
*\param tireCount: Aracin tekerlek sayisina esit olur.
*\param maxSpeed: Aracin maksimum hizina esit olur.
*/
Automobile::Automobile(int passengerCount, const string& productionYear, int tireCount, int maxSpeed):RoadVehicle(passengerCount, productionYear, tireCount),m_maxSpeed(maxSpeed)
{
	cout << "Maximum speed: " << m_maxSpeed << endl;
}
/**
*\brief Aracin hareket ettigini bildiren fonksiyon
*/
void Automobile::DriveOnRoad()
{
	cout << "Driving On Road..." << endl;
}
/**
*\brief Yikici Fonksiyon.Arac program icerisindeki kapsama alanindan cikarsa cagrilan fonksiyon.
*/
Automobile::~Automobile(){}