#pragma once
#include "Vehicle.h"
/**
*\author Elif GENC (01elifgenc@gmail.com)
*\date 13.12.2017
*/
class AirwayVehicle:public Vehicle
{
protected:
	/**
	*\brief Kanat Sayisi
	*/
	int m_wingCount;
public:
	AirwayVehicle(int passengerCount, const string& productionYear, int wingCount);
	void MaintainWings();
	~AirwayVehicle();
};

