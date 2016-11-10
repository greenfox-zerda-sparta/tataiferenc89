/*
 * Square.cpp
 *
 *  Created on: 2016 nov. 9
 *      Author: Feri
 */
#include <iostream>
using namespace std;
#include "Shape.h"
#include "Square.h"

Square::Square(double _w, double _h) : Shape (_w,_h){
  this->calculateArea();
}
void Square::calculateArea() {
  this->mArea = this->getWidth() * this->getHeight();
}
string Square::getName() {
  return string ("Square");
}
Square::~Square() {

}
