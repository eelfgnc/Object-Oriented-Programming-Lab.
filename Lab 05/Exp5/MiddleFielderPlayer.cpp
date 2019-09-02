#include "MiddleFielderPlayer.h"
#include<string>
#include<iostream>
using namespace std;
/**
*\brief Orta saha oyuncusu da bir futbolcudur.
*\brief name, age ve paymentPerYear parametreleri futbolcunun uye degiskenlerine atanir.
*\param age: yas
*\param name: isim
*\param paymentPerYear: yillik kazanc
*\param paymentPerAssist: Asist basina dusen ucret
*/
MiddleFielderPlayer::MiddleFielderPlayer(const string& name, int age, double paymentPerYear, double paymentPerAssist):FootballPlayer(name,age,paymentPerYear),paymentPerAssist(paymentPerAssist) { }
/**
*\brief Orta saha oyuncusunun program icerisindeki kapsama alani bittiginde cagrilan fonksiyon.
*/
MiddleFielderPlayer::~MiddleFielderPlayer() { }
/**
*\brief Orta saha oyuncusunun ucreti, asist sayisi ile asist basina dusen ucret carpilir ve bir futbolcunun alacagi yillik ucret ile toplanir.
*\return payment: Orta saha oyuncusunun ucreti
*/
double MiddleFielderPlayer::CalculatePaymentForThisYear() {
	double payment;
	payment = getPaymentPerYear() + (paymentPerAssist * assistCount);
	return payment;
}
/**
*\brief Orta saha oyuncusunun yaptigi asist sayisi dondurulur.
*\return assistCount: asist sayisi
*/
int MiddleFielderPlayer::getAssistCount() {
	return assistCount;
}
/**
*\brief Orta saha oyuncusunun yaptigi baski kullaniciya bildiriliyor.
*/
void MiddleFielderPlayer::Press() {
	string x;
	x = getName();
	cout << "'" << x << "'" << " is pressing...\n";
}
/**
*\brief Gelen parametre orta saha oyuncusunun yaptigi asist sayisina atanir. .
*\param assistCount: asist sayisi
*/
void MiddleFielderPlayer::setAssistCount(int assistCount) {
	this->assistCount = assistCount;
}
/**
*\brief Orta saha oyuncusu topla oyuncuya dogru ilerliyor ve bu kullaniciya bildiriliyor.
*\param player: hedef oyuncu
*/
void MiddleFielderPlayer::TryThroughBall(const Player* player) {
	string x;
	x = getName();
	cout << "'" << x << "'" << " is tring a through ball to '" << player->getName() << "'\n";
}
