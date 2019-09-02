#include<iostream>
#include<string>
#include "MusicPlayer.h"
#include "Walkman.h"
using namespace std;
/**
*\brief Yapici fonksiyondur.
*\brief Mevcut ses seviyesini 35'e ayarliyoruz.
*\param maxVolumeLevel: Player sinifinin sahip oldugu maxVolumeLevel uye degiskenine atanir.
*\param supportedFormats: MusicPlayerin supportedFormats uye degiskenine atanan degisken
*\param supportedFormatCount: MusicPlayerin supportedFormatCount uye degiskenine atanan degisken
*/
Walkman::Walkman(int maxVolumeLevel, string supportedFormats[], int supportedFormatCount) 
	: MusicPlayer(maxVolumeLevel,supportedFormats,supportedFormatCount) { 
	volumeLevel = 35;
}
/**
*\brief Walkman: Tasiyici kapatiliyor.
*/
void Walkman::EjectMedia()
{
	cout << "Walkman: Closing the carriage" << endl;
}
/**
*\brief Yikici fonksiyon
*/
Walkman::~Walkman()
{
}
