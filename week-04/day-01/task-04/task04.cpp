#include <iostream>
#include <string>

using namespace std;

class Student {
  private:
    string name;
    unsigned int age;
  public:
    Student(string name, unsigned int age) {
      this->age = age;
      this->name = name;
    }

    string greet() {
      return "Hello my name is: " + this->name;
    }
    void setName(string name) {
      this->name = name;
    }
    string getName(){
      return name;
    }
};

int main() {
  // Create a method on student that takes a string as an argument and
  // changes it's name property
  Student student_1("Miksa",18);
  cout << student_1.greet() << endl;
  student_1.setName("Jozef");
  cout << student_1.greet() << endl;
  return 0;
}
