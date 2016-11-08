#include <iostream>
#include <string>
#include "circle.h"

using namespace std;

int main() {
    // Create a `Circle` class that takes it's radius as cinstructor parameter
  Circle circle_1(13);
  cout <<"The radius of the circle is: "<< circle_1.get_radius() << endl;
    // It should have a `get_circumference` method that returns it's circumference
  cout <<"The circumference of the circle is:  " << circle_1.get_circumference() << endl;
    // It should have a `get_area` method that returns it's area
  cout <<"The area of the circle is: " << circle_1.get_area() << endl;
  return 0;
}
