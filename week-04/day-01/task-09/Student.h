/*
 * Student.h
 *
 *  Created on: 2016 nov. 8
 *      Author: Feri
 */
#include <iostream>
#include <string>

using namespace std;

#ifndef STUDENT_H_
#define STUDENT_H_

class Student {
public:

  Student();
  void add_grade(int);
  double get_average();

private:
  int grades[10];
  int count_grades = 0;
//  double average;
};

#endif /* STUDENT_H_ */
