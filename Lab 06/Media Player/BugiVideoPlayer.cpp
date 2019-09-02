#include "BugiVideoPlayer.h"
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
BugiVideoPlayer::BugiVideoPlayer(int maxVolumeLevel, string supportedFormats[], int supportedFormatCount) 
	: VideoPlayer(maxVolumeLevel,supportedFormats,supportedFormatCount) {
	volumeLevel = 50;
}
/**
*\brief VideoPlayer: mediaName isimli medyayi cikart.
*\brief BugiVideoPlayer: Medya bozuldu.
*/
void BugiVideoPlayer::EjectMedia()
{
	cout << "VideoPlayer: Ejecting the media : " << mediaName << endl;
	cout << "BugiVideoPlayer: Media player crushed!" << endl;
}
/**
*\brief Yikici fonksiyon
*/
BugiVideoPlayer::~BugiVideoPlayer()
{
}
