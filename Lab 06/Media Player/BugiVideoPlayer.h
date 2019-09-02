#pragma once
#include<iostream>
#include<string>
#include "VideoPlayer.h"
using namespace std;
/**
*\author Elif GENC (01elifgenc@gmail.com)
*\date 20.12.2017
*/
class BugiVideoPlayer:public VideoPlayer
{
public:
	BugiVideoPlayer(int maxVolumeLevel, string supportedFormats[], int supportedFormatCount);
	void EjectMedia();
	~BugiVideoPlayer();
};

