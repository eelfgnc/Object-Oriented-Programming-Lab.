#include "VideoPlayer.h"
#include<iostream>
#include<string>
#include "Player.h"
using namespace std;
/**
*\brief Yapici fonksiyondur.
*\param maxVolumeLevel: Player sinifinin sahip oldugu maxVolumeLevel uye degiskenine atanir.
*\param supportedFormats: VideoPlayerin supportedFormats uye degiskenine atanan degisken
*\param supportedFormatCount: VideoPlayerin supportedFormatCount uye degiskenine atanan degisken
*/
VideoPlayer::VideoPlayer(int maxVolumeLevel, string supportedFormats[], int supportedFormatCount)
	:Player(maxVolumeLevel), supportedFormats(supportedFormats), supportedFormatCount(supportedFormatCount) { }
/**
*\brief Yikici fonksiyon
*/
VideoPlayer::~VideoPlayer() { }
/**
*\brief VideoPlayer: Geriye dogru calismayi desteklemez.
*/
void VideoPlayer::BackWard()
{
	cout << "VideoPlayer: Does not support the backward operation" << endl;
}
/**
*\brief VideoPlayer: Ileriye dogru calismayi desteklemez.
*/
void VideoPlayer::ForWard()
{
	cout << "VideoPlayer: Does not support the forward operation" << endl;
}
/**
*\brief MusicPlayer: mediaName isimli mediayi cikart.
*/
void VideoPlayer::EjectMedia()
{
	cout << "VideoPlayer: Ejecting the media : " << mediaName << endl;
}
/**
*\brief MusicPlayer: Ortami takmaya calisiyor.
*\brief MusicPlayer: Medya desteklenmektedir ve oynanabilir.
*\param mediaName: Medya ismi
*/
void VideoPlayer::MounthMedia(const string & mediaName)
{
	Player::mediaName = mediaName;
	cout << "VideoPlayer: Trying the mount the media..." << endl;
	cout << "VideoPlayer: Media is supported and playable" << endl;
}
