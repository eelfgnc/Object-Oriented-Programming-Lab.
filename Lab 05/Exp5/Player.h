#pragma once
#include<iostream>
using namespace std;
/**
*\author Elif GENC (01elifgenc@gmail.com)
*\date 11.12.2017
*/
class Player
{
protected:
	
	/**
	*\brief Oyuncu yasi
	*/
	int age;
	/**
	*\brief Oyuncu ismi
	*/
	string name;
public:
	/**
	*\brief Yonleri gosteren enum yapisi
	*\brief east: dogu, north: kuzey, north-east: kuzey dogu, north-west: kuzey bati, south: guney, south-east: guney dogu,south-west: guney bati, west: bati
	*/
	enum Direction { EAST, NORTH, NORTH_EAST, NORTH_WEST, SOUTH, SOUTH_EAST, SOUTH_WEST, WEST };
	int getAge();
	const string& getName() const;
	Player(const string& name, int age);
	void Move(Direction direction);
	~Player();
private:
	void MoveEast();
	void MoveNorth();
	void MoveNorthEast();
	void MoveNorthWest();
	void MoveSouth();
	void MoveSouthEast();
	void MoveSouthWest();
	void MoveWest();
};

