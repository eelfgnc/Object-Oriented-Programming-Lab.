#include "Vehicle.h"
Vehicle::Vehicle(int maxPassengerNumber, double maxSpeed) {
	this->maxSpeed = maxSpeed;
	this->maxPassengerNumber = maxPassengerNumber;
	this->engineStarted = false;
	this->currentSpeed = 0;
	this->currentPassengerNumber = 0;
	this->airConditionDegree = 22;
}
Vehicle::~Vehicle() {

}

/**
* \brief Aracin hizini arttiran fonskiyon.
* \brief Eger arac motoru calismiyorsa aracin hizi arttirilamaz ve fonksiyon false dondurur.
* \brief Motor calisiyorsa ve kullanicinin istedigi hiz miktari aracin maksimum hizini gecmiyorsa aracin hizi kulllanicinin istedigi hiz miktari kadar artirilir veya
* \brief kullanicinin girdigi hiz miktari maksimum hiz miktarini gecerse aracin hizi maksimum hiz miktarina esitlenir ve fonksiyon true dondurur.
* \param amount: Hiz miktarindaki artisi belirler.
*/
bool Vehicle::Accelarate(double amount) {
	if (IsEngineStarted() == false) {
		return false;
	}
	else {
		if (currentSpeed + amount > maxSpeed)
			currentSpeed = maxSpeed;
		else {
			currentSpeed = currentSpeed + amount;
		}
		return true;
	}
}

/**
* \brief Aracin hizini azaltan fonskiyon.
* \brief Eger arac motoru calismiyorsa aracin hizi azaltilamaz fonksiyon false dondurur.
* \brief Motor calisiyorsa ve kullanicinin hiz miktari kullanicinin girdigi amount miktarindan fazlaysa aracin hizindan amount miktari cikarilir ve hiz hesaplanir 
* \brief veya kullanicinin girdigi hiz miktari mevcut hiz miktarini gecerse aracin hizi sifira esitlenir ve fonksiyon true dondurur.
* \param amount: Hiz miktarindaki dususu belirler.
*/
bool Vehicle::Decelerate(double amount) { 
	if (IsEngineStarted() == false) {
		return false;
	}
	else {
		if (currentSpeed >= amount)		{
			currentSpeed = currentSpeed - amount;
		}
		else {
			currentSpeed = 0;
		}
		return true;
	}
}

/**
* \brief Arac motorunun calismasini saglayan fonskiyon.
*/
void Vehicle::StartEngine() { 
	engineStarted = true;
}

/**
* \brief Arac motorunun durmasini saglayan fonskiyon.
*/
void Vehicle::StopEngine() {
	engineStarted = false;
}

/**
* \brief Araca binecek olan yolcu sayisi ile ilgilenen fonskiyon.
* \brief Eger aracin hizi sifir degilse yolcu binemez ve fonksiyon false dondurur.
* \brief Arac hizi sifirsa mevcut yolcu sayisina ve araca binmek isteyen yolcu sayilarina bakilir.
* \brief Eger mevcut yolcu sayisi ve binecek olan yolcu sayilarinin toplami maksimum alabilecegi yolcu sayisindan fazla ise yolcu sayisi maksimum yolcu sayisina esit olur ve fonksiyon true dondurur.
* \brief Ama maksimum yolcu sayisindan fazla degil ise binmek isteyen butun yolcular araca biner ve fonksiyon true dondurur.
* \param passengerNumber: Araca binecek olan yolcu sayisi
*/
bool Vehicle::GetIn(int passengerNumber)
{
	if (this->currentSpeed == 0){
		if ((currentPassengerNumber + passengerNumber) <= maxPassengerNumber) {
			currentPassengerNumber = currentPassengerNumber + passengerNumber;
		}
		else {
			currentPassengerNumber = maxPassengerNumber;
		}
		return 1;
	}
	else {
		return 0;
	}
}

/**
* \brief Aractan inecek olan yolcu sayisi ile ilgilenen fonskiyon.
* \brief Eger aracin hizi sifir degilse yolcu inemez ve fonksiyon false dondurur.
* \brief Arac hizi sifirsa mevcut yolcu sayisina ve aractan inmek isteyen yolcu sayilarina bakilir.
* \brief Eger mevcut yolcu sayisi ve inecek olan yolcu sayilarinin farki sifira esit yada fazla ise yolcu sayisindan inecek yolcu sayisi cikarilir ve fonksiyon true dondurur.
* \brief Ama bu fark sifirdan kcuk ise yolcu sayisi sifir olur ve fonksiyon true dondurur.
* \param passengerNumber: Aractan inecek olan yolcu sayisi
*/
bool Vehicle::GetOut(int passengerNumber) 
{
	if (currentSpeed == 0) {
		if ((currentPassengerNumber - passengerNumber) >= 0) {
			currentPassengerNumber = currentPassengerNumber - passengerNumber;
		}
		else {
			currentPassengerNumber = 0;
		}
		return 1;
	}
	else {
		return 0;
	}
}

/**
* \brief Aracin mevcut hizini donduren fonksiyon
*/
double Vehicle::getCurrentSpeed() { 
	return currentSpeed;
}

/**
* \brief Aractaki mevcut yolcu sayisini donduren fonksiyon
*/
double Vehicle::getCurrentPassengerNumber() { 
	return currentPassengerNumber; 
}

/**
* \brief Arac motorunun durumunu donduren fonksiyon
*/
bool Vehicle::IsEngineStarted() { 
	return engineStarted;
}