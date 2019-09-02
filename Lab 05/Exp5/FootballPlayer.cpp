#include "FootballPlayer.h"
#include<string>
#include<iostream>
using namespace std;
/**
*\brief Futbolcu da bir oyuncudur.
*\brief name ve age parametreleri oyuncunun uye degiskenlerine, paymentPerYear parametresi ise futbolcunun paymentPerYear uye degiskenine atanir.
*\param age: yas
*\param name: isim
*\param paymentPerYear: yillik kazanc
*/
FootballPlayer::FootballPlayer(const string& name, int age, double paymentPerYear):Player(name,age),paymentPerYear(paymentPerYear) { } 
/**
*\brief Yikici fonksiyondur.
*\brief Futbolcunun program icerisindeki kapsama alani (scope) bittiginde cagrilir.
*/
FootballPlayer::~FootballPlayer() { }
/**
*\brief Futbolcunun yillik kazanci dondurulur.
*\return paymentPerYear: Yillik kazanc
*/
double FootballPlayer::getPaymentPerYear() {
	return paymentPerYear;
}
/**
*\brief Futbolcu parametre olarak gelen oyuncuya pas verir ve bu kullaniciya bildirilir.
*\param player: Pas verilen oyuncu
*/
void FootballPlayer::Pas(const Player* player) {
	string x;
	x = getName();
	cout <<"'" << x << "'" << " is passing to '" << player->getName() << "'\n";
}
/**
*\brief Gelen parametre futbolcunun yillik kazanci olarak ayarlanir.
*\param paymentPerYear: Yillik kazanc
*/
void FootballPlayer::setPaymentPerYear(double paymentPerYear) {
	this->paymentPerYear = paymentPerYear;
}
/**
*\brief Futbolcu sut ceker ve bu kullaniciya bildirilir.
*/
void FootballPlayer::Shot() {
	string x, y;
	x = getName();
	cout << "'" << x << "'" << " is shotting!\n";
}