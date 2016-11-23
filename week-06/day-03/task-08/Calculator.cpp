/*
 * Calculator.cpp
 *
 *  Created on: 2016 nov. 23
 *      Author: Feri
 */

#include "Calculator.h"

template <class T>
void Calculator<T>::set_number_1(T a){
    this->number_1 = a;
  }
template <class T>
  void Calculator<T>::set_number_2(T a){
    this->number_2 = a;
  }
template <class T>
  T Calculator<T>::add(T a, T b){
  this->set_number_1(a);
  this->set_number_2(b);
  return this->number_1 + this->number_2;
}
template <class T>
  T Calculator<T>::subtraction (T a, T b){
  this->set_number_1(a);
  this->set_number_2(b);
  return this->number_1 - this->number_2;
}
template <class T>
  T Calculator<T>::multiply(T a, T b){
  this->set_number_1(a);
  this->set_number_2(b);
  return this->number_1 * this->number_2;
}
template <class T>
  T Calculator<T>::devide(T a, T b) {
  if(b == 0) {
    throw 1;
  }
  this->set_number_1(a);
  this->set_number_2(b);
  return this->number_1 / this->number_2;
}
