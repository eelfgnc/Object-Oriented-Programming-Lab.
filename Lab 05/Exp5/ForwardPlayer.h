#pragma once
#include"FootballPlayer.h"
/**
*\author Elif GENC (01elifgenc@gmail.com)
*\date 11.12.2017
*/
class ForwardPlayer :public FootballPlayer
{
private:
	int goalCount;
	double paymentPerGoal;
public:
	ForwardPlayer(const string& name, int age, double paymentPerYear, double paymentPerGoal);
	~ForwardPlayer();
	double CalculatePaymentForThisYear();
	int getGoalCount();
	void setGoalCount(int goalCount);
	void ThrowYourSelf();
	void TryDribblePast(const Player* player);
};

