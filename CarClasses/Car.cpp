#include "pch.h"
#include "Car.h"
#include <iostream>
#include <string>
using namespace std;


//initializing constructor
Car::Car(int year, string make, int speeds) {
	yearModel = year;
	carMake = make;
	speed = speeds;
}


//getYear returns the car year
int Car::getYear() const {
	return yearModel;
}

//getMake returns the car make
string Car::getMake() const {
	return carMake;
}

//getSpeed to get the cars speed
int Car::getSpeed() const {
	return speed;
}

//accelerate function to accelerate the car by 5mph
int Car::accelerate() {
	speed += 5;
	return speed;
}

//brake function to slow the car by 5mph
int Car::brake() {
	speed -= 5;
	return speed;
}