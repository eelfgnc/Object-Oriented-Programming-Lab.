#include<iostream>
#include<string>
#include "SmartHome.h"
using namespace std;
int main() {
	SmartHome s1("Elif","Genc");

	string name;
	cout << "NAME: ";
	getline(cin, name);
	s1.setname(name);
	cout << "NAME: " << s1.getname() << endl;

	string city;
	cout << "CITY: ";
	getline(cin, city);
	s1.setcity(city);
	cout << "CITY: " << s1.getcity() << endl;
	
	double area;
	cout << "AREA: ";
	cin >> area;
	s1.setArea(area);
	cout << "AREA: " << s1.getArea() << endl;

	int room_count;
	cout << "ROOM COUNT: ";
	cin >> room_count;
	s1.setRoomCount(room_count);
	cout << "ROOM COUNT: " << s1.getRoomCount() << endl;

	double temperature;
	cout << "TEMPERATURE: ";
	cin >> temperature;
	s1.startHeating(temperature);

	double duration;
	cout << "DURATION: ";
	cin >> duration;
	double energy = s1.stopHeating(duration);
	cout << "HEATING ENERGY: " << energy << endl;

	s1.startLighting(4);
	double energy1 = s1.stopLighting(2.26);
	cout << "LUMINOUS ENERGY: " << energy1 << endl;


	system("pause");
	return 0;
}