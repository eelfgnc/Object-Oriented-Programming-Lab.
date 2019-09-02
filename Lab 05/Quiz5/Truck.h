#pragma once
#include"RoadVehicle.h"
/**
*\author Elif GENC (01elifgenc@gmail.com)
*\date 13.12.2017
*/
class Truck:public RoadVehicle
{
private:
	/**
	*\brief Maksimum Yuk Limiti
	*/
	int m_maxLoadCapacity;
public:
	Truck(int passengerCount, const string& productionYear, int tireCount, int maxLoadCapacity);
	void CarryLoad();
	~Truck();
};

