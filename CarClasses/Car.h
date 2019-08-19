#pragma once
#include <string>
using namespace std;
#ifndef CAR_H
#define CAR_H
//----------------------------------------------------------
//Car class declaration
//----------------------------------------------------------

class Car {
private:
	int yearModel;
	string carMake;
	int speed;
public:
	Car(int, string, int);			//constructor
	int getYear() const;
	string getMake() const;
	int getSpeed() const;
	int accelerate();
	int brake();
};
#endif // !1


