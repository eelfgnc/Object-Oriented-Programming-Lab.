#include "DefensivePlayer.h"
#include<string>
#include<iostream>
using namespace std;
/**
*\brief Savunma oyuncusu da futbolcudur.
*\brief name, age ve paymentPerYear degiskenleri futbolcunun uye degiskenlerine atanirken, paymentPerMatch degiskeni ise savunma oyuncusunun ucreti olarak ayarlanir.
*\param age: yas
*\param name: isim
*\param paymentPerYear: yillik kazanc
*\param paymentPerMatch: Mac basina dusen ucret
*/
DefensivePlayer::DefensivePlayer(const string& name, int age, double paymentPerYear, double paymentPerMatch):FootballPlayer(name,age,paymentPerYear),paymentPerMatch(paymentPerMatch) { }
/**
*\brief Savunma oyuncusunun program icerisindeki kapsama alani bittiginde cagrilan fonksiyon.
*/
DefensivePlayer::~DefensivePlayer() { }
/**
*\brief Savunma oyuncusunun ucreti hesaplanir.
*\brief Ucret, oynadigi mac sayisi ile mac basina dusen ucret carpilir ve bir futbolcunun almasi gereken yillik kazanc eklenerek bulunur.
*\return payment: Savunma oyuncusunun aldigi ucret
*/
double DefensivePlayer::CalculatePaymentForThisYear() {
	double payment;
	payment = getPaymentPerYear() + (paymentPerMatch * playedMatchCount);
	return payment;
}
/**
*\brief Savunma oyuncusunun yaptigi savunma kullaniciya bildiriliyor.
*/
void DefensivePlayer::Defense() {
	string x;
	x = this->getName();
	cout << "'" << x << "'" << " is defending...\n";
}
/**
*\brief Savunma oyuncusunun oynadigi mac sayisi dondurulur.
*\return playedMatchCount: Savunma oyuncusunun oynadigi mac sayisi
*/
int DefensivePlayer::getPlayedMatchCount() {
	return playedMatchCount;
}
/**
*\brief Gelen parametre savunma oyuncusunun oynadigi mac sayisina atanir.
*\param playedMatchCount: Oynanilan mac sayisi
*/
void DefensivePlayer::setPlayedMatchCount(int playedMatchCount) {
	this->playedMatchCount = playedMatchCount;
}
/**
*\brief Savunma oyuncusu oyuncuya cekme takar ve bu durum kullaniciya bildirilir.
*/
void DefensivePlayer::TripUp(const Player* player) {
	string x;
	x = this->getName();
	cout << "'" << x << "'" << " tripped up '" << player->getName() << "' ...\n";
}