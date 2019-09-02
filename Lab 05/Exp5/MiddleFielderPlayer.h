#pragma once
#include"FootballPlayer.h"
/**
*\author Elif GENC (01elifgenc@gmail.com)
*\date 11.12.2017
*/
class MiddleFielderPlayer:public FootballPlayer
{
private:
	int assistCount;
	double paymentPerAssist;
public:
	double CalculatePaymentForThisYear();
	int getAssistCount();
	MiddleFielderPlayer(const string& name, int age, double paymentPerYear, double paymentPerAssist);
	void Press();
	void setAssistCount(int assistCount);
	void TryThroughBall(const Player* player);
	~MiddleFielderPlayer();
};

