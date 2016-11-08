#include <iostream>
#include <string>

using namespace std;

class Student {
  public:
    string name;
    unsigned int age;
    Student(string name, unsigned int age) {
      this->age = age;
      this->name = name;
    }
};

int main() {
  // Create a new instace of the Student class and set it's name to "John" and
  // it's age to 21 with it's constructor
  Student student_1("John", 21);
  cout << "Students name is: " << student_1.name << " and his age is: " << student_1.age << endl;
  return 0;
}
