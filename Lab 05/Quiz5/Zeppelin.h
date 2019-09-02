#pragma once
#include"AirwayVehicle.h"
/**
*\author Elif GENC (01elifgenc@gmail.com)
*\date 13.12.2017
*/
class Zeppelin:public AirwayVehicle
{
	/**
	*\brief Maksimum Gaz Basinci
	*/
	int m_maxGasPressure;
public:
	Zeppelin(int passengerCount, const string& productionYear, int wingCount, int maxGasPressure);
	void FillPressure();
	~Zeppelin();

};

