
#include <iostream> 
#include <string> 
using namespace std;


#include "Vehicle.h"

/**
* \brief Arac hizinin artmasi ile ilgilenen fonksiyon.
* \brief Eger aracin hizinin artmasi uygunsa mevcut hizi ve arttiktan sonraki hizi ekrana yazdirilir.
* \param vehicle: Hizinda yukselis olan arac
* \param amount: Arac hizindaki artis miktari
*/
void TEST_Acceleration(Vehicle& vehicle, double amount) {
	double previousSpeed = vehicle.getCurrentSpeed();
	if (vehicle.Accelarate(amount)) 
	{
		cout << "SUCCESS : Accelerated " << endl; 
		cout << "Previous Speed : " << previousSpeed << " Current Speed : " << vehicle.getCurrentSpeed() << endl; 
	}
	else { 
		cout << "FAILURE : Could not accelerated" << endl; 
	}
}

/**
* \brief Arac hizinin azalmasi ile ilgilenen fonksiyon.
* \brief Eger arac hizinin azalmasi uygunsa mevcut hizi ve azaldiktan sonraki hizi ekrana yazdirilir.
* \param vehicle: Hizinda dusus olan arac
* \param amount: Aracin hizindaki dusus miktari
*/
void TEST_Deceleration(Vehicle& vehicle, double amount) { 
	double previousSpeed = vehicle.getCurrentSpeed();
	if (vehicle.Decelerate(amount))
	{
		cout << "SUCCESS : Decelerated " << endl;
		cout << "Previous Speed : " << previousSpeed << " Current Speed : " << vehicle.getCurrentSpeed() << endl;
	}
	else {
		cout << "FAILURE : Could not decelerated" << endl;
	}
}

/**
* \brief Araca binecek olan yolcularla ilgilenen fonksiyon.
* \brief Eger araca yolcu bindirilebilecek kosullar uygunsa aracta bulunan mevcut yolcu sayisi ve binen yolculardan sonraki mevcut yolcu sayisi ekrana yazdirilir.
* \brief Eger kosullar yolcu bindirmeye uygun degilse uyari mesaji verilir.
* \param vehicle: Yolcularin binecegi arac
* \param passengerNumber: Araca binmek isteyen yolcu sayisi
*/
void TEST_GetIn(Vehicle& vehicle, int passengerNumber) {
	int previousPassengerNumber = vehicle.getCurrentPassengerNumber();
	if (vehicle.GetIn(passengerNumber)==false)
	{
		cout << "ERROR : Cannot Get-In the vehicle while moving " << endl;
		cout << "FAILURE : Could not got-in" << endl;
	}
	else {
		cout << "SUCCESS : GOT-IN" << endl;
		cout << "Previous PassengerNumber : " << previousPassengerNumber
             << " Current PassengerNumber : " << vehicle.getCurrentPassengerNumber() << endl;
	}
}

/**
* \brief Aractan inecek olan yolcularla ilgilenen fonksiyon.
* \brief Eger aractan yolcu inebilecek kosullar uygunsa aracta bulunan mevcut yolcu sayisi ve inen yolculardan sonraki mevcut yolcu sayisi ekrana yazdirilir.
* \brief Eger kosullar yolcu indirmeye uygun degilse uyari mesaji verilir.
* \param vehicle: Yolcu sayisi azalacak olan arac
* \param passengerNumber: Aractan inmek isteyen yolcu sayisi
*/
void TEST_GetOut(Vehicle& vehicle, int passengerNumber) { 
	int previousPassengerNumber = vehicle.getCurrentPassengerNumber();
	if (vehicle.GetOut(passengerNumber) == false)
	{
		cout << "ERROR : Cannot Get-Out the vehicle while moving " << endl;
		cout << "FAILURE : Could not got-out" << endl;
	}
	else {
		cout << "SUCCESS : GOT-OUT" << endl;
		cout << "Previous PassengerNumber : " << previousPassengerNumber
             << " Current PassengerNumber : " << vehicle.getCurrentPassengerNumber() << endl;
	}
}

/**
* \brief Arac motorunun calisma durumunu kullaniciya bildiren fonksiyon.
* \brief Eger motor calisiyorsa kullanciya "Engine Started" mesajini verir. 
* \param vehicle: Motorunun calisip calismadigina bakilan arac
*/
void TEST_StartEngine(Vehicle& vehicle) { 
	if (vehicle.IsEngineStarted() == 1) {
		cout << "Engine Started" << endl;
	}
	else {
		cout << "Engine Not Started" << endl;
	}

}

/**
* \brief Arac motorunun calisma durumunu kullaniciya bildiren fonksiyon. 
* \brief Eger motor calismiyorsa kullanciya "Engine Stopped" mesajini verir.
* \param vehicle: Motorunun calisip calismadigina bakilan arac
*/
void TEST_StopEngine(Vehicle& vehicle) { 
	if (vehicle.IsEngineStarted() == 0) {
		cout << "Engine Stopped" << endl;
	}
	else {
		cout << "Engine Not Stopped" << endl;
	}
	
	
}
int main() 
{

	cout << "+-----------------------+" << endl 
		 << "| TEST OF FIRST VEHICLE |" << endl 
		 << "+-----------------------+" << endl;
	Vehicle vehicle1(4, 220); 
	vehicle1.StartEngine();
	TEST_StartEngine(vehicle1);
	TEST_Acceleration(vehicle1, 30);
	TEST_Deceleration(vehicle1, 20);
	TEST_GetIn(vehicle1, 2);
	TEST_GetOut(vehicle1, 1);
	vehicle1.StopEngine();
	TEST_StopEngine(vehicle1);

	cout << "+------------------------+" << endl 
	     << "| TEST OF SECOND VEHICLE |" << endl 
		 << "+------------------------+" << endl;
	Vehicle vehicle2(5, 180);
	TEST_Acceleration(vehicle2, 30);
	TEST_Deceleration(vehicle2, 20);
	TEST_GetIn(vehicle2, 2);
	TEST_GetOut(vehicle2, 1);

	system("pause");
	return 0;
}