/*
 * Triangle.cpp
 *
 *  Created on: 2016 nov. 9
 *      Author: Feri
 */
#include <iostream>
using namespace std;
#include "Shape.h"
#include "Triangle.h"

Triangle::Triangle(double _w, double _h) : Shape(_w, _h){
  this->calculateArea();
}
void Triangle::calculateArea() {
  this->mArea = this->getWidth() * this->getHeight()/2;
}
string Triangle::getName(){
  return string ("Triangle");
}
Triangle::~Triangle(){

}
