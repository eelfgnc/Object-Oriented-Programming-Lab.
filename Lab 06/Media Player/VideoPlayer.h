#pragma once
#include<iostream>
#include<string>
#include "Player.h"
using namespace std;
/**
*\author Elif GENC (01elifgenc@gmail.com)
*\date 20.12.2017
*/
class VideoPlayer:public Player
{
protected:
	/**
	\brief Desteklenen bicimler
	*/
	string* supportedFormats;
public:
	/**
	\brief Desteklenen format sayilari
	*/
	int supportedFormatCount;
	VideoPlayer(int maxVolumeLevel, string supportedFormats[], int supportedFormatCount);
	~VideoPlayer();
	void BackWard();
	void ForWard();
	void EjectMedia();
	void MounthMedia(const string& mediaName);
};

