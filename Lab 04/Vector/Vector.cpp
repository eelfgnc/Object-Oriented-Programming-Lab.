#include <iostream>
#include <iomanip>
#include "Vector.h"
using namespace std;
/**
*\brief Constructor (Yapici Fonksiyon)
*\brief Nesne olusturulurken otomatik olarak cagriliyor.
*\brief Kullanici nesnenin m_dimension uyesi icin bir boyut belirtmezse m_dimension uyesi 3 olur. 
*\param dimension: Olusturulacak dizi boyutu
*/
Vector::Vector(int dimension) {
	if (dimension > 0)
		m_dimension = dimension;
	else
		m_dimension = 3;
	m_data = new double[dimension];
}
/**
*\brief Constructor (Yapici Fonksiyon)
*\brief Vecto.r sinifinin iki tane yapici fonksiyonu vardir
*\brief Nesne olusturulurken girilen parametrelere bakilir ve hangi parametreler uygunsa o yapici fonksiyon cagrilir.
*\param dimension: Olusturulacak dizi boyutu
*\param data[]: Olusturulacak dizi
*/
Vector::Vector(double data[], int dimension) {
	m_dimension = dimension;
	m_data = new double[dimension];
	m_data = data;
}
/**
*\brief Copy Constructor
*\brief Bu fonksiyon parametre olarak kendi sinifindan bir nesne alir.
*\brief Parametre olarak gonderilen nesnenin boyutu ve dizi elemanlari bu fonksiyonu cagiran nesnenin uyelerine atanir.Yani bir kopyasi olusturulur.
*\param copyVector: Kopyasi olusturulacak nesne
*/
Vector::Vector(const Vector& copyVector) {
	m_dimension = copyVector.m_dimension;
	m_data = new double[m_dimension];
	for (int i = 0;i < m_dimension;i++) {
		m_data[i] = copyVector.m_data[i];
	}
}
/**
*\brief Destructor (Yikici Fonksiyon)
*\brief Uretilen nesnenin kapsama alani(scope) bittiginde bu fonksiyon otomatik olarak cagrilir ve nesne yok edilir.
*/
Vector::~Vector() {
	//delete[] m_data;
}
/**
*\brief m_dimension uyesinin tuttugu tam sayiyi gonderen fonksiyondur.
*\return m_dimension: Dizinin boyutu 
*/
int Vector::getDimension() {
	return m_dimension;
}
/**
*\brief Parametre olarak gonderilen nesnenin tuttugu dizi elemanlari, fonksiyonu cagiran nesnenin dizi elemanlarina atanir.
*\param copyVector: Dizi elemanlarini kullanarak atama yapilan nesne
*/
const Vector& Vector::operator=(const Vector& copyVector) {
	for (int i = 0;i < copyVector.m_dimension;i++) {
		m_data[i] = copyVector.m_data[i];
	}
	return *this;
}
/**
*\brief Fonksiyonu cagiran nesne ile parametre olarak gonderilen nesnenin uye degiskenleri birbirine esit mi diye bakan fonksiyondur.
*\brief Iki nesnenin m_dimension uyeleri ve tutulan dizi elemanlari birbirine esit degilse false ,birbirine esit ise fonksiyon true dondurur.
*\param copyVector: Fonksiyonu cagiran nesnenin aynisi mi diye kontrol edilen nesne
*/
bool Vector::operator==(const Vector& copyVector) {
	if (m_dimension != copyVector.m_dimension)
		return false;
	for (int i = 0;i < m_dimension;i++) {
		if (m_data[i] != copyVector.m_data[i])
			return false;
	}
	return true;
}
/**
*\brief Fonksiyonu cagiran nesne ile parametre olarak gonderilen nesnenin uye degiskenleri birbirinden farkli mi diye bakan fonksiyondur.
*\brief Iki nesnenin m_dimension uyeleri ve tutulan dizi elemanlari birbirine esit degilse true ,birbirine esit ise fonksiyon false dondurur.
*\param copyVector: Fonksiyonu cagiran nesneden farkli mi diye kontrol edilen nesne
*/
bool Vector::operator!=(const Vector& copyVector) {
	return !(*this == copyVector);
}
/**
*\brief Fonksiyonu cagiran nesnenin tuttugu dizi ile parametre olarak gonderilen nesnenin tuttugu dizinin boyutlari karsilastirilir.
*\brief Eger fonksiyonu cagiran nesne->dizisinin boyutu parametredeki nesne->dizisinin boyutundan kucukse true, degilse false dondurur.
*\param copyVector: Fonksiyonu cagiran nesne->dizisinin boyutundan buyuk mu diye kontrol edilen nesne
*/
bool Vector::operator<(const Vector& copyVector) {
	double magnetude = 0;
	for (int i = 0;i < m_dimension;i++) {
		magnetude = magnetude + (copyVector.m_data[i] * copyVector.m_data[i]);
	}
	magnetude = sqrt(magnetude);
	if ((*this)() < magnetude)
		return true;
	else
		return false;
}
/**
*\brief Fonksiyonu cagiran nesnenin tuttugu dizi ile parametre olarak gonderilen nesnenin tuttugu dizinin boyutlari karsilastirilir.
*\brief Eger fonksiyonu cagiran nesne parametredeki nesneden kucuk veya esitse true, degilse false dondurur.
*\param copyVector: Fonksiyonu cagiran nesne->dizisinin boyutundan buyuk mu diye kontrol edilen nesne
*/
bool Vector::operator<=(const Vector& copyVector) {
	double magnetude = 0;
	for (int i = 0;i < m_dimension;i++) {
		magnetude = magnetude + (copyVector.m_data[i] * copyVector.m_data[i]);
	}
	magnetude = sqrt(magnetude);
	if ((*this)() <= magnetude)
		return true;
	else
		return false;
}
/**
*\brief Fonksiyonu cagiran nesnenin tuttugu dizi ile parametre olarak gonderilen nesnenin tuttugu dizinin boyutlari karsilastirilir.
*\brief Eger fonksiyonu cagiran nesne parametredeki nesneden buyukse true, degilse false dondurur.
*\param copyVector: Fonksiyonu cagiran nesne->dizisinin boyutundan kucuk mu diye kontrol edilen nesne
*/
bool Vector::operator>(const Vector& copyVector) {
	double magnetude = 0;
	for (int i = 0;i < m_dimension;i++) {
		magnetude = magnetude + (copyVector.m_data[i] * copyVector.m_data[i]);
	}
	magnetude = sqrt(magnetude);
	if ((*this)() > magnetude)
		return true;
	else
		return false;
}
/**
*\brief Fonksiyonu cagiran nesnenin tuttugu dizi ile parametre olarak gonderilen nesnenin tuttugu dizinin boyutlari karsilastirilir.
*\brief Eger fonksiyonu cagiran nesne parametredeki nesneden buyuk veya esitse true, degilse false dondurur.
*\param copyVector: Fonksiyonu cagiran nesne->dizisinin boyutundan kucuk mu diye kontrol edilen nesne
*/
bool Vector::operator>=(const Vector& copyVector) {
	double magnetude = 0;
	for (int i = 0;i < m_dimension;i++) {
		magnetude = magnetude + (copyVector.m_data[i] * copyVector.m_data[i]);
	}
	magnetude = sqrt(magnetude);
	if ((*this)() >= magnetude)
		return true;
	else
		return false;
}

