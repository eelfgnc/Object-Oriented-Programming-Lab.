#include "RandomNumberGenerator.h"
#include <iostream>
using namespace std;
/**
* \brief Uretilen tam sayinin dogrulugunu kontrol eden fonksiyon
* \brief Kullanicinin istedigi random tam sayi kullanicinin belirledigi aralik icerisindeyse sayi ekrana yazdirilir.
* \brief Rastgele uretilen sayi kullanicinin istedigi aralikta degilse uyari mesaji verilir.
* \param generator: RandomNumberGenerator sinifindan uretilen nesnenin adresi
* \param lowerBound: Uretilecek tam sayinin minimum degeri
* \param upperBound: Uretilecek tam sayinin maksimum degeri
*/
void TEST_RandomInteger(RandomNumberGenerator& generator, int lowerBound, int upperBound) {
	int randomNumber = generator.getRandomInteger(lowerBound, upperBound);
	if (randomNumber >= lowerBound && randomNumber <= upperBound) {
		cout << "SUCCESS : " << randomNumber << endl; 
	}
	else {
		cout << "FAILURE : Obtained number is not between the range [" <<
			lowerBound << "," << upperBound << "]" << endl;
	}
}
/**
* \brief Uretilen (float) ondalik sayinin dogrulugunu kontrol eden fonksiyon
* \brief Rastgele olusturulan float sayi, kullanicinin belirledigi aralik icerisindeyse sayi ekrana yazdirilir.
* \brief Uretilen sayi kullanicinin istedigi aralikta degilse uyari mesaji verilir.
* \param generator: RandomNumberGenerator sinifindan uretilen nesnenin adresi
* \param lowerBound: Uretilecek float sayinin minimum degeri
* \param upperBound: Uretilecek float sayinin maksimum degeri
* \param precision: Virgulden sonra kac basamak olacagini belirten parametre
*/
void TEST_RandomFloat(RandomNumberGenerator& generator, float lowerBound, float upperBound, RandomNumberGenerator::Precision precision)
{
	float randomNumber = generator.getRandomFloat(lowerBound, upperBound, precision);
	if (randomNumber >= lowerBound && randomNumber <= upperBound) { 
		cout << "SUCCESS : " << randomNumber << endl;
	}
	else {
		cout << "FAILURE : Obtained number is not between the range [" <<
			lowerBound << "," << upperBound << "]" << endl;
	}
}
/**
* \brief Uretilen (double) ondalik sayinin dogrulugunu kontrol eden fonksiyon
* \brief Rastgele olusturulan double sayi, kullanicinin belirledigi aralik icerisindeyse sayi ekrana yazdirilir.
* \brief Uretilen sayi kullanicinin istedigi aralikta degilse uyari mesaji verilir.
* \param generator: RandomNumberGenerator sinifindan uretilen nesnenin adresi
* \param lowerBound: Uretilecek double sayinin minimum degeri
* \param upperBound: Uretilecek double sayinin maksimum degeri
* \param precision: Virgulden sonra kac basamak olacagini belirten parametre
*/
void TEST_RandomDouble(RandomNumberGenerator& generator, double lowerBound, double upperBound, RandomNumberGenerator::Precision precision)
{
	double randomNumber = generator.getRandomDouble(lowerBound, upperBound, precision);
	if (randomNumber >= lowerBound && randomNumber <= upperBound) {
		cout << "SUCCESS : " << randomNumber << endl;
	}
	else {
		cout << "FAILURE : Obtained number is not between the range [" <<
			lowerBound << "," << upperBound << "]" << endl;
	}
}
/**
* \brief Uretilen karakter tipindeki sayinin dogrulugunu kontrol eden fonksiyon
* \brief Rastgele olusturulan karakter, kullanicinin belirledigi aralik icerisindeyse character ekrana yazdirilir.
* \brief Uretilen karakter kullanicinin istedigi aralikta degilse uyari mesaji verilir.
* \param generator: RandomNumberGenerator sinifindan uretilen nesnenin adresi
* \param type: Buyuk harf, kucuk harf yada rakam olmasini saglayan parametre
*/
void TEST_RandomCharacter(RandomNumberGenerator& generator, RandomNumberGenerator::CharacterType type)
{
	char randomNumber = generator.getRandomCharacter(type);
	int asci = (int)randomNumber;
	if (type == RandomNumberGenerator::CharacterType::UPPER_LETTER && asci <= 90 && asci >= 65)
	{
		cout << "SUCCESS : " << randomNumber << endl;
	}
	else if (type == RandomNumberGenerator::CharacterType::LOWER_LETTER && asci <= 122 && asci >= 97) {
		cout << "SUCCESS : " << randomNumber << endl;
	}
	else if (type == RandomNumberGenerator::CharacterType::DIGIT && asci <= 126 && asci >= 0) {
		cout << "SUCCESS : " << (int)randomNumber << endl;
	}
	else {
		cout << "FAILURE!" << endl;
	}
}
int main()
{
	RandomNumberGenerator generator;
	cout << "+---------------------+" << endl
		<< "| Random Integer Test |" << endl
		<< "+---------------------+" << endl;
	TEST_RandomInteger(generator, 5, 20);
	TEST_RandomInteger(generator, 2, 60);
	cout << "+-------------------+" << endl
		<< "| Random Float Test |" << endl
		<< "+-------------------+" << endl;
	TEST_RandomFloat(generator, 5, 20, RandomNumberGenerator::Precision::ONE);
	TEST_RandomFloat(generator, 5, 20, RandomNumberGenerator::Precision::TWO);
	TEST_RandomFloat(generator, 5, 20, RandomNumberGenerator::Precision::THREE);
	TEST_RandomFloat(generator, 5, 20, RandomNumberGenerator::Precision::FOUR);
	cout << "+--------------------+" << endl
		 << "| Random Double Test |" << endl
	     << "+--------------------+" << endl;
	TEST_RandomDouble(generator, 5, 20, RandomNumberGenerator::Precision::ONE);
	TEST_RandomDouble(generator, 5, 20, RandomNumberGenerator::Precision::TWO);
	TEST_RandomDouble(generator, 5, 20, RandomNumberGenerator::Precision::THREE);
	TEST_RandomDouble(generator, 5, 20, RandomNumberGenerator::Precision::FOUR);
		cout << "+-----------------------+" << endl
		<< "| Random Character Test |" << endl
		<< "+-----------------------+" << endl;
	TEST_RandomCharacter(generator, RandomNumberGenerator::CharacterType::LOWER_LETTER);
	TEST_RandomCharacter(generator, RandomNumberGenerator::CharacterType::UPPER_LETTER);
	TEST_RandomCharacter(generator, RandomNumberGenerator::CharacterType::DIGIT);
	system("pause");
	return 0;
}