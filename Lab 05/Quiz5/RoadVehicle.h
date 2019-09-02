#pragma once
#include"Vehicle.h"
/**
*\author Elif GENC (01elifgenc@gmail.com)
*\date 13.12.2017
*/
class RoadVehicle:public Vehicle{
protected:
	/**
	*\brief Tekerlek Sayisi
	*/
	int m_tireCount;
public:
	RoadVehicle(int passengerCount,const string& productionYear,int tireCount);
	void ChangeTires();
	~RoadVehicle();
};

