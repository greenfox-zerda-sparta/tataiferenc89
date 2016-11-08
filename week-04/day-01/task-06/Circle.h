/*
 * Circle.h
 *
 *  Created on: 2016 nov. 8
 *      Author: Feri
 */
#include <iostream>
#include <string>

using namespace std;

#ifndef CIRCLE_H_
#define CIRCLE_H_

class Circle {
public:
  Circle(double);

  double get_radius();

  double get_circumference();

  double get_area();

  virtual ~Circle();
private:
  double newRadius;
  double circumference;
  double area;
};

#endif /* CIRCLE_H_ */
