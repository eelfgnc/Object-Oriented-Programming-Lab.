#include "ForwardPlayer.h"
#include<string>
#include<iostream>
using namespace std;
/**
*\brief Forvet oyuncusu da bir futbolcudur.
*\brief name, age ve paymentPerYear degiskenleri futbolcunun uye degiskenlerine atanir.
*\param age: yas
*\param name: isim
*\param paymentPerYear: yillik kazanc
*\param paymentPerGoal: Gol basina dusen ucret
*/
ForwardPlayer::ForwardPlayer(const string& name, int age, double paymentPerYear, double paymentPerGoal):FootballPlayer(name,age,paymentPerYear), paymentPerGoal(paymentPerGoal) { }
/**
*\brief Forvet oyuncusunun program icerisindeki kapsama alani bittiginde cagrilan fonksiyon.
*/
ForwardPlayer::~ForwardPlayer() { }
/**
*\brief Forvet oyuncusunun ucreti hesaplanir.
*\brief Forvet oyuncusunun ucreti, gol basina dusen ucret ile gol sayisi carpilir ve bir futbolcunun almasi gereken yillik kazanc eklenerek bulunur.
*\return payment: Forvet oyuncusunun ucreti
*/
double ForwardPlayer::CalculatePaymentForThisYear() {
	double payment;
	payment = getPaymentPerYear() + (paymentPerGoal * goalCount);
	return payment;
}
/**
*\brief Forvet oyuncusunun attigi gol sayisi dondurulur.
*\return goalCount: Gol sayisi
*/
int ForwardPlayer::getGoalCount() {
	return goalCount;
}
/**
*\brief Gelen parametre forvet oyuncusunun attigi gol sayisina atanir.
*\param goalCount: Atilan gol sayisi
*/
void ForwardPlayer::setGoalCount(int goalCount) {
	this->goalCount = goalCount;
}

void ForwardPlayer::ThrowYourSelf() {
	string x;
	x = getName();
	cout << "'" << x << "'" << " is throwing himself...\n";
}
/**
*\brief  Forvet oyuncusu sut atisi yapar ve bu durum kullaniciya bildirilir.
*\param player: Sut atisi yapilan oyuncu
*/
void ForwardPlayer::TryDribblePast(const Player* player) {
	string x;
	x = getName();
	cout << "'" << x << "'" << " is tring a dribble past on '" << player->getName() << "' ...\n";
}