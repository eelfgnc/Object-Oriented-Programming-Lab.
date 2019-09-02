#pragma once
#include<iostream>
#include<string>
using namespace std;
/**
*\author Elif GENC (01elifgenc@gmail.com)
*\date 13.12.2017
*/
class Vehicle
{
protected:
	/**
	*\brief Yolcu Sayisi
	*/
	int m_passengerCount;
	/**
	*\brief Aracin Uretim Yili
	*/
	string m_productionYear;
public:
	Vehicle(int passengerCount,const string& productionYear);
	~Vehicle();
};

