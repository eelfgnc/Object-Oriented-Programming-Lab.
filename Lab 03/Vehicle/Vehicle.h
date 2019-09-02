#include <iostream> 
using namespace std;
/**
* \brief Bir aracta guvenli yolculuk yapilabilmesi icin gereken onlemlerlerin alinmasini saglayan bir programdir.
* \author Elif GENC  (01elifgenc@gmail.com)
* \date 28.10.2017
*/
class Vehicle {
public:
	Vehicle(int maxPassengerNumber = 4, double maxSpeed = 180);
	~Vehicle();
	bool Accelarate(double amount);
	bool Decelerate(double amount);
	void StartEngine();
	void StopEngine();
	bool GetIn(int passengerNumber);
	bool GetOut(int passengerNumber);
	double getCurrentSpeed();
	double getCurrentPassengerNumber();
	bool IsEngineStarted();

private: 
	bool engineStarted;
	double currentSpeed;
	int currentPassengerNumber; 
	int maxPassengerNumber; 
	double maxSpeed;
	int airConditionDegree;
};