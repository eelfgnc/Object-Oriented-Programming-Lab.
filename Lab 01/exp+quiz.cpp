/**
* \author Elif GENC
*/

#include<iostream>
#include<cmath>
#include<ctime>
#include<iomanip>
#include<string>
using namespace std;

void PrintMessage(const string& message);
bool TakeUserInput(int& data_size, int& min_number, int& max_number);
int *CreateDataSet(int data_size, int min_number, int max_number);
void PrintDataArray(int* data_array, int data_size);
double CalculateMean(int* data_array, int data_size);
void PrintMean(double mean);
double CalculateVariance(int* data_array, int data_size, double mean);
void PrintVariance(double variance);
double CalculateStandartDeviation(int* data_array, int data_size, double mean);
void PrintStandartDeviation(double std_deviation);
double* CalculateZScore(int* data_array, int data_size, double mean, double std_deviation);
void PrintZScoreArray(double* zscore, int data_size);
double* CalculateTScore(int* data_array, int data_size, double mean, double std_deviation);
void PrintTScoreArray(double* tscore, int data_size);
int* findoddnumber(int *dataarray, int data_size);
void printnumberformarkedindexs(int* data_array, int* marked_indexes, int data_size);

int main() {
	srand(time(NULL));
	int data_size, min_number, max_number;

	if (false == TakeUserInput(data_size, min_number, max_number)) {
		PrintMessage("TERMINATED BY USER!\n");
		system("pause");
		return 1;
	}

	int* DataArray = CreateDataSet(data_size, min_number, max_number);
	PrintDataArray(DataArray, data_size);

	double mean = CalculateMean(DataArray, data_size);
	PrintMean(mean);

	double variance = CalculateVariance(DataArray, data_size, mean);
	PrintVariance(variance);

	double stdDeviation = CalculateStandartDeviation(DataArray, data_size, mean);
	PrintStandartDeviation(stdDeviation);

	double* zscore = CalculateZScore(DataArray, data_size, mean, stdDeviation);
	PrintZScoreArray(zscore, data_size);

	double* tscore = CalculateTScore(DataArray, data_size, mean, stdDeviation);
	PrintTScoreArray(tscore, data_size);

	int* Array = findoddnumber(DataArray, data_size);
	printnumberformarkedindexs(DataArray, Array, data_size);

	system("pause");
	return 0;
}

/**
* \brief Kullaniciya uyari mesaji verir.
* \brief Dizinin boyutu sifir oldugunda bu fonksiyon cagirilarak uyari mesaji verilir.
*/
void PrintMessage(const string& message) {
	cout << message;
}

/**
* \brief Kullanicidan, diziyi olusturan temel yapilarin degerlerini alir.
* \param data_size: Dizinin boyutu
* \param min_number: Dizi elemanlarinin alacagi en dusuk deger
* \param max_number: Dizi elemanlarinin alacagi en yuksek deger
*/
bool TakeUserInput(int& data_size, int& min_number, int& max_number) {
	cout << "Enter the 'Data Size' (0 for terminate program): ";
	cin >> data_size;
	cout << "Enter the 'Minimum Number': ";
	cin >> min_number;
	cout << "Enter the 'Maximum Number': ";
	cin >> max_number;
	if (data_size != 0)
		return true;
	else
		return false;
}

/**
* \brief Dizinin elemanlarina random sayi atanir.
* \brief Random sayi, max_number ile min_number sayilari arasinda olur.
* \param data_size: Dizinin boyutu
* \param min_number: Dizi elemanlarinin alacagi en dusuk deger
* \param max_number: Dizi elemanlarinin alacagi en yuksek deger
* \return Fonksiyon icerisinde olusturulan dizinin adresi
*/
int *CreateDataSet(int data_size, int min_number, int max_number) {
	int i;
	int *ptr = new int[data_size];
	for (i = 0;i < data_size;i++) {
		ptr[i] = min_number + rand() % (max_number - min_number + 1);
	}
	return ptr;
}

/**
* \brief Dizi elemanlarini ekrana yazar.
* \param data_array: Dizinin adresi
* \param data_size: Dizinin boyutu
*/
void PrintDataArray(int* data_array, int data_size) {
	int i;
	cout << "+----------------------+\n";
	cout << "|       DATA ARRAY     |\n";
	cout << "+----------------------+\n";
	for (i = 0;i < data_size;i++) {
		cout << "|" << setw(22) << right << *data_array << "|\n";
		data_array++;
	}
	cout << "+----------------------+\n";
}

/**
* \brief Dizi elemanlarinin ortalamasini bulur.
* \brief Ortalama: Dizinin butun elemanlarinin toplami / Dizinin boyutu
* \param data_array: Dizinin adresi
* \param data_size: Dizinin boyutu
*/
double CalculateMean(int* data_array, int data_size) {
	int i, sum = 0;
	for (i = 0;i < data_size;i++) {
		sum += data_array[i];
	}
	return (double)sum / data_size;
}

/**
* \brief Ekrana dizinin ortalamasini yazdirir.
*/
void PrintMean(double mean) {
	cout << "+----------------------+\n";
	cout << "|          MEAN        |\n";
	cout << "+----------------------+\n";
	cout << "|" << setw(22) << mean << "|\n";
	cout << "+----------------------+\n";
}

