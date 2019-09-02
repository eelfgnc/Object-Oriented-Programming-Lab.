#pragma once
#include<iostream>
#include<string>
#include "MusicPlayer.h"
using namespace std;
/**
*\author Elif GENC (01elifgenc@gmail.com)
*\date 20.12.2017
*/
class IPod:public MusicPlayer
{
public:
	IPod(int maxVolumeLevel, string supportedFormats[], int supportedFormatCount);
	~IPod();
	void BackWard();
	void ForWard();
	void VolumeDown(int amount);
	void VolumeUp(int amount);
};

