#include "Matrix.h"
#include <iostream>
#include <iomanip>
#include<cmath>
using namespace std;

/**
* \brief Fonksiyona gonderilen matris icin hafizada yer acilir.
* \brief Fonksiyona gonderilen matris icin hafizada, kullanicinin girdigi rowSize ve columnSize ile 2 boyutlu bir matris olusturulur.
* \brief Matris.rowSize ve matrix.columnSize degerleri, kullanicinin girdigi rowSize ve columnSize degerleri ile guncellenir.
* \param matrix: Hafizada yer acilmasi icin kullanicinin gonderdigi matris
* \param rowSize: Matrisin kac satirdan olustugunu gosteren deger
* \param columnSize: Matrisin kac sutundan olustugunu gosteren deger
*/
void Matrix_Allocate(Matrix& matrix, int rowSize, int columnSize)
{
	matrix.rowSize = rowSize;
	matrix.columnSize = columnSize;
	matrix.data = new float*[rowSize];
	for (int i = 0;i < matrix.rowSize;i++) {
		matrix.data[i] = new float[columnSize];
	}
}

/**
* \brief Fonksiyona gonderilen matrisin hafizadaki yeri silinir.
* \brief Matrisin rowSize ve columnSize degerleri NULL olur.
* \param matrix: Hafizadan silinmesi icin kullanicinin gonderdigi matris
*/
void Matrix_Free(Matrix& matrix)
{
	for (int i = 0;i < matrix.rowSize;i++) {
		delete[] matrix.data[i];
	}
	delete matrix.data;
	matrix.rowSize = NULL;
	matrix.columnSize = NULL;
}

/**
* \brief Fonksiyona gonderilen sayi matrisin butun elemanlarina atanir.
* \param matrix: Butun elemanlarinin value degeri ile doldurulmasi istenen matris  
* \param value: Matrisin butun elemanlarina atacak sayi
*/
void Matrix_FillByValue(Matrix& matrix, float value)
{
	for (int i = 0;i < matrix.rowSize;i++) {
		for (int j = 0;j < matrix.columnSize;j++) {
			matrix.data[i][j] = value;
		}
	}
}

/**
* \brief Fonksiyona gonderilen matrisin elemanlari, fonksiyona gonderilen data pointerinin tuttugu matrisin elemanlari ile esit olur.
* \param matrix: Fonksiyona gonderilen baska bir matrisin elemanlari ile ayni degere sahip olacak matris
* \param **data: Butun elemanlari dolu olup diger matrisi etkileyecek olan matris 
*/
void Matrix_FillByData(Matrix & matrix, float ** data)
{
	for (int i = 0;i < matrix.rowSize;i++) {
		for (int j = 0;j < matrix.columnSize;j++) {
			matrix.data[i][j] = data[i][j];
		}
	}
}

/**
* \brief Fonksiyona gonderilen matris, ekrana belirli bir duzen icerisinde yazilir.
*/
void Matrix_Display(const Matrix& matrix)
{
	for (int i = 0;i < matrix.rowSize;i++) {
		for (int j = 0;j < matrix.columnSize;j++) {
			cout << setw(10) << right << matrix.data[i][j];
		}
		cout << endl;
	}
}

/**
* \brief Iki matris ile toplama islemi yapilir.
* \brief Result matrisinin satir sayisi matrix_left yada matrix_right matrisinin satir sayisina, sutun sayisi ise matrix_left yada matrix_right matrisinin sutun sayisina esit olacak sekilde, Matrix_Allocate fonksiyonu yardimiyla hafizada yer acilir.
* \brief Fonksiyona gonderilen bu uc matrisinin boyutu ayni olmali yoksa toplama islemi yapilamaz.
* \brief Matrisler icerisinde ayni konumda bulunan sayilar toplanarak elde edilen sonuc result matrisi icerisindeki konumuna yazilir.
* \param matrix_left: Toplanan matris
* \param matrix_right: Toplanan matris
*\param result: Toplam matris
*/
void Matrix_Addition(const Matrix & matrix_left, const Matrix & matrix_right, Matrix & result)
{
	Matrix_Allocate(result, matrix_right.rowSize, matrix_left.columnSize);
	for (int i = 0;i < matrix_right.rowSize;i++) {
		for (int j = 0;j < matrix_left.columnSize;j++) {
			result.data[i][j] = matrix_right.data[i][j] + matrix_left.data[i][j];
		}
	}

}

/**
* \brief Iki matris ile cikarma islemi yapilir.
* \brief Result matrisinin satir sayisi matrix_left yada matrix_right matrisinin satir sayisina, sutun sayisi ise matrix_left yada matrix_right matrisinin sutun sayisina esit olacak sekilde, Matrix_Allocate fonksiyonu yardimiyla hafizada yer acilir.
* \brief Fonksiyona gonderilen bu uc matrisinin boyutu ayni olmali yoksa cikarma islemi yapilamaz.
* \brief Matrisler icerisinde ayni konumda bulunan sayilar birbirinden cikartilarak elde edilen sonuc result matrisi icerisindeki konumuna yazilir.
* \param matrix_left: Eksilen matris
* \param matrix_right: Cikan matris
*\param result: Fark matris
*/
void Matrix_Substruction(const Matrix & matrix_left, const Matrix & matrix_right, Matrix & result)
{
	Matrix_Allocate(result, matrix_right.rowSize, matrix_left.columnSize);
	for (int i = 0;i < matrix_left.rowSize;i++) {
		for (int j = 0;j < matrix_right.columnSize;j++) {
			result.data[i][j] = matrix_left.data[i][j] - matrix_right.data[i][j];
		}
	}
}

