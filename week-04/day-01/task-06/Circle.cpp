#include <iostream>
#include <string>
#include "Circle.h"

Circle::Circle (double radius) {
  this->newRadius = radius;
  this->circumference = (2*radius*3.14);
  this->area = (radius*radius*3.14);
}
double Circle::get_radius(){
  return this->newRadius;
}
double Circle::get_circumference() {
  return this->circumference;
}
double Circle::get_area(){
  return this->area;
}

Circle::~Circle() {
  // TODO Auto-generated destructor stub
}

