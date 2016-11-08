/*
 * triangle.h
 *
 *  Created on: 2016 nov. 8
 *      Author: Feri
 */
#include <iostream>
#include <string>

using namespace std;
#ifndef TRIANGLE_H_
#define TRIANGLE_H_

class triangle {
public:
  triangle();

  void draw_triangle(int);

  void draw_isosceles_triangle(int);

  void draw_diamond(int);
private:
};

#endif /* TRIANGLE_H_ */
