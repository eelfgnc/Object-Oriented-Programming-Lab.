#include "GoalKeeper.h"
#include"FootballPlayer.h"
#include<string>
#include<iostream>
using namespace std;
/**
*\brief Kalecide bir futbolcudur.
*\brief name, age ve paymentPerYear degiskenleri futbolcunun uye degiskenlerine atanir.
*\param age: yas
*\param name: isim
*\param paymentPerYear: yillik kazanc
*/
GoalKeeper::GoalKeeper(const string& name, int age, double paymentPerYear) :FootballPlayer(name, age, paymentPerYear) { }
/**
*\brief Kalecinin program icerisindeki kapsama alani bittiginde cagrilan fonksiyon.
*/
GoalKeeper::~GoalKeeper() { }
/**
*\brief Kalecinin ucreti hesaplanir.
*\brief Kalecinin ucreti bir futbolcu ucreti ile aynidir.
*\return payment: Kaleci ucreti
*/
double GoalKeeper::CalculatePaymentForThisYear() {
	double payment;
	payment = getPaymentPerYear();
	return payment;
}
/**
*\brief Kalecinin topu yakalamaya calismasini bildiren fonksiyon.
*/
void GoalKeeper::FlyAndTryCatch() {
	string x;
	x = this->getName();
	cout << "'" << x << "'" << " is flying and trying to catch ...\n";
}