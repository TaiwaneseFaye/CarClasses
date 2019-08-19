//Chris Sun
//C++
//Program using car class and demonstrating class usage.

#include "pch.h"
#include "Car.h"
#include <iostream>
#include <string>
using namespace std;


int main()
{
	int carYear;		//local variable for car year
	string carMake;		//local variable for car make

	//asking the user for car year and storing it
	cout << "Enter the car year: " << endl;
	cin >> carYear;
	//asking user for car make and storing it
	cout << "Enter the car make: " << endl;
	cin >> carMake;

	cout << "\n";

	//passing the arguments to the constructor
	Car road(carYear, carMake, 0);

	//displaying the entered info
	cout << "Car year: " << road.getYear() << "\nCar Model: " << road.getMake() <<"\n"<< endl;
	
	//calls the acceleration function 5 times
	for (int i = 0; i < 5; i++) {
		road.accelerate();
		cout << "accelerating..." << endl;
		cout << "Car speed is: " << road.getSpeed() << "mph.\n" << endl;
	}

	cout << "\n";

	//calls the brake function 5 times
	for (int b = 0; b < 5; b++) {
		road.brake();
		cout << "decelerating..." << endl;
		cout << "Car speed is: " << road.getSpeed() << "mph.\n" << endl;
	}

	return 0;
}
