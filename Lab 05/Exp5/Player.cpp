#include "Player.h"
#include<string>
#include<iostream>
using namespace std;
/**
*\brief Yapici Fonksiyon.Nesne olusturuldugunda otomatik olarak cagrilir.
*\brief Parametre olarak gelen name ve age degiskenleri player sinifinin name ve age uye degiskenlerine atanir.
*\param age: yas
*\param name: isim
*/
Player::Player(const string& name, int age):name(name), age(age) { }
/**
*\brief Yikici Fonksiyon
*\brief Uretilen nesnenin kapsama alani bittiginde otomatik olarak cagrilir.
*/
Player::~Player(){ }
/**
*\brief age ismindeki uye degiskenin degeri dondurulur.
*\return age: Oyuncunun yasi
*/
int Player::getAge() {
	return age;
}
/**
*\brief name ismindeki uye degiskenin degeri dondurulur.
*\return age: Oyuncunun ismi
*/
const string& Player::getName() const {
	return name;
}
/**
*\brief Yonleri belirlemek icin enum yapisini kullaniyoruz.Boylece yonlere sirasiyla sayilar atamis oluruz.
*\brief Parametre olarak gelen direction degiskeninin degerine gore nesnenin hareket etmesini saglayan fonksiyonlar cagrilir.
*/
void Player::Move(Direction direction) {
	if (direction == 0)
		MoveEast();
	else if (direction == 1)
		MoveNorth();
	else if (direction == 2)
		MoveNorthEast();
	else if (direction == 3)
		MoveNorthWest();
	else if (direction == 4)
		MoveSouth();
	else if (direction == 5)
		MoveSouthEast();
	else if (direction == 6)
		MoveNorthWest();
	else if (direction == 7)
		MoveWest();
}
/**
*\brief Kullaniciya nesne dogu yonunde hareket ediyor bilgisi verilir.
*/
void Player::MoveEast() {
	string x;
	x = getName();
	cout << "'" << x << "'" << " is moving to East.\n";
}
/**
*\brief Kullaniciya nesne kuzey yonunde hareket ediyor bilgisi verilir.
*/
void Player::MoveNorth() {
	string x;
	x = getName();
	cout << "'" << x << "'" << " is moving to North.\n";
}
/**
*\brief Kullaniciya nesne kuzey dogu yonunde hareket ediyor bilgisi verilir.
*/
void Player::MoveNorthEast() {
	string x;
	x = getName();
	cout << "'" << x << "'" << " is moving to North-East.\n";
}
/**
*\brief Kullaniciya nesne kuzey bati yonunde hareket ediyor bilgisi verilir.
*/
void Player::MoveNorthWest() {
	string x;
	x = getName();
	cout << "'" << x << "'" << " is moving to North-West.\n";
}
/**
*\brief Kullaniciya nesne guney yonunde hareket ediyor bilgisi verilir.
*/
void Player::MoveSouth() {
	string x;
	x = getName();
	cout << "'" << x << "'" << " is moving to South.\n";
}
/**
*\brief Kullaniciya nesne guney dogu yonunde hareket ediyor bilgisi verilir.
*/
void Player::MoveSouthEast() {
	string x;
	x = getName();
	cout << "'" << x << "'" << " is moving to South-East.\n";
}
/**
*\brief Kullaniciya nesne guney bati yonunde hareket ediyor bilgisi verilir.
*/
void Player::MoveSouthWest() {
	string x;
	x = getName();
	cout << "'" << x << "'" << " is moving to South-West.\n";
}
/**
*\brief Kullaniciya nesne bati yonunde hareket ediyor bilgisi verilir.
*/
void Player::MoveWest() {
	string x;
	x = getName();
	cout << "'" << x << "'" << " is moving to West.\n";
}