#include<iostream>
#include<string>
#include "Player.h"
using namespace std;
/**
*\brief Yapici fonksiyondur.
*\param maxVolumeLevel: Player sinifinin sahip oldugu maxVolumeLevel uye degiskenine atanir.
*/
Player::Player(int maxVolumeLevel ) : maxVolumeLevel(maxVolumeLevel) { }
/**
*\brief Yikici fonksiyondur.
*/
Player::~Player() { }
/**
*\brief Kullaniciya media player'in acildigini soyleyen fonksiyondur.
*/
void Player::Open() {
	cout << "Player: Opened..." << endl;
}
/**
*\brief Kullaniciya media player'in durdurup bekletildigini soyleyen fonksiyondur.
*/
void Player::Pause() {
	cout << "Player: Pausing the media " << mediaName << endl;
}
/**
*\brief Kullaniciya media player'in calismaya basladigini soyleyen fonksiyondur.
*/
void Player::Play() { 
	cout << "Player: Playing the media " << mediaName << endl;
}
/**
*\brief Kullaniciya media player'in durduruldugunu soyleyen fonksiyondur.
*/
void Player::Stop() { 
	cout << "Player: Stopping the media " << mediaName << endl;
}
/**
*\brief Kullaniciya media player'in kapatildigini soyleyen fonksiyondur.
*/
void Player::Close() {
	cout << "Player: Closed..." << endl;
}
/**
*\brief Ses seviyesinin dusurulmesini saglayan fonksiyondur.
*\brief Eger mevcut ses seviyesinden bir miktar dusurulmek istenirse ses seviyesi sifirin altina dusup dusmedigi kontrol edilir.
*\brief Eger sifirin altina duserse ses seviyesi sifira esitlenir, dusmezse mevcut ses miktari dusurulmek istenen miktar kadar dusurulur.
*\param amount: Dusurulmek istenen ses miktari
*/
void Player::VolumeDown(int amount) {
	if (volumeLevel - amount < 0)	
		volumeLevel = 0;
	else 
		volumeLevel = volumeLevel - amount;
	cout << "Player: Volume Level: " << volumeLevel << endl;
}
/**
*\brief Ses seviyesinin arttirilmasini saglayan fonksiyondur.
*\brief Eger mevcut ses seviyesini bir miktar arttirmak istenirse ses seviyesi maksimum ses seviyesini gecip gecmedigi kontrol edilir.
*\brief Eger maksimum ses seviyesini gecerse ses seviyesi maksimum ses seviyesine esitlenir, gecmezse mevcut ses miktari arttirilmak istenen miktar kadar artar.
*\param amount: Arttirilmak istenen ses miktari
*/
void Player::VolumeUp(int amount) { 
	if (volumeLevel + amount > maxVolumeLevel)
		volumeLevel = maxVolumeLevel;
	else
		volumeLevel = volumeLevel + amount;
	cout << "Player: Volume Level: " << volumeLevel << endl;
}
/**
*\brief Saf sanal fonksiyon.Hiyerarside bulunan ayni ada sahip fonksiyonlar icin arayuz olusturur.
*/
void Player::BackWard() { }
/**
*\brief Saf sanal fonksiyon.Hiyerarside bulunan ayni ada sahip fonksiyonlar icin arayuz olusturur.
*/
void Player::EjectMedia() { }
/**
*\brief Saf sanal fonksiyon.Hiyerarside bulunan ayni ada sahip fonksiyonlar icin arayuz olusturur.
*/
void Player::ForWard() { }
/**
*\brief Saf sanal fonksiyon.Hiyerarside bulunan ayni ada sahip fonksiyonlar icin arayuz olusturur.
*\param mediaName: Player sinifinin uyesi olan mediaName isimli degiskene aktarilan parametre.
*/
void Player::MounthMedia(const string& mediaName) {
	cout << mediaName << ": Trying to mount the media..." << endl;
	cout << mediaName << ": Media is supported and playable" << endl;
}