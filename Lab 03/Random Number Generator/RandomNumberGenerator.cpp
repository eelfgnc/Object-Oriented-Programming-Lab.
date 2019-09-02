#include "RandomNumberGenerator.h"
#include <time.h>
#include<cmath>
#include <iostream>
using namespace std;
RandomNumberGenerator::RandomNumberGenerator()
{
	srand(time(NULL));
}
RandomNumberGenerator::~RandomNumberGenerator()
{

}
int RandomNumberGenerator::getRandomInteger(int lowerBound, int upperBound)
{
	return lowerBound + rand() % (upperBound - lowerBound + 1);
}
/**
* \brief Kullanicinin girdigi maksimum ve minimum sayilar arasindan uretilen rastgele float sayinin hassasitini ayarlayan fonksiyon
* \brief Float sayilar uretebilmek icin oncelikle maksimum ve minimum sayilarimizi pow(10,precision+1) ile carpariz ve rand fonksiyonunun buldugu tam sayiyi pow(10,precision+1) ile bolerek ondalikli bir sayi elde ederiz.
* \param lowerBound: Uretilecek float sayinin minimum degeri
* \param upperBound: Uretilecek float sayinin maksimum degeri
* \param precision: Virgulden sonra kac basamak oldugu gosteren deger
*/
float RandomNumberGenerator::getRandomFloat(float lowerBound, float upperBound, Precision precision)
{
	int min, max;
	float random;
	if (precision == Precision::ONE) {
		min = lowerBound * pow(10, precision + 1);
		max = upperBound * pow(10, precision + 1);
		random = min + rand() % (max - min + 1);
		return (float)random / pow(10, precision + 1);
	}
	else if (precision == Precision::TWO) {
		min = lowerBound * pow(10, precision + 1);
		max = upperBound * pow(10, precision + 1);
		random = min + rand() % (max - min + 1);
		return (float)random / pow(10, precision + 1);
	}
	else if (precision == Precision::THREE) {
		min = lowerBound * pow(10, precision + 1);
		max = upperBound * pow(10, precision + 1);
		random = min + rand() / (max - min + 1);
		return (float)random / pow(10, precision + 1);
	}
	else if (precision == Precision::FOUR) {
		min = lowerBound * pow(10, precision + 1);
		max = upperBound * pow(10, precision + 1);
		random = min + rand() % (max - min + 1);
		return (float)random / pow(10, precision + 1);
	}
}

/**
* \brief Kullanicinin girdigi maksimum ve minimum sayilar arasindan uretilen rastgele double sayinin hassasitini ayarlayan fonksiyon
* \brief Double sayilar uretebilmek icin oncelikle maksimum ve minimum sayilarimizi pow(10,precision+1) ile carpariz ve rand fonksiyonunun buldugu sayiyi pow(10,precision+1) ile bolerek elde ederiz.
* \param lowerBound: Uretilecek double sayinin minimum degeri
* \param upperBound: Uretilecek double sayinin maksimum degeri
* \param precision: Virgulden sonra kac basamak oldugu gosteren deger
*/
double RandomNumberGenerator::getRandomDouble(double lowerBound, double upperBound, Precision precision)
{
	int min, max;
	double random;
	if (precision == Precision::ONE) {
		min = lowerBound * pow(10,precision+1);
		max = upperBound * pow(10, precision + 1);
		random = min + rand() % (max - min + 1);
		return (double)random / pow(10, precision + 1);
	}
	else if (precision == Precision::TWO) {
		min = lowerBound * pow(10, precision + 1);
		max = upperBound * pow(10, precision + 1);
		random = min + rand() % (max - min + 1);
		return (double)random / pow(10, precision + 1);
	}
	else if (precision == Precision::THREE) {
		min = lowerBound * pow(10, precision + 1);
		max = upperBound * pow(10, precision + 1);
		random = min + rand() / (max - min + 1);
		return (double)random / pow(10, precision + 1);
	}
	else if (precision == Precision::FOUR) {
		min = lowerBound * pow(10, precision + 1);
		max = upperBound * pow(10, precision + 1);
		random = min + rand() % (max - min + 1);
		return (double)random / pow(10, precision + 1);
	}
}

/**
* \brief Kullanicinin girdigi parametre degerlerine gore rastgele buyuk harf, kucuk harf veya rakam ureten fonksiyon
* \brief Eger kullanici buyuk harf isterse buyuk harflerin asci koduna bakarsak 65 ve 90 arasinda degistigini gozlemleriz.Rand fonskiyonunu kullanirken kullandigimiz sayi araligi bu sayilar olur. 
* \brief Kucuk harflerin asci tablosundaki degerleri ise 97 ve 122 sayilari arasinda degisir.Yine rand fonksiyonunun sayi araligi bu sayilar olur.
* \brief Kullanici CharacterType olarak DIGIT isterse kullaniciya sadece rastgele elde edilen rakamlar gonderilir. 
* \param characterType: Kullanicinin istedigi random sayi turu (Buyuk harfler, Kucuk harfler, Rakamlar)
*/
char RandomNumberGenerator::getRandomCharacter(CharacterType characterType)
{
	if (characterType == CharacterType::UPPER_LETTER) {
		return 65 + rand() % (90 - 65 + 1);
	}
	else if (characterType == CharacterType::LOWER_LETTER ) {
		return 97 + rand() % (122 - 97 + 1);
	}
	else if (characterType == CharacterType::DIGIT) {
		return rand() % 10;
	}
	
}