#include <iostream>
#include <string>
#include "Car.h"

using namespace std;

int main() {
  Car car_1("Opel", 34563);
    // Create a class called "Car"
    // It should have a "type" property that stores the car's type in a string eg: "Mazda"
    // It should have a "km" property that stores how many kilometers it have run
    // The km and the type property should be a parmeter in the constructor
    // It should have a method called "run" that takes a number and increments the "km" property by it
  cout << car_1.getType() << " runt km: " << car_1.getKm() << endl;
  car_1.Run(30);
  cout << car_1.getType() << " runt km: " << car_1.getKm() << endl;

  return 0;
}
