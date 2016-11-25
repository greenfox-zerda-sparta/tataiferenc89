#ifndef CAR_H_
#define CAR_H_

#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

class Car {
private:
  string car_type;
  string car_color;
  string plate;
public:
  Car();
  Car(vector<string>,vector<string>);
  string get_car_type();
  string get_car_color();
  string get_plate();
  string generate_plate();
};

#endif /* CAR_H_ */
