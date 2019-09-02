#pragma once
#include<iostream>
#include<string>
using namespace std;
/**
*\author Elif GENC (01elifgenc@gmail.com)
*\date 20.12.2017
*/
class Player
{
protected:
	/**
	*\brief Maksimum ses miktari 
	*/
	int maxVolumeLevel;
	/**
	*\brief Media playerin ismi
	*/
	string mediaName;
	/**
	*\brief Mecvut ses miktari 
	*/
	int volumeLevel;
public:
	Player(int = 100);
	virtual void BackWard() = 0;
	virtual void EjectMedia() = 0;
	virtual void ForWard() = 0;
	virtual void MounthMedia(const string& mediaName) = 0;
	void Open();
	void Pause();
	void Play();
	void Stop();
	void Close();
	virtual void VolumeDown(int amount);
	virtual void VolumeUp(int amount);
	~Player();
};

