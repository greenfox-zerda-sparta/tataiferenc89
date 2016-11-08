/*
 * Student.cpp
 *
 *  Created on: 2016 nov. 8
 *      Author: Feri
 */
#include <iostream>
#include <string>

using namespace std;

#include "Student.h"

Student::Student(){

}

void Student::add_grade(int grade){
  if (grade < 1 || grade > 5 ) {
    cout << "Grade should be between 1 and 5.";
  } else {
    this->grades[count_grades] = grade;
    this->count_grades++;
  }
}
double Student::get_average() {
  int sum = 0;
  for (int i = 0; i <= this->count_grades; i++) {
    sum += this->grades[i];
  }
 return sum/this->count_grades;
}

