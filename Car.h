#ifndef CAR_H
#define CAR_H
#include <string>
using namespace std;

class Car{
    private:
        int year;            // holds the car's model year
        string make;         // holds the make of the car
        int speed;           // holds the car's current speed

    public:
        // Constructor functions
        Car();              // default
        Car(int yearVar, string makeVar);

        // Accessor functions for year, make, & speed
        int getYear();
        string getMake();
        int getSpeed();

        // Functions that increase & decrease speed, respectively
        void accelerate();
        void brake();
};

#endif