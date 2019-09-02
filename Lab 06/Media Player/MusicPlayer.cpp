#include<iostream>
#include<string>
#include "MusicPlayer.h"
#include "Player.h"
using namespace std;
/**
*\brief Yapici fonksiyondur.
*\param maxVolumeLevel: Player sinifinin sahip oldugu maxVolumeLevel uye degiskenine atanir.
*\param supportedFormats: MusicPlayerin supportedFormats uye degiskenine atanan degisken
*\param supportedFormatCount: MusicPlayerin supportedFormatCount uye degiskenine atanan degisken
*/
MusicPlayer::MusicPlayer(int maxVolumeLevel, string supportedFormats[], int supportedFormatCount)
	:Player(maxVolumeLevel),supportedFormats(supportedFormats),supportedFormatCount(supportedFormatCount) { }
/**
*\brief MusicPlayer: Geriye dogru calismayi desteklemez.
*/
void MusicPlayer::BackWard()
{
	cout << "MusicPlayer: Does not support the backward operation" << endl;
}
/**
*\brief MusicPlayer: Ileriye dogru calismayi desteklemez.
*/
void MusicPlayer::ForWard()
{
	cout << "MusicPlayer: Does not support the forward operation" << endl;
}
/**
*\brief MusicPlayer: mediaName isimli mediayi cikart.
*/
void MusicPlayer::EjectMedia()
{
	cout << "MusicPlayer: Ejecting the media : " << mediaName << endl;
}
/**
*\brief MusicPlayer: Ortami takmaya calisiyor.
*\brief MusicPlayer: Medya desteklenmektedir ve oynanabilir.
*\param mediaName: Medya ismi
*/
void MusicPlayer::MounthMedia(const string & mediaName)
{
	Player::mediaName = mediaName;
	cout << "MusicPlayer: Trying the mount the media..." << endl;
	cout << "MusicPlayer: Media is supported and playable" << endl;
}
/**
*\brief Yikici fonksiyon.
*/
MusicPlayer::~MusicPlayer()
{
}
