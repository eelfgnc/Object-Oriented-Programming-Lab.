#include "Integer.h"
#include<iomanip>
/**
*\brief Constructor (Yapici Fonksiyon)
*\brief Nesne olusturulurken otomatik olarak cagriliyor.
*\brief Kullanici nesnenin data uyesi icin bir sayi belirtmezse data uyesi sifir olur.
*\param xdata: Data uyesine atanacak olan sayi
*/
Integer::Integer(int xdata = 0) : data(xdata) { }
/**
*\brief Fonksiyonu cagiran nesnenin data degiskeninde bulunan sayi ile parametre olarak gonderilen nesnenin data degiskenindeki sayiyi toplayan operator.
*\brief Yeni bir nesne uretilir ve bu uretilen nesne iki nesnenin uye degiskenlerinin tutttugu sayilarin toplamini tutar.
*\param x: Toplanan gorevi goren ikinci nesne
*\return result: Toplam gorevi goren, fonskiyon icerisinde uretilen nesne
*/
Integer& Integer::operator+(const Integer& x) {
	Integer result;
	result.data = data + x.data;
	return result;
}
/**
*\brief Fonksiyonu cagiran nesnenin data degiskeninde tuttugu sayi ile parametre olarak gonderilen nesnenin data degiskeninde tutulan sayiyi toplayan operator.
*\brief Iki data degiskenin tuttugu sayilarin toplami, fonksiyonu cagiran nesnenin data degiskenine atanir.
*\param x: Toplanan gorevi goren ikinci nesne
*\return *this: Toplam gorevi goren ve fonskiyonu cagiran nesne
*/
Integer& Integer::operator+=(const Integer& x) {
	data = data + x.data;
	return *this;
}
/**
*\brief Fonksiyonu cagiran nesnenin data degiskeninin tuttugu sayi ile parametre olarak gonderilen tam sayiyi toplayan operator.
*\brief Yeni bir nesne uretilir ve bu uretilen nesne fonksiyonu cagiran nesnenin data degiskeninin tuttugu sayi ile parametre olarak gonderilen tam sayinin toplamini tutar.
*\param x: Tam sayi
*\return result: Toplam gorevi goren fonskiyon icerisinde uretilen nesne
*/
Integer& Integer::operator+(int x) {
	Integer result;
	result.data = x + data;
	return result;
}
/**
*\brief Fonksiyonu cagiran nesnenin data degiskeninin tuttugu sayi ile parametre olarak gonderilen tam sayiyi toplayan operator.
*\brief Fonksiyonu cagiran nesnenin data degiskeninin tuttugu sayi ile parametre olarak gonderilen tam sayinin toplami bulunup fonksiyonu cagiran nesne->data icerisine atanir.
*\param x: Tam sayi
*\return *this: Toplam gorevi goren ve fonskiyonu cagiran nesne
*/
Integer& Integer::operator+=(int x) {
	data = x + data;
	return *this;
}
/**
*\brief Fonksiyonu cagiran nesnenin data degiskeninde bulunan sayi ile parametre olarak gonderilen nesnenin data degiskenindeki sayinin farkini bulan operator.
*\brief Yeni bir nesne uretilir ve bu uretilen nesne iki nesnenin uye degiskenlerinin farkini tutar.
*\param x: Cikan gorevi goren ikinci nesne
*\return result: Fark gorevi goren fonskiyon icerisinde uretilen nesne
*/
Integer& Integer::operator-(const Integer& x) {
	Integer result;
	result.data = data - x.data;
	return result;
}
/**
*\brief Fonksiyonu cagiran nesnenin data degiskeninde tuttugu sayi ile parametre olarak gonderilen nesnenin data degiskeninde bulunan sayinin farkini bulan operator.
*\brief Iki data degiskenin tuttugu sayilarin farki, fonksiyonu cagiran nesnenin data degiskenine atanir.
*\param x: Cikan gorevi goren ikinci nesne
*\return *this: Fark gorevi goren ve fonskiyonu cagiran nesne
*/
Integer& Integer::operator-=(const Integer& x) {
	data = data - x.data;
	return *this;
}
/**
*\brief Fonksiyonu cagiran nesnenin data degiskeninin tuttugu sayi ile parametre olarak gonderilen tam sayinin farkini bulan operator.
*\brief Yeni bir nesne uretilir ve bu uretilen nesne fonksiyonu cagiran nesnenin data degiskeninin tuttugu sayi ile parametre olarak gonderilen tam sayinin farkini tutar.
*\param x: Tam sayi
*\return result: Fark gorevi goren fonskiyon icerisinde uretilen nesne
*/
Integer& Integer::operator-(int x) {
	Integer result;
	result.data = data - x;
	return result;
}
/**
*\brief Fonksiyonu cagiran nesnenin data degiskeninin tuttugu sayi ile parametre olarak gonderilen tam sayinin farkini bulan operator.
*\brief Fonksiyonu cagiran nesnenin data degiskeninin tuttugu sayi ile parametre olarak gonderilen tam sayinin farkini bulunup fonksiyonu cagiran nesnenin data degiskenine atanir.
*\param x: tam sayi
*\return *this: Fark gorevi goren ve fonskiyonu cagiran nesne
*/
Integer& Integer::operator-=(int x) {
	data = data - x;
	return *this;
}
/**
*\brief Fonksiyonu cagiran nesnenin data degiskeninde bulunan sayi ile parametre olarak gonderilen nesnenin data degiskenindeki sayinin carpimini bulan operator.
*\brief Yeni bir nesne uretilir ve bu uretilen nesne iki nesnenin uye degiskenlerinin carpimini tutar.
*\param x: Carpan gorevi goren ikinci nesne
*\return result: Carpim gorevi goren fonskiyon icerisinde uretilen nesne
*/
Integer& Integer::operator*(const Integer& x) {
	Integer result;
	result.data = data * x.data;
	return result;
}
/**
*\brief Fonksiyonu cagiran nesnenin data degiskeninde tuttugu sayi ile parametre olarak gonderilen nesnenin data degiskeninde bulunan sayinin carpimini bulan operator.
*\brief Iki data degiskenin tuttugu sayilarin carpimi, fonksiyonu cagiran nesnenin data degiskenine atanir.
*\param x: Carpan gorevi goren ikinci nesne
*\return *this: Carpim gorevi goren ve fonskiyonu cagiran nesne
*/
Integer& Integer::operator*=(const Integer& x) {
	data = data * x.data;
	return *this;
}
/**
*\brief Fonksiyonu cagiran nesnenin data degiskeninin tuttugu sayi ile parametre olarak gonderilen tam sayinin carpimini bulan operator.
*\brief Yeni bir nesne uretilir ve bu uretilen nesne fonksiyonu cagiran nesnenin data degiskeninin tuttugu sayi ile parametre olarak gonderilen tam sayinin carpimini tutar.
*\param x: Tam sayi
*\return result: Carpim gorevi goren fonskiyon icerisinde uretilen nesne
*/
Integer& Integer::operator*(int x) {
	Integer result;
	result.data = x * data;
	return result;
}
/**
*\brief Fonksiyonu cagiran nesnenin data degiskeninin tuttugu sayi ile parametre olarak gonderilen tam sayinin carpimini bulan operator.
*\brief Fonksiyonu cagiran nesnenin data degiskeninin tuttugu sayi ile parametre olarak gonderilen tam sayinin carpimini bulunup fonksiyonu cagiran nesne->data icerisine atanir.
*\param x: tam sayi
*\return *this: Carpim gorevi goren ve fonskiyonu cagiran nesne
*/
Integer& Integer::operator*=(int x) {
	data = x * data;
	return *this;
}
/**
*\brief Fonksiyonu cagiran nesnenin data degiskeninde bulunan sayiyi parametre olarak gonderilen nesnenin data degiskenindeki sayiya bolumunu bulan operator.
*\brief Yeni bir nesne uretilir ve bu uretilen nesne iki nesnenin uye degiskenlerinin birbiriyle bolumunu tutar.
*\param x: Bolen gorevi goren ikinci nesne
*\return result: Bolum gorevi goren fonskiyon icerisinde uretilen nesne
*/
Integer& Integer::operator/(const Integer& x) {
	Integer result;
	result.data = data / x.data;
	return result;
}
/**
*\brief Fonksiyonu cagiran nesnenin data degiskeninde tuttugu sayiyi parametre olarak gonderilen nesnenin data degiskeninde bulunan sayiya bolumunu bulan operator.
*\brief Iki data degiskenin tuttugu sayilarin birbirine bolumu, fonksiyonu cagiran nesnenin data degiskenine atanir.
*\param x: Bolen gorevi goren ikinci nesne
*\return *this: Bolum gorevi goren ve fonskiyonu cagiran nesne
*/
Integer& Integer::operator/=(const Integer& x) {
	data = data / x.data;
	return *this;
}
/**
*\brief Fonksiyonu cagiran nesnenin data degiskeninin tuttugu sayiyi parametre olarak gonderilen tam sayiya bolup sonucunu bulan operator.
*\brief Yeni bir nesne uretilir ve bu uretilen nesne fonksiyonu cagiran nesnenin data degiskeninin tuttugu sayiyi parametre olarak gonderilen tam sayiya bolumunu tutar.
*\param x: Tam sayi
*\return result: Bolum gorevi goren ve fonskiyon icerisinde uretilen nesne
*/
Integer& Integer::operator/(int x) {
	Integer result;
	result.data = data / x;
	return result;
}
/**
*\brief Fonksiyonu cagiran nesnenin data degiskeninin tuttugu sayiyi parametre olarak gonderilen tam sayiya bolen ve sonucu bulan operator.
*\brief Fonksiyonu cagiran nesnenin data degiskeninin tuttugu sayiyi parametre olarak gonderilen tam sayiya bolup sonucu fonksiyonu cagiran nesne->data icerisine atanir.
*\param x: Tam sayi
*\return *this: Bolum gorevi goren ve fonskiyonu cagiran nesne
*/
Integer& Integer::operator/=(int x) {
	data = data / x;
	return *this;
}
/**
*\brief Nesneleri ekranda yazdirirken belirli bir duzen icinde yazdirmami gerekir.
*\brief Cout fonksiyonu tam sayilari, ondalikli sayilari vb. yazmak icin kullanilir ama nesneleri ekranda yazdirabilmemiz icin yeterli degillerdir.
*\brief cout fonksiyonuna belirli bir gorev eklememiz gerekiyor.
*\param out: Cout islevi goren parametre
*\param x: Ekrana yazdirmamiz gereken nesne
*/
ostream &operator<<(ostream& out, Integer& x) {
	out << x.data;
	return out;
}
/**
*\brief Cin fonksiyonu tam sayilari, ondalikli sayilari vb. almak icin kullanilirken nesnelerin uye degiskenlerini de almak icin yeterli degillerdir.
*\brief Bu yuzden cin fonksiyonuna belirli bir gorev eklememiz gerekiyor.
*\param in: Cin islevi goren parametre
*\param x: Kullanicidan aldigimiz uye degisken degerlerine sahip olan nesne
*/
istream &operator>>(istream& in, Integer& x) {
	in >> x.data;
	return in;
}