#pragma once
#include<iostream>
#include<string>
#include "VideoPlayer.h"
using namespace std;
/**
*\author Elif GENC (01elifgenc@gmail.com)
*\date 20.12.2017
*/
class VLCVideoPlayer:public VideoPlayer
{
public:
	VLCVideoPlayer(int maxVolumeLevel, string supportedFormats[], int supportedFormatCount);
	void BackWard();
	void ForWard();
	void VolumeDown(int amount);
	void VolumeUp(int amount);
	~VLCVideoPlayer();
};

