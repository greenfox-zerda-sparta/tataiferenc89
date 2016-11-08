#include <iostream>
#include <string>
#include "Student.h"

using namespace std;

int main() {
    // Create a student Class
    // that has a method `add_grade`, that takes a grade from 1 to 5
    // an other method `get_average`, that returns the average of the
    // grades
  Student student_1;
  student_1.add_grade(3);
  student_1.add_grade(4);
  student_1.add_grade(5);
  cout <<"Average of the grades: "; cout << student_1.get_average();
  return 0;
}
