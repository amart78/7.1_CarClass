#include "Car.h"

// Default constructor
Car::Car(){
    year = 2023;
    make = "Toyota";
    speed = 0;
}

Car::Car(int yearVar, string makeVar){
    year = yearVar;
    make = makeVar;
    speed = 0;
}

// Accessor functions for year, make, & speed
int Car::getYear(){
    return year;
}
string Car::getMake(){
    return make;
}
int Car::getSpeed(){
    return speed;
}

void Car::accelerate(){
    speed += 5;
}

// Decreases speed by 5 but not to less than 0 as speed can't be negative
void Car::brake(){
    if (speed < 5){
        speed = 0;
    } else{
        speed -= 5;
    }  
}