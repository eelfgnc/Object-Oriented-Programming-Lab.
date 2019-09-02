#include "Vector.h"
#include<iostream>
using namespace std;
/**
*\brief Kullanicidan dizi elemanlarini girmesin isteyen test fonksiyonu.
*\param vector: Girdigimiz dizi elemanlarina sahip olan nesne
*/
void TEST_Input(Vector& vector)
{
	cout << "+------------+" << endl
		 << "| INPUT TEST |" << endl
		 << "+------------+" << endl;
	cin >> vector;
}
/**
*\brief Kullanicidan dizi elemanlarini belirli bir protipte ekrana yazdirmak icin kullanilan test fonksiyonu.
*\param vector: Ekrana yazilan dizi elemanlarina sahip olan nesne
*/ 
void TEST_Output(Vector& vector)
{
	cout << "+-------------+" << endl
		 << "| OUTPUT TEST |" << endl
		 << "+-------------+" << endl;
	cout << vector << endl;
}
/**
*\brief Fonksiyon icerisinde olusturulan nesne parametre olan nesnenin kopyasini olusturmak icin kopya yapici fonksiyonu kullanan ve bunu ekrana yazdiran test fonksiyonu.
*\param vector: Kopyalanan nesne
*/
void TEST_CopyConstructor(Vector& vector)
{
	cout << "+-----------------------+" << endl
		 << "| COPY CONSTRUCTOR TEST |" << endl
		 << "+-----------------------+" << endl;
	Vector copy_vector(vector);
	cout << "Original Vector : " << vector << endl << "Copy Vector : " << copy_vector << endl;
}
/**
*\brief Parametre olan nesnenin dizi elemanlari fonksiyon icerisinde olusturulan nesnenin dizi elemanlarina esitlemek icin '=' opretorunu kullanan ve sonuclari ekrana yazdiran test fonksiyonu.
*\param vector: Kopyalanan dizi elemanlari sahip olan nesne
*/
void TEST_Assignment(Vector& vector)
{
	cout << "+-----------------+" << endl
		 << "| ASSIGNMENT TEST |" << endl
		 << "+-----------------+" << endl;
	Vector copy_vector;
	copy_vector = vector;
	cout << "Original Vector : " << vector << endl << "Assignment Copy Vector : " << copy_vector << endl;
}
/**
*\brief Parametre olarak alinan iki nesnenin dizi elemanlari kiyaslayan dizilerin esit olmasi durumunda true degeri gondermek icin '==' operatorunu kullanan ve bunu ekrana yazdiran test fonksiyonu.
*\param vector1: Kiyaslama yapilacak 1. nesne
*\param vector2: Kiyaslama yapilacak 2. nesne
*/
void TEST_Equal(Vector& vector1, Vector& vector2)
{
	cout << "+------------+" << endl
		 << "| EQUAL TEST |" << endl
		 << "+------------+" << endl;
	if (vector1 == vector2)
	{
		cout << vector1 << " is equal to " << vector2 << endl;
	}
	else
	{
		cout << vector1 << " is not equal to " << vector2 << endl;
	}
}
/**
*\brief Parametre olarak alinan iki nesnenin dizi elemanlari kiyaslayan dizilerin esit olmamasi durumunda true degeri gondermek icin '!=' operatorunu kullanan ve bunu ekrana yazdiran test fonksiyonu.
*\param vector1: Kiyaslama yapilacak 1. nesne
*\param vector2: Kiyaslama yapilacak 2. nesne
*/
void TEST_Not_Equal(Vector& vector1, Vector& vector2)
{
	cout << "+----------------+" << endl
		 << "| NOT EQUAL TEST |" << endl
		 << "+----------------+" << endl;
	if (vector1 != vector2)
	{
		cout << vector1 << " is not equal to " << vector2 << endl;
	}
	else
	{
		cout << vector1 << " is equal to " << vector2 << endl;
	}
}
/**
*\brief Parametre olarak alinan iki nesnenin dizi boyutlarini kiyaslayan ve birincisi ikincisinden kucuk ise true degeri gondermek icin '<' operatorunu kullanarak ve bunu sonucunu ekrana yazdiran test fonksiyonu.
*\param vector1: Boyutu kiyaslanacak olan 1. nesne
*\param vector2: Boyutu kiyaslanacak olan 2. nesne
*/
void TEST_LESS_THAN(Vector& vector1, Vector& vector2)
{
	cout << "+----------------+" << endl
		 << "| LESS THAN TEST |" << endl
		 << "+----------------+" << endl;
	if (vector1 < vector2)
	{
		cout << vector1 << " is less than " << vector2 << endl;
	}
	else
	{
		cout << vector1 << " is not less than " << vector2 << endl;
	}
}
/**
*\brief Parametre olarak alinan iki nesnenin dizi boyutlarini kiyaslayan ve birincisi ikincisinden kucuk veya esit ise true degeri gondermek icin '<=' operatorunu kullanarak ve bunu sonucunu ekrana yazdiran test fonksiyonu.
*\param vector1: Boyutu kiyaslanacak olan 1. nesne
*\param vector2: Boyutu kiyaslanacak olan 2. nesne
*/
void TEST_LESS_THAN_OR_EQUAL(Vector& vector1, Vector& vector2)
{
	cout << "+-------------------------+" << endl
		 << "| LESS THAN OR EQUAL TEST |" << endl
		 << "+-------------------------+" << endl;
	if (vector1 <= vector2)
	{
		cout << vector1 << " is less than or equal to " << vector2 << endl;
	}
	else
	{
		cout << vector1 << " is not less than or equal to " << vector2 << endl;
	}
}
/**
*\brief Parametre olarak alinan iki nesnenin dizi boyutlarini kiyaslayan ve birincisi ikincisinden buyuk ise true degeri gondermek icin '>' operatorunu kullanarak ve bunu sonucunu ekrana yazdiran test fonksiyonu.
*\param vector1: Boyutu kiyaslanacak olan 1. nesne
*\param vector2: Boyutu kiyaslanacak olan 2. nesne
*/
void TEST_GREATER_THAN(Vector& vector1, Vector& vector2)
{
	cout << "+-------------------+" << endl
		<< "| GREATER THAN TEST |" << endl
		<< "+-------------------+" << endl;
	if (vector1 > vector2)
	{
		cout << vector1 << " is greater than " << vector2 << endl;
	}
	else
	{
		cout << vector1 << " is not greater than " << vector2 << endl;
	}
}
/**
*\brief Parametre olarak alinan iki nesnenin dizi boyutlarini kiyaslayan ve birincisi ikincisinden buyuk veya esit ise true degeri gondermek icin '>=' operatorunu kullanarak ve bunu sonucunu ekrana yazdiran test fonksiyonu.
*\param vector1: Boyutu kiyaslanacak olan 1. nesne
*\param vector2: Boyutu kiyaslanacak olan 2. nesne
*/
void TEST_GREATER_THAN_OR_EQUAL(Vector& vector1, Vector& vector2)
{
	cout << "+---------------------------+" << endl
		 << "| GREATER THAN OR EQUAL TEST |" << endl
		 << "+---------------------------+" << endl;
	if (vector1 >= vector2)
	{
		cout << vector1 << " is greater than or equal to " << vector2 << endl;
	}
	else
	{
		cout << vector1 << " is not greater than or equal to " << vector2 << endl;
	}
}
/**
*\brief Kullanicinin istedigi indisteki elemani gondermek icin  '[]' operatorunu kullanarak o indisteki elemani degisten test fonksiyonu.  
*\param vector: i indisindeki elemana sahip olan nesne->dizi
*\param i: Indis degeri
*\param newValue: i indisindeki elemana atanacak olan sayi
*/
void TEST_Subscription(Vector& vector, int i, double newValue)
{
	cout << "+-------------------+" << endl
		<< "| SUBSCRIPTION TEST |" << endl
		<< "+-------------------+" << endl;
	cout << "Vector itself : " << vector << endl;
	cout << "Get vector[" << i << "] = " << vector[i] << endl;
	vector[i] = newValue;
	cout << "Set vector[" << i << "] to " << newValue << ", then vector[" << i << "] = " << vector[i] << endl;
}
/**
*\brief Parametre olarak gonderilen iki nesne->dizinin elemanlarini toplamak icin '+' operatorunu kullanarak sonuclari ekrana yazdiran test fonksiyonu.
*\param vector1: Toplanan nesne 
*\param vector2: Toplanan nesne
*/
void TEST_Addition(Vector& vector1, Vector& vector2)
{
	cout << "+---------------+" << endl
		<< "| ADDITION TEST |" << endl
		<< "+---------------+" << endl;
	Vector result = vector1 + vector2;
	cout << vector1 << " + " << vector2 << " = " << result << endl;
}
/**
*\brief Parametre olarak gonderilen iki nesne->dizinin elemanlarini toplamak icin '+=' operatorunu kullanarak sonuclari ekrana yazdiran test fonksiyonu.
*\param vector1: Toplanan ve '+=' operatoru sonucunda elemanlari degisen nesne
*\param vector2: Toplanan nesne
*/
void TEST_AdditionOver(Vector vector1, Vector vector2)
{
	cout << "+------------------+" << endl
		<< "| ADDITION OVER TEST|" << endl
		<< "+-------------------+" << endl;
	cout << "Vector 1 Before Addition over: " << vector1 << endl;
	vector1 += vector2;
	cout << "Vector 1 After Addition over: " << vector1 << endl;
}
/**
*\brief Parametre olarak gonderilen iki nesne->dizinin elemanlarini cikarmak icin '-' operatorunu kullanarak sonuclari ekrana yazdiran test fonksiyonu.
*\param vector1: Eksilen nesne
*\param vector2: Cikan nesne
*/
void TEST_Substraction(Vector& vector1, Vector& vector2)
{
	cout << "+-------------------+" << endl
		<< "| SUBSTRACTION TEST |" << endl
		<< "+-------------------+" << endl;
	Vector result = vector1 - vector2;
	cout << vector1 << " - " << vector2 << " = " << result << endl;
}
/**
*\brief Parametre olarak gonderilen iki nesne->dizinin elemanlarini cikarmak icin '-=' operatorunu kullanarak sonuclari ekrana yazdiran test fonksiyonu.
*\param vector1: Eksilen ve '-=' operatoru sonucunda elemanlari degisen nesne
*\param vector2: Cikan nesne
*/
void TEST_SubstractionOver(Vector vector1, Vector vector2)
{
	cout << "+------------------------+" << endl
		<< "| SUBSTRACTION OVER TEST |" << endl
		<< "+------------------------+" << endl;
	cout << "Vector 1 Before Substraction over: " << vector1 << endl;
	vector1 -= vector2;
	cout << "Vector 1 After Substraction over: " << vector1 << endl;

}
/**
*\brief Parametre olarak gonderilen iki nesne->dizinin elemanlarini indislerine bagli kalarak carpma ve bunlari toplamak icin '*' operatorunu kullanarak sonuclari ekrana yazdiran test fonksiyonu.
*\param vector1: Ayni indisteki elemanlari carpilan 1. nesne
*\param vector2: Ayni indisteki elemanlari carpilan 2. nesne
*/
void TEST_DotProduct(Vector& vector1, Vector& vector2)
{
	cout << "+------------------+" << endl
		<< "| DOT-PRODUCT TEST |" << endl
		<< "+------------------+" << endl;
	cout << vector1 << " * " << vector2 << " = " << vector1*vector2 << endl;
}
/**
*\brief Parametre olarak gonderilen nesne->dizinin elemanlarini ve ondalikli sayi ile carpmak icin '*' operatorunu kullanarak sonuclari ekrana yazdiran test fonksiyonu.
*\param vector1: Ondalikli sayi ile elemanlarini carpacagimiz nesne
*\param constant_value: Ondalikli sayi 
*/
void TEST_Constant_Multiplication(Vector& vector1, double constant_value)
{
	cout << "+-----------------------------+" << endl
		 << "| CONSTANT MULTIPLICATIN TEST |" << endl
		 << "+-----------------------------+" << endl;
	Vector result = vector1 * constant_value;
	cout << vector1 << " * " << constant_value << " = " << result << endl;

}
/**
*\brief Parametre olarak gonderilen nesne->dizinin elemanlarini ve ondalikli sayi ile carpmak icin '*' operatorunu kullanarak sonuclari ekrana yazdiran test fonksiyonu.
*\param vector: Ondalikli sayi ile elemanlarini carpacagimiz nesne, bu nesnenin fonksiyon bitiminde elemanlari degisir
*\param constant_value: Ondalikli sayi
*/
void TEST_Constant_MultiplicationOver(Vector vector, double constant_value)
{
	cout << "+-----------------------------+" << endl
		 << "| CONSTANT MULTIPLICATIN OVER |" << endl
		 << "+-----------------------------+" << endl;
	cout << "Vector 1 Before Constant Multiplication over: " << vector << endl;
	vector *= constant_value;
	cout << "Vector 1 After Constant Multiplication over: " << vector << endl;
}
/**
*\brief Parametre olarak gonderilen iki nesne->dizinin elemanlarini indislerine bagli kalarak bolme islemi yapmak icin '/' operatorunu kullanarak sonuclari ekrana yazdiran test fonksiyonu.
*\param vector1: Bolunen nesne
*\param vector2: Bolen nesne
*/
void TEST_Division(Vector& vector1, Vector& vector2)
{
	cout << "+---------------+" << endl
		 << "| DIVISION TEST |" << endl
		 << "+---------------+" << endl;
	Vector result = vector1 / vector2;
	cout << vector1 << " / " << vector2 << " = " << result << endl;
}
/**
*\brief Parametre olarak gonderilen iki nesne->dizinin elemanlarini indislerine bagli kalarak bolme islemi yapmak icin '/' operatorunu kullanarak sonuclari ekrana yazdiran test fonksiyonu.
*\param vector1: Bolunen ve fonksiyon bitiminde elemanlari degisen nesne
*\param vector2: Bolen nesne
*/
void TEST_DivisionOver(Vector vector1, Vector vector2)
{
	cout << "+---------------+" << endl
		 << "| DIVISION OVER |" << endl
		 << "+---------------+" << endl;
	cout << "Vector 1 Before Constant Division over: " << vector1 << endl;
	vector1 /= vector2;
	cout << "Vector 1 After Constant Division over: " << vector1 << endl;
}
/**
*\brief Parametre olarak gonderilen nesne->dizinin elemanlarini ondalikli sayi ile bolmek icin '/' operatorunu kullanarak sonuclari ekrana yazdiran test fonksiyonu.
*\param vector1: Ondalikli sayi ile elemanlarini bolecegimiz nesne
*\param constant_value: Ondalikli sayi
*/
void TEST_Constant_Division(Vector& vector1, double constant_value)
{
	cout << "+------------------------+" << endl
		 << "| CONSTANT DIVISION TEST |" << endl
		 << "+------------------------+" << endl;
	Vector result = vector1 / constant_value;
	cout << vector1 << " / " << constant_value << " = " << result << endl;
}
/**
*\brief Parametre olarak gonderilen nesne->dizinin elemanlarini ondalikli sayi ile bolmek icin '/' operatorunu kullanarak sonuclari ekrana yazdiran test fonksiyonu.
*\param vector: Elemanlarini ondalikli sayiya bolecegimiz nesne, bu nesnenin fonksiyon bitiminde elemanlari degisir
*\param constant_value: Ondalikli sayi
*/
void TEST_Constant_DivisionOver(Vector vector, double constant_value)
{
	cout << "+------------------------+" << endl
		 << "| CONSTANT DIVISION OVER |" << endl
		 << "+------------------------+" << endl;
	cout << "Vector 1 Before Constant Division over: " << vector << endl;
	vector /= constant_value;
	cout << "Vector 1 After Constant Division over: " << vector << endl;
}
/**
*\brief Parametre olarak gonderilen nesne->dizinin boyutunu bulmak icin '()' operatorunu kullanarak sonuclari ondalik bir sayiya aktaran test fonksiyonudur.
*\param vector1: Boyutu bulunan nesne
*/
void TEST_Magnitude(Vector& vector1)
{
	cout << "+----------------+" << endl
		 << "| MAGNITUDE TEST |" << endl
		 << "+----------------+" << endl;
	double result = vector1();
	cout << "MAG( " << vector1 << " ) = " << result << endl;
}
/**
*\brief Parametre olarak gonderilen nesne->dizinin toplamaya gore tersini bulmak icin '!' operatorunu kullanarak sonuclari ekrana yazdiran test fonksiyonudur.
*\param vector: Toplama islemine gore tersi alinan nesne
*/
void TEST_InverseDirection(Vector vector)
{
	cout << "+-------------------+" << endl
		 << "| INVERSE DIRECTION |" << endl
		 << "+-------------------+" << endl;
	cout << "Original Vector: " << vector << endl;
	cout << "Inversed Vector: " << !vector << endl;
}
int main()
{
	double firstTestData[]{ 1.2, 2.4, 3.6 };
	double secondTestData[]{ 1.8, 2.6, 3.4 };

	Vector v1(3);
	Vector v2(firstTestData, 3);
	Vector v3(firstTestData, 3);
	Vector v4(secondTestData, 3);

	TEST_Input(v1);
	TEST_Output(v1);
	TEST_CopyConstructor(v1);
	TEST_Assignment(v1);
	TEST_Equal(v2, v3);
	TEST_Not_Equal(v3, v4);
	TEST_LESS_THAN(v1, v2);
	TEST_LESS_THAN_OR_EQUAL(v2, v3);
	TEST_GREATER_THAN(v1, v2);
	TEST_GREATER_THAN_OR_EQUAL(v2, v3);
	TEST_Subscription(v1, 1, 5.3);
	TEST_Addition(v1, v2);
	TEST_AdditionOver(v1, v2);
	TEST_Substraction(v1, v2);
	TEST_SubstractionOver(v1, v2);
	TEST_DotProduct(v1, v2);
	TEST_Constant_Multiplication(v1, 2);
	TEST_Constant_MultiplicationOver(v1, 2);
	TEST_Division(v1, v2);
	TEST_DivisionOver(v1, v2);
	TEST_Constant_Division(v1, 2);
	TEST_Constant_DivisionOver(v1, 2);
	TEST_Magnitude(v1);
	TEST_InverseDirection(v1);
	system("pause");
	return 0;
}