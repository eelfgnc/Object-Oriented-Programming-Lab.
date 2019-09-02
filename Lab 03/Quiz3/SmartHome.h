#include<string>
#include<iostream>
using namespace std;
/**
* \brief Akilli bir ev sisteminde aydinlatma ve isitma icin gereken enerjiyi hesaplayan program
* \author Elif GENC (01elifgenc@gmail.com)
* \date 08.11.2017
*/
class SmartHome
{
private:
	string m_name;
	string m_city;
	double m_area;
	int m_roomCount;
	double m_heatingTemperature;

public:
	SmartHome(const string& name, const string& city);
	const string& getname();
	void setname(const string& name);
	const string& getcity();
	void setcity(const string& city);
	double getArea();
	void setArea(double area);
	int getRoomCount();
	void setRoomCount(int roomCount);
	void startHeating(double temperature);
	double stopHeating(double duration);
	void startLighting(int roomCount);
	double stopLighting(double duration);
};