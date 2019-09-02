#include<iostream>
using namespace std;
/**
*\brief Integer nesnesinin uye degiskeniyle uygun operator fonksiyonlarini kullanarak islem yapmaktir.
*\author Elif GENC (01elifgenc@gmail.com)
*\date 11.12.2017
*/
class Integer
{
	friend ostream &operator<<(ostream&, Integer&);
	friend istream &operator>>(istream&, Integer&);
public:
	int data;
public:
	Integer(int);
	Integer& operator+(const Integer&);
	Integer& operator+=(const Integer&);
	Integer& operator+(int);
	Integer& operator+=(int);
	Integer& operator-(const Integer&);
	Integer& operator-=(const Integer&);
	Integer& operator-(int);
	Integer& operator-=(int);
	Integer& operator*(const Integer&);
	Integer& operator*=(const Integer&);
	Integer& operator*(int);
	Integer& operator*=(int);
	Integer& operator/(const Integer&);
	Integer& operator/=(const Integer&);
	Integer& operator/(int);
	Integer& operator/=(int);
};

