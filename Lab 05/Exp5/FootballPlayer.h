#pragma once
#include"Player.h"
/**
*\author Elif GENC (01elifgenc@gmail.com)
*\date 11.12.2017
*/
class FootballPlayer:public Player{
protected:
	/**
	*\brief Futbolcunun yillik kazanci
	*/
	double paymentPerYear;
public:
	FootballPlayer(const string& name,int age,double paymentPerYear);
	double getPaymentPerYear();
	void Pas(const Player* player);
	void setPaymentPerYear(double paymentPerYear);
	void Shot();
	~FootballPlayer();
};