/**
*\brief Kullancinin girdigi index degeri eger dizi boyutu icerisindeyse kullaniciya dizinin o index'indeki elemani gonderilir.
*\param index: Dizi indisi
*/
double& Vector::operator[](int index) {
	if (index < 0 || index >= m_dimension) {
		exit(1);
	}
	return m_data[index];
}
/**
*\brief Kullancinin girdigi index degeri eger dizi boyutu icerisindeyse kullaniciya dizinin o index'indeki elemani gonderilir.
*\brief Ayni zamanda sabit nesnelerin kullanabilecegi bir fonksiyondur.
*\param index: Dizi indisi
*/
const double& Vector::operator[](int index) const {
	if (index < 0 || index >= m_dimension) {
		exit(1);
	}
	return m_data[index];
}
/**
*\brief Fonksiyonu cagiran nesnenin tuttugu dizi ve parametre olarak gonderilen nesnenin tuttugu dizinin elemanlarini toplayan operator.
*\brief Yeni bir nesne uretilir ve bu uretilen nesne iki dizi elemanlarinin toplamini tutar.
*\param secondOperand: Toplanan gorevi goren ikinci nesne
*\return result: Toplam gorevi goren fonskiyon icerisinde uretilen nesne
*/
Vector Vector::operator+(const Vector& secondOperand) {
	Vector result(secondOperand.m_dimension);
	for (int i = 0;i < secondOperand.m_dimension;i++) {
		result.m_data[i] = m_data[i] + secondOperand.m_data[i];
	}
	return result;
}
/**
*\brief Fonksiyonu cagiran nesnenin tuttugu dizi ve parametre olarak gonderilen nesne->dizinsinin elemanlarini toplayan operator.
*\brief Iki dizi elemanlarinin toplamini fonksiyonu cagiran nesne->dizisinin elemanlarina atanir.
*\param secondOperand: Toplanan gorevi goren ikinci nesne
*\return *this: Toplam gorevi goren ve fonskiyon sonunda elemanlari degisen, fonskiyonu cagiran nesne
*/
Vector& Vector::operator+=(const Vector& secondOperand) {
	for (int i = 0;i < secondOperand.m_dimension;i++) {
		m_data[i] = m_data[i] + secondOperand.m_data[i];
	}
	return *this;
}
/**
*\brief Fonksiyonu cagiran nesnenin tuttugu diziden ve parametre olarak gonderilen nesnenin tuttugu dizinin elemanlarini cikaran operator.
*\brief Yeni bir nesne uretilir ve bu uretilen nesne iki dizi elemanlarinin farkini tutar.
*\param secondOperand: Bir cikarma isleminde cikan gorevi goren ikinci nesne
*\return result: Fark gorevi goren fonskiyon icerisinde uretilen nesne
*/
Vector Vector::operator-(const Vector& secondOperand) {
	Vector result(secondOperand.m_dimension);
	for (int i = 0;i < secondOperand.m_dimension;i++) {
		result.m_data[i] = m_data[i] - secondOperand.m_data[i];
	}
	return result;
}
/**
*\brief Fonksiyonu cagiran nesnenin tuttugu diziden ve parametre olarak gonderilen nesnenin tuttugu dizinin elemanlarini cikaran operator.
*\brief Iki dizi elemanlarinin farki fonksiyonu cagiran nesne->dizisinin elemanlarina atanir.
*\param secondOperand: Bir cikarma isleminde cikan gorevi goren ikinci nesne
*\return *this: Fark gorevi goren ve fonskiyon sonunda elemanlari degisen, fonskiyonu cagiran nesne
*/
Vector& Vector::operator-=(const Vector& secondOperand) {
	for (int i = 0;i < secondOperand.m_dimension;i++) {
		m_data[i] = m_data[i] - secondOperand.m_data[i];
	}
	return *this;
}
/**
*\brief Iki dizide ayni indisteki elemanlari carpip toplayan operator.
*\param secondOperand: Bir carpma isleminde carpan gorevi goren ikinci nesne
*\return dot_product: Dizi elemanlari carpilir ve toplanir.Dot_product bu degeri tutan degiskendir
*/
double Vector::operator*(const Vector& secondOperand) {
	double dot_product = 0;
	for (int i = 0;i < m_dimension;i++) {
		dot_product = dot_product + (m_data[i] * secondOperand.m_data[i]);
	}
	return dot_product;
}
/**
*\brief Fonksiyonu cagiran nesnenin tuttugu dizinin elemanlarini fonskiyona gonderilen ondalikli sayi ile carpan operator.
*\brief Yeni bir nesne uretilir ve bu uretilen nesne elde edilen sonuclari tutar.
*\param multiplier: Bir carpma isleminde carpan gorevi goren ondalikli sayi
*\return result: Carpim gorevi goren fonskiyon icerisinde uretilen nesne
*/
Vector Vector::operator*(const double multiplier) {
	Vector result(m_dimension);
	for (int i = 0;i < m_dimension;i++) {
		result.m_data[i] = m_data[i] * multiplier;
	}
	return result;
}
/**
*\brief Fonksiyonu cagiran nesnenin tuttugu dizinin elemanlarini fonskiyona gonderilen ondalikli sayi ile carpan operator.
*\brief Dizi elemanlari ile ondalikli sayinin carpimi fonksiyonu cagiran nesnenin uyesi olan dizinin elemanlarina atanir.
*\param multiplier: Bir carpma isleminde carpan gorevi goren ondalikli sayi
*\return *this: Carpim gorevi goren, fonksiyon bitiminde elemanlari degismis olan ve fonskiyonu cagiran nesne
*/
Vector& Vector::operator*=(const double multiplier) {
	for (int i = 0;i < m_dimension;i++) {
		m_data[i] = m_data[i] * multiplier;
	}
	return *this;
}
/**
*\brief Fonksiyonu cagiran nesnenin tuttugu dizi elemanlarini, parametre olarak gonderilen nesnenin tuttugu dizinin elemanlarina bolen operator.
*\brief Yeni bir nesne uretilir ve bu uretilen nesne iki dizi elemanlarinin bolumunu tutar.
*\param secondOperand: Bir bolme isleminde bolen gorevi goren ikinci nesne
*\return result: Bolum gorevi goren fonskiyon icerisinde uretilen nesne
*/
Vector Vector::operator/(const Vector& secondOperand) {
	Vector result(m_dimension);
	for (int i = 0;i < m_dimension;i++) {
		result.m_data[i] = m_data[i] / secondOperand.m_data[i];
	}
	return result;
}
/**
*\brief Fonksiyonu cagiran nesnenin tuttugu dizi ve parametre olarak gonderilen nesne->dizisinin elemanlarina bolen operator.
*\brief Iki dizi elemanlarinin bolumunu fonksiyonu cagiran nesnenin uyesi olan dizinin elemanlari ile degistirir.
*\param secondOperand: Bir bolme isleminde bolen gorevi goren ikinci nesne
*\return *this: Bolum gorevi goren ve fonskiyon bitiminde elemanlari degismis olan nesne
*/
Vector& Vector::operator/=(const Vector& secondOperand) {
	for (int i = 0;i < m_dimension;i++) {
		m_data[i] = m_data[i] / secondOperand.m_data[i];
	}
	return *this;
}
/**
*\brief Fonksiyonu cagiran nesnenin tuttugu dizinin elemanlarini fonskiyona gonderilen ondalikli sayiya bolen operator.
*\brief Yeni bir nesne uretilir ve bu uretilen nesne elde edilen sonuclari tutar.
*\param divider: Bir bolme isleminde bolen gorevi goren ondalikli sayi
*\return result: Bolum gorevi goren fonskiyon icerisinde uretilen nesne
*/
Vector Vector::operator/(const double divider) {
	Vector result(m_dimension);
	for (int i = 0;i < m_dimension;i++) {
		result.m_data[i] = m_data[i] / divider;
	}
	return result;
}
/**
*\brief Fonksiyonu cagiran nesnenin tuttugu dizinin elemanlarini fonskiyona gonderilen ondalikli sayiya bolen operator.
*\brief Dizi elemanlarinin ondalikli sayiya bolumunden cikan sonuclari fonksiyonu cagiran nesnenin uyesi olan dizi elemanlarina atanir.
*\param divider: Bir bolme isleminde bolen gorevi goren ondalik sayisi
*\return *this: Bolum gorevi goren, fonksiyon bitiminde elemanlari degismis olan ve fonskiyonu cagiran nesne olur
*/
Vector& Vector::operator/=(const double divider) {
	for (int i = 0;i < m_dimension;i++) {
		m_data[i] = m_data[i] / divider;
	}
	return *this;
}
/**
*\brief Dizinin boyutunu bulan fonksiyon
*\brief Butun dizi elemanlarinin kareleri toplanir.Elde edilen sonucun karekoku alinir.
*\return magnetude: Dizinin buyuklugu
*/
double Vector::operator()() {
	double magnetude = 0;
	for (int i = 0;i < m_dimension;i++) {
		magnetude = magnetude + (m_data[i] * m_data[i]);
	}
	return sqrt(magnetude);
}
/**
*\brief Dizi elemanlarinin toplama islemine gore tersini bulan fonksiyondur.
*\brief Butun dizi elemanlari (-1) ile carpilip fonksiyonu cagiran nesne->dizisinin elemanlarina atanir.
*\return *this: Fonksiyon bitiminde elemanlari degisen ve fonksiyonu cagiran nesne 
*/
Vector& Vector::operator!() {
	for (int i = 0;i < m_dimension;i++) {
		m_data[i] = (-1) * m_data[i];
	}
	return *this;
}
/**
*\brief Cin fonksiyonu tam sayilari, ondalikli sayilari vb. almak icin kullanilirken nesnelerin uye degiskenlerini de almak icin yeterli degillerdir.
*\brief Bu yuzden cin fonksiyonuna belirli bir gorev eklememiz gerekiyor.
*\param in: Cin islevi goren parametre
*\param a: Kullanicidan aldigimiz uye degisken degerlerine sahip olan nesne 
*/
istream& operator >> (istream &in, Vector &a) {
	for (int i = 0; i < a.m_dimension; i++)
		in >> a.m_data[i];
	return in;

}
/**
*\brief Nesneleri ekranda yazdirirken belirli bir duzen icinde yazdirmami gerekir.
*\brief Cout fonksiyonu tam sayilari, ondalikli sayilari vb. yazmak icin kullanilir ama nesneleri ekranda yazdirabilmemiz icin yeterli degillerdir.
*\brief cout fonksiyonuna belirli bir gorev eklememiz gerekiyor.
*\param out: Cout islevi goren parametre
*\param a: Ekrana yazdirmamiz gereken nesne
*/
ostream& operator<<(ostream &out, const Vector &a) {
	int i;
	out << "[";
	for (i = 0; i < a.m_dimension; i++) {
		out.precision(4);
		out << setw(8) << right << a.m_data[i];
		if (i != (a.m_dimension - 1)) {
			out << ",";
		}
	}
	out << "]";
	return out;
}