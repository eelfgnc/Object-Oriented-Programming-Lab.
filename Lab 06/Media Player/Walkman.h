#pragma once
#include<iostream>
#include<string>
#include "MusicPlayer.h"
using namespace std;
/**
*\author Elif GENC (01elifgenc@gmail.com)
*\date 20.12.2017
*/
class Walkman:public MusicPlayer
{
public:
	Walkman(int maxVolumeLevel, string supportedFormats[], int supportedFormatCount);
	void EjectMedia();
	~Walkman();
};