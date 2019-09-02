#include<iostream>
using namespace std;
/**
*\brief Amac: Kullanicinin istedigi boyutta bir dizi olusturulur ve bu dizinin elemanlariyla belli basli islemler yapabilmek icin uygun operator fonksiyonlarinin iceriklerini yazmaktir.
*\brief Vector sinifinin iki tane uye degiskeni ve 27 tane de uye fonksiyonu vardir.
*\brief Uye degiskenlerden m_data pointeri ondalikli sayi turunde bir dizinin adresini tutarken, m_dimension degiskeni ise dizinin boyutunu tutar.
*\brief Aciklamalarda kullandigim dizi kelimesi nesnenin m_data uyesinin tuttugu dizi olacaktir.
*\author Elif GENC (01elifgenc@gmail.com)
*\date 11.12.2017
*/
class Vector
{
	friend istream &operator>>(istream &, Vector &);
	friend ostream &operator<<(ostream &, const Vector &);
private:
	double* m_data;
	int m_dimension;
public:
	Vector(int = 3);
	Vector(double[], int);
	Vector(const Vector &);
	~Vector();
	int getDimension();
	const Vector &operator=(const Vector&);
	bool operator==(const Vector&);
	bool operator!=(const Vector&);
	bool operator<(const Vector&);
	bool operator<=(const Vector&);
	bool operator>(const Vector&);
	bool operator>=(const Vector&);
	double &operator[](int);
	const double &operator[](int) const;
	Vector operator+(const Vector&);
	Vector& operator+=(const Vector&);
	Vector operator-(const Vector&);
	Vector& operator-=(const Vector&);
	double operator*(const Vector&);
	Vector operator*(const double);
	Vector& operator*=(const double);
	Vector operator/(const Vector&);
	Vector& operator/=(const Vector&);
	Vector operator/(const double);
	Vector& operator/=(const double);
	double operator()();
	Vector& operator!();
};