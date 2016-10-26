#include <iostream>

using namespace std;

int main() {
  int high_number = 6655;
  int low_number = 2;

  int* hight_number_pointer = &low_number;
  int* low_number_pointer = &high_number;
  int* temp_pointer=low_number_pointer;
  // Please fix the problem and swap where the pointers point,
  // without using the "&" operator.
  low_number_pointer=hight_number_pointer;
  hight_number_pointer=temp_pointer;
  cout <<"The high number pointers address is: "<< hight_number_pointer <<" and it's value: "<< *hight_number_pointer << endl;
  cout <<"The low number pointers address is: "<< low_number_pointer <<" and it's value:  "<< *low_number_pointer << endl;
  return 0;
}
