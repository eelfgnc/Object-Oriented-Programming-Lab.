#include<iostream>
#include<string>
#include "MusicPlayer.h"
#include "IPod.h"
using namespace std;
/**
*\brief Yapici fonksiyondur.
*\brief Mevcut ses seviyesini 50'ye ayarliyoruz.
*\param maxVolumeLevel: Player sinifinin sahip oldugu maxVolumeLevel uye degiskenine atanir.
*\param supportedFormats: MusicPlayerin supportedFormats uye degiskenine atanan degisken
*\param supportedFormatCount: MusicPlayerin supportedFormatCount uye degiskenine atanan degisken
*/
IPod::IPod(int maxVolumeLevel, string supportedFormats[], int supportedFormatCount)
	:MusicPlayer(maxVolumeLevel, supportedFormats, supportedFormatCount) {
	volumeLevel = 50;
}
/**
*\brief Yikici fonksiyon
*/
IPod::~IPod()
{
}
/**
*\brief IPod: Geriye dogru calisiyor.
*/
void IPod::BackWard()
{
	cout << "IPod: Backward the music " << mediaName << endl;
}
/**
*\brief IPod: Ileriye dogru calisiyor.
*/
void IPod::ForWard()
{
	cout << "IPod: Forward the music " << mediaName << endl;
}
/**
*\brief Ses seviyesinin dusurulmesini saglayan fonksiyondur.
*\brief Eger mevcut ses seviyesinden bir miktar dusurulmek istenirse ses seviyesi sifirin altina dusup dusmedigi kontrol edilir.
*\brief Eger sifirin altina duserse ses seviyesi sifira esitlenir, dusmezse mevcut ses miktari dusurulmek istenen miktar kadar dusurulur.
*\param amount: Dusurulmek istenen ses miktari
*/
void IPod::VolumeDown(int amount)
{
	if (volumeLevel - amount < 0)
		volumeLevel = 0;
	else
		volumeLevel = volumeLevel - amount;
	cout << "Player: Volume Level: " << volumeLevel << endl;
	cout << "IPod: Adjusting Equaliser" << endl;
}
/**
*\brief Ses seviyesinin arttirilmasini saglayan fonksiyondur.
*\brief Eger mevcut ses seviyesini bir miktar arttirmak istenirse ses seviyesi maksimum ses seviyesini gecip gecmedigi kontrol edilir.
*\brief Eger maksimum ses seviyesini gecerse ses seviyesi maksimum ses seviyesine esitlenir, gecmezse mevcut ses miktari arttirilmak istenen miktar kadar artar.
*\param amount: Arttirilmak istenen ses miktari
*/
void IPod::VolumeUp(int amount)
{
	if (volumeLevel + amount > maxVolumeLevel)
		volumeLevel = maxVolumeLevel;
	else
		volumeLevel = volumeLevel + amount;
	cout << "Player: Volume Level: " << volumeLevel << endl;
	cout << "IPod: Adjusting Equaliser" << endl;
}
