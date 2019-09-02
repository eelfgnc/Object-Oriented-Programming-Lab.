#include<iostream>
#include<string>
#include"Airplane.h"
#include"Automobile.h"
#include"Truck.h"
#include"Zeppelin.h"
using namespace std;
/**
*\brief Automobile sinifindan bir nesne uretilir.Bu nesne uretilirken RoadVehicle ve Vehicle siniflarinin yapici fonksiyonu cagrilir.
*\brief RoadVehicle sinifindan ChangeTires fonksiyonu, Automobile sinifindan ise DriveOnRoad fonksiyonu cagrilir.
*/
void automobile()
{
	cout << "AUTOMOBILE\n";
	const string& y = "2015";
	Automobile a(5, y, 3, 8);
	a.ChangeTires();
	a.DriveOnRoad();
}
/**
*\brief Truck sinifindan bir nesne uretilir.Bu nesne uretilirken RoadVehicle ve Vehicle siniflarinin yapici fonksiyonu cagrilir.
*\brief RoadVehicle sinifindan ChangeTires fonksiyonu, Truck sinifindan ise CarryLoad fonksiyonu cagrilir.
*/
void truck() {
	cout << "TRUCK\n";
	const string& y = "2017";
	Truck a(2, y, 6, 7);
	a.ChangeTires();
	a.CarryLoad();
}
/**
*\brief Airplane sinifindan bir nesne uretilir.Bu nesne uretilirken AirwayVehicle ve Vehicle siniflarinin yapici fonksiyonu cagrilir.
*\brief AirwayVehicle sinifindan MaintainWings fonksiyonu, Airplane sinifindan ise FlyOnAir fonksiyonu cagrilir.
*/
void airplane() {
	cout << "AIRPLANE\n";
	const string& y = "2016";
	Airplane a(152, y, 2, 1005);
	a.MaintainWings();
	a.FlyOnAir();
}
/**
*\brief Zeppelin sinifindan bir nesne uretilir.Bu nesne uretilirken AirwayVehicle ve Vehicle siniflarinin yapici fonksiyonu cagrilir.
*\brief AirwayVehicle sinifindan MaintainWings fonksiyonu, Zeppelin sinifindan ise FillPressure fonksiyonu cagrilir.
*/
void zeppelin()
{
	cout << "ZEPPELIN\n";
	const string& y = "2011";
	Zeppelin a(152, y, 2, 100);
	a.MaintainWings();
	a.FillPressure();
}
int main()
{
	automobile();
	cout << endl;
	truck();
	cout << endl;
	airplane();
	cout << endl;
	zeppelin();
	cout << endl;

	system("pause");
	return 0;
}