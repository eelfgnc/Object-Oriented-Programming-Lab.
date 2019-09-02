#pragma once
#include"FootballPlayer.h"
/**
*\author Elif GENC (01elifgenc@gmail.com)
*\date 11.12.2017
*/
class DefensivePlayer :public FootballPlayer
{
private:
	double paymentPerMatch;
	int playedMatchCount;
public:
	double CalculatePaymentForThisYear();
	void Defense();
	DefensivePlayer(const string& name, int age, double paymentPerYear,double paymentPerMatch);
	int getPlayedMatchCount();
	void setPlayedMatchCount(int playedMatchCount);
	void TripUp(const Player* player);
	~DefensivePlayer();
};