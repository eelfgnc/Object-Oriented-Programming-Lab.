#include "VLCVideoPlayer.h"
#include<iostream>
#include<string>
#include "VideoPlayer.h"
using namespace std;
/**
*\brief Yapici fonksiyondur.
*\brief Mevcut ses seviyesi 50'ye ayarlaniyor.
*\param maxVolumeLevel: Player sinifinin sahip oldugu maxVolumeLevel uye degiskenine atanir.
*\param supportedFormats: VideoPlayerin supportedFormats uye degiskenine atanan degisken
*\param supportedFormatCount: VideoPlayerin supportedFormatCount uye degiskenine atanan degisken
*/
VLCVideoPlayer::VLCVideoPlayer(int maxVolumeLevel, string supportedFormats[], int supportedFormatCount)
	:VideoPlayer(maxVolumeLevel,supportedFormats,supportedFormatCount) {
	volumeLevel = 50;
}
/**
*\brief VLCVideoPlayer: Geriye dogru calisiyor.
*/ 
void VLCVideoPlayer::BackWard()
{
	cout << "VLCVideoPlayer: Backward the music " << mediaName << endl;
}
/**
*\brief VLCVideoPlayer: Ileriye dogru calisiyor.
*/
void VLCVideoPlayer::ForWard()
{
	cout << "VLCVideoPlayer: Forward the music " << mediaName << endl;
}
/**
*\brief Ses seviyesinin dusurulmesini saglayan fonksiyondur.
*\brief Eger mevcut ses seviyesinden bir miktar dusurulmek istenirse ses seviyesi sifirin altina dusup dusmedigi kontrol edilir.
*\brief Eger sifirin altina duserse ses seviyesi sifira esitlenir, dusmezse mevcut ses miktari dusurulmek istenen miktar kadar dusurulur.
*\param amount: Dusurulmek istenen ses miktari
*/
void VLCVideoPlayer::VolumeDown(int amount)
{

	if (volumeLevel - amount < 0)
		volumeLevel = 0;
	else
		volumeLevel = volumeLevel - amount;
	cout << "Player: Volume Level: " << volumeLevel << endl;
	cout << "VLCVideoPlayer: Adjusting Equaliser" << endl;
}
/**
*\brief Ses seviyesinin arttirilmasini saglayan fonksiyondur.
*\brief Eger mevcut ses seviyesini bir miktar arttirmak istenirse ses seviyesi maksimum ses seviyesini gecip gecmedigi kontrol edilir.
*\brief Eger maksimum ses seviyesini gecerse ses seviyesi maksimum ses seviyesine esitlenir, gecmezse mevcut ses miktari arttirilmak istenen miktar kadar artar.
*\param amount: Arttirilmak istenen ses miktari
*/
void VLCVideoPlayer::VolumeUp(int amount)
{
	if (volumeLevel + amount > maxVolumeLevel)
		volumeLevel = maxVolumeLevel;
	else
		volumeLevel = volumeLevel + amount;
	cout << "Player: Volume Level: " << volumeLevel << endl;
	cout << "VLCVideoPlayer: Adjusting Equaliser" << endl;
}
/**
*\brief Yikici fonksiyon
*/
VLCVideoPlayer::~VLCVideoPlayer()
{
}
