#pragma once
#include"RoadVehicle.h"
/**
*\author Elif GENC (01elifgenc@gmail.com)
*\date 13.12.2017
*/
class Automobile:public RoadVehicle
{
private:
	/**
	*\brief Maksimum Hiz Limiti
	*/
	int m_maxSpeed;
public:
	Automobile(int passengerCount, const string& productionYear, int tireCount, int maxSpped);
	void DriveOnRoad();
	~Automobile();
};

