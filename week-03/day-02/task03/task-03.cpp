#include <string>
#include <iostream>

using namespace std;
// Write a function that taes a Car as an argument and prints all it's stats
// If the car is a Tesla it should not print it's gas level

enum CarType {VOLVO, TOYOTA, LAND_ROVER, TESLA};
struct Car {
  CarType type;
  double km;
  double gas;
};
void print_car(Car car);
int main() {
  Car car1={VOLVO,112541,7};
  Car car2={TOYOTA,132541,6};
  Car car3={LAND_ROVER,114541,7};
  Car car4={TESLA,11541,8};
  cout << "Car: "; print_car(car1);
  cout << endl;
  cout << "Car: "; print_car(car2);
  cout << endl;
  cout << "Car: "; print_car(car3);
  cout << endl;
  cout << "Car: "; print_car(car4);
  cout << endl;
  return 0;
}
void print_car(Car car){
  string car_names[4]={"VOLVO" , "TOYOTA" , "LAND_ROVER" , "TESLA"};
  car.type !=TESLA ? cout <<  car_names[car.type] << " " << car.km << "km " << car.gas <<" liter gas/100km"
      : cout << car_names[car.type] << " " << car.km <<"km ";
}