/**
* \brief Iki matris ile carpma islemi yapilir.
* \brief Result matrisinin satir sayisi matrix_left matrisinin satir sayisina, sutun sayisi ise matrix_right matrisinin sutun sayisina esit olacak sekilde, Matrix_Allocate fonksiyonu yardimiyla hafizada yer acilir.
* \brief Birinci matrisin birinci satiri, ikinci matrisin birici sutununun elemanlari tek tek carpilip toplanacak.Elde edilen sonuc ise result matrisinin birinci elemani olacak sekilde yazilir.
* \brief 1.satir 1.sutun, 1.satir 2.sutun, 1.satir 3.sutun, 2.satir 1.sutun, 2.satir 2.sutun... olacak sekilde tek tek hesaplanip result matrisindeki yerine yazilir.
* \param matrix_right: Carpan matris
* \param matrix_left: Carpan matris
*\param result: Carpim matris
*/
void Matrix_Multiplication(const Matrix & matrix_left, const Matrix & matrix_right, Matrix & result)
{
	Matrix_Allocate(result, matrix_left.rowSize, matrix_right.columnSize);
	for (int i = 0;i < matrix_left.rowSize;i++) {
		for (int j = 0;j < matrix_right.columnSize;j++) {
			result.data[i][j] = 0;
			for (int k = 0;k < matrix_left.columnSize;k++) {
				result.data[i][j] = result.data[i][j] + matrix_left.data[i][k] * matrix_right.data[k][j];
			}
		}
	}
}

/**
* \brief Fonksiyona gonderilen matris, bir sayi ile carpilir.
* \brief Fonksiyona gonderilen ikinci matrisin boyutu matrix_left matrisinin boyutuyla ayni olacak sekilde, Matrix_Allocate fonksiyonunu kullanarak hafiza da yer acilir.
* \brief Result matrisinin elemanlari, matrix_left matrisinin elemanlari tek tek scalarValue degiskeni ile carpilip bulunur.
* \param matrix_left: Fonksiyona gonderilen ilk matris
* \param scalarValue: Matrisin butun elemanlariyla capilacak olan sayi
* \param result: Sonuc matris
*/
void Matrix_Multiplication(const Matrix & matrix_left, float scalarValue, Matrix & result)
{
	Matrix_Allocate(result, matrix_left.rowSize, matrix_left.columnSize);
	for (int i = 0;i < matrix_left.rowSize;i++) {
		for (int j = 0;j < matrix_left.columnSize;j++) {
			result.data[i][j] = scalarValue * matrix_left.data[i][j];
		}
	}
}

/**
* \brief Fonksiyona gonderilen matrisi bir sayiya boler.
* \brief Fonksiyona gonderilen ikinci matrisin boyutu matrix_left matrisinin boyutuyla ayni olacak sekilde, Matrix_Allocate fonksiyonunu kullanarak hafiza da yer acilir. 
* \brief Result matrisinin elemanlari, matrix_left matrisinin elemanlari tek tek scalarValue degiskenine bolunup bulunur.
* \param matrix_left: Fonksiyona gonderilen ilk matris
* \param scalarValue: Matrisin butun elemanlarini bolecek olan sayi
*\param result: Sonuc matris
*/
void Matrix_Division(const Matrix & matrix_left, float scalarValue, Matrix & result)
{
	Matrix_Allocate(result, matrix_left.rowSize, matrix_left.columnSize);
	for (int i = 0;i < matrix_left.rowSize;i++) {
		for (int j = 0;j < matrix_left.columnSize;j++) {
			result.data[i][j] = matrix_left.data[i][j] / scalarValue;
		}
	}
}

/**
* \brief Fonksiyona gonderilen ikinci matrisin satir sayisi birinci matrisin sutun sayisina , sutun sayisi ise 1 olacak sekilde Matix_Allocate fonksiyonu ile hafiza da yer acilir.
* \brief Birinci matrisin 1.sutunundaki butun elemanlarin kareleri toplaminin karekoku hesaplanir ve ikinci matrisin birinci elemani olacak sekilde yazilir.
* \brief Ic ice kullnacagimiz iki dongu yardimiyla ikinci matrisin butun elemanlari bu sekilde hesaplanir. 
* \param matrix: Fonksiyona gonderilen ilk matris
* \param result: Birinci matrisin elemanlarini kullanip belirli bir kural cercevesinde hesaplanarak elde edilen ikinci matris
*/
void Matrix_Column_Module(const Matrix& matrix, Matrix& result) 
{
	Matrix_Allocate(result, matrix.columnSize , 1);
	int sum = 0;
	for (int j = 0;j < matrix.columnSize;j++)
	{
		for (int i = 0;i < matrix.rowSize;i++)
		{
			sum = sum + (matrix.data[i][j] * matrix.data[i][j]);
		}
		result.data[j][0] = (float)sqrt(sum);
		sum = 0;
	}

}

/**
* \brief Fonksiyona gonderilen result matrisinin boyutu matrix matrisinin boyutu ile ayni olacak sekilde, Matrix_Allocate fonksiyonunu kullnarak hafiza da yer acilir.
* \brief Result matrisinin elemanlari, matrix matrisinin elemanlari taban, fonksiyona gonderilen power sayida us olacak sekilde hesaplanarak bulunur.
* \param matrix: Fonksiyona gonderilen ilk matris
* \param power: Matris elemanlarinin ussu olur.
*\param result: Sonuc matris
*/
void Matrix_Element_Power(const Matrix& matrix, double power, Matrix& result) 
{
	Matrix_Allocate(result, matrix.rowSize, matrix.columnSize);
	for (int i = 0;i < matrix.rowSize;i++)
	{
		for (int j = 0;j < matrix.columnSize;j++)
		{
			result.data[i][j] = pow(matrix.data[i][j], power);
		}
	}
}