/**
* \brief Dizi elemanlarinin varyansini hesaplar.
* \brief Varyans: Dizi elemanlarinin dizi ortalamasindan sapma miktarlarinin kareleri toplami / Dizi boyutu
* \param data_array: Dizinin adresi
* \param data_size: Dizinin boyutu
* \param mean: Dizinin ortalamasi
*/
double CalculateVariance(int* data_array, int data_size, double mean) {
	int i, sum = 0;
	for (i = 0;i < data_size;i++) {
		sum += ((data_array[i] - mean)*(data_array[i] - mean));
	}
	return (double)sum / data_size;
}

/**
* \brief Ekrana dizinin varyansini yazdirir.
*/
void PrintVariance(double variance) {
	cout << "+----------------------+\n";
	cout << "|        VARIANCE      |\n";
	cout << "+----------------------+\n";
	cout << "|" << setw(22) << variance << "|\n";
	cout << "+----------------------+\n";
}

/**
* \brief Dizi elemanlarini standart sapmasini hesaplar.
* \brief Standat sapma: Varyansin karekoku
* \param data_array: Dizinin adresi
* \param data_size: Dizinin boyutu
* \param mean: Dizinin ortalamasi
*/
double CalculateStandartDeviation(int* data_array, int data_size, double mean) {
	int i, sum = 0, variance;
	for (i = 0;i < data_size;i++) {
		sum += ((data_array[i] - mean)*(data_array[i] - mean));
	}
	variance = (double)sum / data_size;
	return sqrt(variance);
}

/**
* \brief Ekrana dizinin standart sapmasini yazdirir.
*/
void PrintStandartDeviation(double std_deviation) {
	int i;
	cout << "+----------------------+\n";
	cout << "|  STANDART DEVIATION  |\n";
	cout << "+----------------------+\n";
	cout << "|" << setw(22) << std_deviation << "|\n";
	cout << "+----------------------+\n";
}

/**
* \brief Dizi elemanlarini Z-skorunu hesaplar.
* \brief Formul: Dizi elemanlarindan ortalamanin cikarilmasi / Standart sapma
* \param data_array: Dizinin adresi
* \param data_size: Dizinin boyutu
* \param mean: Dizinin ortalamasi
* \param std_deviation: Dizinin standart sapmasi
* \return Olusturulan yeni dizinin adresi
*/
double* CalculateZScore(int* data_array, int data_size, double mean, double std_deviation) {
	double *ptr;
	ptr = new double[data_size];
	int i;
	for (i = 0;i < data_size;i++) {
		ptr[i] = (double)(data_array[i] - mean) / std_deviation;
	}
	return ptr;

}

/**
* \brief Ekrana dizinin Z-skorunu yazdirir.
*/
void PrintZScoreArray(double* zscore, int data_size) {
	int i;
	cout << "+----------------------+\n";
	cout << "|         Z-SCORE      |\n";
	cout << "+----------------------+\n";
	for (i = 0;i < data_size;i++) {
		cout << "|" << setw(22) << *zscore << "|\n";
		zscore++;
	}
	cout << "+----------------------+\n";
}

/**
* \brief Dizi elemanlarini T-skorunu hesaplar.
* \brief Formul: (Dizinin Z-skoru) * 10 + 50
* \param data_array: Dizinin adresi
* \param data_size: Dizinin boyutu
* \param mean: Dizinin ortalamasi
* \param std_deviation: Dizinin standart sapmasi
* \return Olusturulan yeni dizinin adresi
*/
double* CalculateTScore(int* data_array, int data_size, double mean, double std_deviation) {
	double *ptr;
	ptr = new double[data_size];
	int i;
	for (i = 0;i < data_size;i++) {
		ptr[i] = (double)((data_array[i] - mean) / std_deviation) * 10 + 50;
	}
	return ptr;
}

/**
* \brief Ekrana dizinin T-skorunu yazdirir.
*/
void PrintTScoreArray(double* tscore, int data_size) {
	int i;
	cout << "+----------------------+\n";
	cout << "|         T-SCORE      |\n";
	cout << "+----------------------+\n";
	for (i = 0;i < data_size;i++) {
		cout << "|" << setw(22) << *tscore << "|\n";
		tscore++;
	}
	cout << "+----------------------+\n";
}

/**
* \brief Fonksiyona gelen dizi elemanlari tekse 1, ciftse 0 olacak sekilde yeni bir dizi olusturur.
* \param data_array: Dizinin adresi
* \param data_size: Dizinin boyutu
* \return Olusturulan yeni dizinin adresi
*/
int* findoddnumber(int *data_array, int data_size) {
	int i, j = 0;
	int *ptr = new int[data_size];
	for (i = 0;i < data_size;i++) {
		if (data_array[i] % 2 == 1) {
			ptr[i] = 1;
		}
		else {
			ptr[i] = 0;
		}
	}
	return ptr;
}

/**
* \brief Fonksiyona gelen 2. dizide bir olan elemanlarin karsiligi olarak fonksiyona gelen 1. dizi elemanlarini yazan fonksiyon
* \param data_array: 1. Dizinin adresi
* \param marked_indexes: 2. Dizinin adresi
* \param data_size: Dizilerin boyutu
*/
void printnumberformarkedindexs(int* data_array, int* marked_indexes, int data_size) {
	int i, j = 0;
	cout << "+----------------------+\n";
	cout << "|     MARKED DATA      |\n";
	cout << "+----------------------+\n";

	for (i = 0;i < data_size;i++) {
		if (marked_indexes[i] == 1) {
			cout << "|" << setw(22) << right << data_array[i] << "|" << endl;
		}
	}
	cout << "+----------------------+\n";
}