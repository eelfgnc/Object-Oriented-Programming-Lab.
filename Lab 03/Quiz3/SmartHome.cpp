#include "SmartHome.h"
#include<iostream>
using namespace std;
SmartHome::SmartHome(const string& name, const string& city) {
	m_name = name;
	m_city = city;
}
/**
* \brief Nesnenin m_name uyesi test fonsiyonuna gonderilir.
*/
const string& SmartHome::getname() {
	return m_name;
}
/**
* \brief Kullanicinin girdigi name stringi nesnenin m_name uyesine atanir.
*/
void SmartHome::setname(const string& name) {
	m_name = name;
}
/**
* \brief Nesnenin m_city uyesi test fonsiyonuna gonderilir.
*/
const string& SmartHome::getcity() {
	return m_city;
}
/**
* \brief Kullanicinin girdigi city stringi nesnenin m_city uyesine atanir.
*/
void SmartHome::setcity(const string& city) {
	m_city = city;
}
/**
* \brief Nesnenin m_area uyesi test fonsiyonuna gonderilir.
*/
double SmartHome::getArea() {
	return m_area;
}
/**
* \brief Kullanicinin girdigi area nesnenin m_area uyesine atanir.
* \param area: Alan
*/
void SmartHome::setArea(double area) {
	m_area = area;
}
/**
* \brief Nesnenin m_roomCount uyesi test fonsiyonuna gonderilir.
*/
int SmartHome::getRoomCount() {
	return m_roomCount;
}
/**
* \brief Kullanicinin girdigi oda sayisi nesnenin m_roomCount uyesine atanir.
* \param roomCount: Oda sayisi
*/
void SmartHome::setRoomCount(int roomCount) {
	m_roomCount = roomCount;
}
/**
* \brief Kullanicinin girdigi sicaklik nesnenin m_heatingTemperature uyesine atanir..
* \param temperature: Sicaklik
*/
void SmartHome::startHeating(double temperature)
{
	m_heatingTemperature = temperature;
}
/**
* \brief Isitma icin gereken enerjiyi hesapliyor.
* \brief Enerji Sicaklik * sure * 5 * alan formuluyle hesaplanir.
* \param duration: Odayi isitirken gecen sure
* \return energy: Test fonksiyonuna gonderilen enerji miktari
*/
double SmartHome::stopHeating(double duration)
{
	double energy;
	energy = (double) m_heatingTemperature * duration * 0.5 * m_area;
	return energy;
}
/**
* \brief Kullanicinin girdigi oda sayisi nesnenin m_roomCount uyesine atanir.
* \param roomCount: Oda sayisi
*/
void SmartHome::startLighting(int roomCount)
{
	m_roomCount = roomCount;
}
/**
* \brief Odalari aydinlatmak icin gereken enerjiyi hesapliyor. 
* \brief Enerji oda sayisi * sure * 5 formuluyle hesaplanir.
* \param duration: Odayi aydinlatirken gecen sure
* \return energy: Test fonksiyonuna gonderilen enerji miktari
*/
double SmartHome::stopLighting(double duration) {
	double energy;
	energy = (double) m_roomCount * duration * 5;
	return energy;
}