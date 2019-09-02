#pragma once
#include"FootballPlayer.h"
/**
*\author Elif GENC (01elifgenc@gmail.com)
*\date 11.12.2017
*/
class GoalKeeper :public FootballPlayer
{
	double paymentPerYear;
public:
	GoalKeeper(const string& name, int age, double paymentPerYear);
	double CalculatePaymentForThisYear();
	void FlyAndTryCatch();
	~GoalKeeper();
};

