/*
 * Shape.cpp
 *
 *  Created on: 2016 nov. 9
 *      Author: Feri
 */
#include <iostream>
using namespace std;
#include "Shape.h"

Shape::Shape(double _w, double _h) {
  this->mWidth = _w;
  this->mHeight = _h;
  this->mArea = 0;
}
void Shape::setWidth(double _width) {
  this->mWidth = _width;
  this->calculateArea();
}
void Shape::setHeight(double _height) {
  this->mHeight = _height;
  this->calculateArea();
}
double Shape::getWidth() {
  return this->mWidth;
}
double Shape::getHeight() {
  return this->mHeight;
}
double Shape::getmArea() {
  return this->mArea;
}
Shape:: ~Shape(){
}
