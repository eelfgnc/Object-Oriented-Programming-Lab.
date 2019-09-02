#include<iostream>
#include<iomanip>
#include "Integer.h"
using namespace std;
/**
*\brief Kullanicidan dizi elemanlarini girmesin isteyen test fonksiyonu.
*\param x: Klavyeden girilen tam sayiya sahip olan birinci nesne
*\param y: Klavyeden girilen tam sayiya sahip olan birinci nesne
*/
void input(Integer &x, Integer &y){
	cout << "INPUT" << endl;
	cout << "x , y :";
	cin >> x.data >> y.data;
	cout << endl;
}
/**
*\brief x ve y nesnesinin data verilerini toplamak icin '+' operatorunu kullanan test fonksiyonu.
*\param x: Toplama isleminde toplanan gorevi goren x->data degeri
*\param y: Toplama isleminde toplanan gorevi goren y->data degeri
*/
void add_test(Integer& x, Integer& y) {
	cout << "ADD TEST" << endl;
	Integer z(0);
	z = x + y;
	cout << x << " + " << y << " = " << z << endl << endl;
}
/**
*\brief x ve y nesnesinin data verilerini toplamak icin '+' operatorunu kullanan test fonksiyonu.
*\param x: Fonksiyon icerisinde toplanan ve fonksiyon bitiminde ise toplam gorevi goren x->data degeri
*\param y: Toplama isleminde toplanan gorevi goren y->data degeri
*/
void add_over(Integer& x, Integer& y) {
	cout << "ADD OVER" << endl;
	cout << "Original Integer : " << x << endl;
	x += y;
	cout << "Copy Integer : " << x << endl << endl;
}
/**
*\brief x'in data verisini ve parametre olarak gelen y tam sayisini toplamak icin '+' operatorunu kullanan test fonksiyonu.
*\param x: Fonksiyon icerisinde toplanan x->data degeri
*\param y: Toplama isleminde toplanan gorevi goren y tam sayisi
*/
void add_constant_test(Integer& x, int y) {
	cout << "ADD CONSTANT TEST" << endl;
	Integer z(0);
	z = x + y;
	cout << x << " + " << y << " = " << z << endl << endl;
}
/**
*\brief x'in data verisini ve parametre olarak gelen y tam sayisini toplamak icin '+' operatorunu kullanan test fonksiyonu.
*\param x: Fonksiyon icerisinde toplanan ve fonksiyon bitiminde toplam degeri olan x->data degeri
*\param y: Toplama isleminde toplanan gorevi goren y tam sayisi
*/
void add_constant_over(Integer& x, int y) {
	cout << "ADD CONSTANT OVER" << endl;
	cout << "Original Integer : " << x << endl;
	x += y;
	cout << "Copy Integer : " << x << endl << endl;
}
/**
*\brief x ve y nesnesinin data verilerinin farkini bulmak icin '-' operatorunu kullanan test fonksiyonu.
*\param x: Eksilen x->data degeri
*\param y: Cikarma isleminde cikan gorevi goren y->data degeri
*/
void substract_test(Integer& x, Integer& y) {
	cout << "SUBSTRACT TEST" << endl;
	Integer z(0);
	z = x - y;
	cout << x << " - " << y << " = " << z << endl << endl;
}
/**
*\brief x ve y nesnesinin data verilerinin farkini bulmak icin '-' operatorunu kullanan test fonksiyonu.
*\param x: Fonksiyon icerisinde Eksilen ve fonksiyon bitiminde ise sonuc degeri olan x->data uye degiskeni
*\param y: Cikarma isleminde cikan gorevi goren y->data degeri
*/
void substract_over(Integer& x, Integer& y) {
	cout << "SUBSTRACT OVER" << endl;
	cout << "Original Integer : " << x << endl;
	x -= y;
	cout << "Copy Integer : " << x << endl << endl;
}
/**
*\brief x'in data verisinden ve parametre olarak gelen y tam sayisini cikarmak icin '-' operatorunu kullanan test fonksiyonu.
*\param x: Fonksiyon icerisinde eksilen x->data degeri
*\param y: Cikarma isleminde cikan gorevi goren y tam sayisi
*/
void substract_constant_test(Integer& x, int y) {
	cout << "SUBSTRACT CONSTANT TEST" << endl;
	Integer z(0);
	z = x - y;
	cout << x << " - " << y << " = " << z << endl << endl;
}
/**
*\brief x'in data verisini ve parametre olarak gelen y tam sayisini toplamak icin '-' operatorunu kullanan test fonksiyonu.
*\param x: Fonksiyon icerisinde eksilen ve fonksiyon bitiminde ise sonuc degeri olan x->data degeri
*\param y: Cikarma isleminde cikan gorevi goren y tam sayisi
*/
void substract_constant_over(Integer& x, int y) {
	cout << "SUBSTRACT CONSTANT OVER" << endl;
	cout << "Original Integer : " << x << endl;
	x -= y;
	cout << "Copy Integer : " << x << endl << endl;
}
/**
*\brief x ve y nesnesinin data verilerini carpmak icin '*' operatorunu kullanan test fonksiyonu.
*\param x: Carpilan x->data degeri
*\param y: Carpma isleminde carpan gorevi goren y->data degeri
*/
void multiply_test(Integer& x, Integer& y) {
	cout << "MULTIPLICATION TEST" << endl;
	Integer z(0);
	z = x * y;
	cout << x << " * " << y << " = " << z << endl << endl;
}
/**
*\brief x ve y nesnesinin data verilerini carpmak icin '*' operatorunu kullanan test fonksiyonu.
*\param x: Fonksiyon icerisinde carpan ve fonksiyon bitiminde ise carpim x->data degeri
*\param y: Carpma isleminde carpan gorevi goren y->data degeri
*/
void multiply_over(Integer& x, Integer& y) {
	cout << "MULTIPLICATION OVER" << endl;
	cout << "Original Integer : " << x << endl;
	x *= y;
	cout << "Copy Integer : " << x << endl << endl;
}
/**
*\brief x'in data verisini ve parametre olarak gelen y tam sayisini carpmak icin '*' operatorunu kullanan test fonksiyonu.
*\param x: Fonksiyon icerisinde carpilan x->data degeri
*\param y: Carpma isleminde carpan gorevi goren y tam sayisi
*/
void multiply_constant_test(Integer& x, int y) {
	cout << "MULTIPLICATION CONSTANT TEST" << endl;
	Integer z(0);
	z = x * y;
	cout << x  << " * " << y << " = " << z << endl << endl;
}
/**
*\brief x'in data verisini ve parametre olarak gelen y tam sayisini carpmak icin '*' operatorunu kullanan test fonksiyonu.
*\param x: Fonksiyon icerisinde carpilan ve fonksiyon bitiminde ise sonuc degeri olan x->data degeri
*\param y: Carpma isleminde carpan gorevi goren y tam sayisi
*/
void multiply_constant_over(Integer& x, int y) {
	cout << "DIVISION CONSTANT OVER" << endl;
	cout << "Original Integer : " << x << endl;
	x *= y;
	cout << "Copy Integer : " << x << endl << endl;
}
/**
*\brief x data verisinin y nesnesinin data verisine bolmek icin '/' operatorunu kullanan test fonksiyonu.
*\param x: Bolunen x->data degeri
*\param y: Bolme isleminde bolum gorevi goren y->data degeri
*/
void division_test(Integer& x, Integer& y) {
	cout << "DIVISION TEST" << endl;
	Integer z(0);
	z = x / y;
	cout << x << " / " << y << " = " << z << endl << endl;
}
/**
*\brief x data verisinin y nesnesinin data verisine bolmek icin '/' operatorunu kullanan test fonksiyonu.
*\param x: Fonksiyon icerisinde bolunen ve fonksiyon bitiminde ise bolum degerine esit olan x->data degiskeni
*\param y: Bolme isleminde bolum gorevi goren y->data degeri
*/
void division_over(Integer& x, Integer& y) {
	cout << "DIVISION OVER" << endl;
	cout << "Original Integer : " << x << endl;
	x /= y;
	cout << "Copy Integer : " << x << endl << endl;
}
/**
*\brief x data verisinin y tam sayisina bolmek icin '/' operatorunu kullanan test fonksiyonu.
*\param x: Fonksiyon icerisinde bolunen x->data degeri
*\param y: Bolme isleminde bolum gorevi goren y tam sayisi
*/
void division_constant_test(Integer& x, int y) {
	cout << "DIVISION CONSTANT TEST" << endl;
	Integer z(0);
	z = x / y;
	cout << x << " / " << y << " = " << z << endl << endl;
}
/**
*\brief x data verisinin y tam sayisina bolmek icin '/' operatorunu kullanan test fonksiyonu.
*\param x: Fonksiyon icerisinde bolunen ve fonksiyon bitiminde ise bolum degeri olan x->data degeri
*\param y: Bolme isleminde bolum gorevi goren y tam sayisi
*/
void division_constant_over(Integer& x, int y) {
	cout << "DIVISION CONSTANT OVER" << endl;
	cout << "Original Integer : " << x << endl;
	x /= y;
	cout << "Copy Integer : " << x << endl << endl;
}
int main()
{

	Integer x(4), y(12);
	input(x, y);
	cout << "--------------------------" << endl;
	add_test(x, y);
	add_over(x, y);
	add_constant_test(x, 4);
	add_constant_over(x,4);
	cout << "--------------------------" << endl;
	substract_test(x, y);
	substract_over(x, y);
	substract_constant_test(x, 4);
	substract_constant_over(x, 4);
	cout << "--------------------------" << endl;
	multiply_test(x, y);
	multiply_over(x, y);
	multiply_constant_test(x, 4);
	multiply_constant_over(x, 4);
	cout << "--------------------------" << endl;
	division_test(x, y);
	division_over(x, y);
	division_constant_test(x, 4);
	division_constant_over(x, 4);
	system("pause");
	return 0;
}