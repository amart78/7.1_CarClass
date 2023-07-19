/***************************************************************************************
7.1 Car Class

This program creates a Car object utilizing a `Car` class that holds model year,
make, & current speed. The `speed` of the car can be increased & decreased in 
intervals of 5 by calling the `accelerate` & `brake` functions, respectively; 
Demonstrated through calling each function 5 times & displaying the new, changed speeds.
****************************************************************************************/

#include <iostream>
#include "Car.cpp"

int main(){

    // Creates car object with default constructor values
    Car car;

    // Calls the `accelerate` function 5 times, displaying the increased speed each time
    for (int i = 0; i < 5; i++){
        car.accelerate();
        cout << "Current speed: " << car.getSpeed() << endl;
    }

    // Calls the `brake` function 5 times, displaying the decreased speed each time
    for (int i = 0; i < 5; i++){
        car.brake();
        cout << "Current speed: " << car.getSpeed() << endl;
    }

    return 0;
};