/*
 * triangle.cpp
 *
 *  Created on: 2016 nov. 8
 *      Author: Feri
 */
#include <iostream>
#include <string>

using namespace std;
#include "triangle.h"

triangle::triangle(){}

void triangle::draw_triangle(int lines){
  string stars = "*";
  for (int i = 0; i < lines; i++) {
    cout << stars << endl;
    stars += '*';
  }
}
void triangle::draw_isosceles_triangle(int lines) {
  for (int i = 0; i < lines; i++) {
    for (int j = 0; j <= lines-i; j++) {
      cout << " ";
    }
    for (int k = 0; k < (i*2)-1; k++) {
      cout << "*";
    }
    cout << endl;
  }
}
void triangle::draw_diamond(int lines) {
  for (int i = 0; i < lines; i++) {
    for (int j = 0; j < lines-i; j++) {
      cout << " ";
    }
    for (int k = 0; k < (i*2)-1; k++) {
      cout << "*";
    }
    cout << endl;
  }
  for (int i = lines; i >= 0; i--) {
    for (int j = 1; j <= lines-i; j++) {
      cout << " ";
    }
    for (int k = 0; k < (i*2)-1; k++) {
      cout << "*";
    }
    cout << endl;
  }
}
