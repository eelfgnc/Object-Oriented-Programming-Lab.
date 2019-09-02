#pragma once
#include<iostream>
#include<string>
#include "Player.h"
using namespace std;
/**
*\author Elif GENC (01elifgenc@gmail.com)
*\date 20.12.2017
*/
class MusicPlayer:public Player
{
protected:
	/**
	\brief Desteklenen format sayilari
	*/
	int supportedFormatCount;
	/**
	\brief Desteklenen bicimler
	*/
	string* supportedFormats;
public:
	MusicPlayer(int maxVolumeLevel,string supportedFormats[],int supportedFormatCount);
	void BackWard();
	void ForWard();
	void EjectMedia();
	void MounthMedia(const string& mediaName);
	~MusicPlayer();
};

