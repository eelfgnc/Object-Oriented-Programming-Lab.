#pragma once
#include"AirwayVehicle.h"
/**
*\author Elif GENC (01elifgenc@gmail.com)
*\date 13.12.2017
*/
class Airplane:public AirwayVehicle
{
	/**
	*\brief Maksimum Yukseklik
	*/
	int m_maxHeight;
public:
	Airplane(int passengerCount, const string& productionYear, int wingCount, int maxHeight);
	void FlyOnAir();
	~Airplane();
};

