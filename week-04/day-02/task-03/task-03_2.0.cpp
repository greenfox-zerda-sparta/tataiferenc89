#include <iostream>
using namespace std;
#include "Shape.h"
#include "Triangle.h"
#include "Square.h"

int main() {
  Shape* a = new Triangle(52,13.6);
  cout << "I am a "<< a->getName() << " and my area is " << a->getmArea() << endl;
  a->setHeight(8.7);
  cout << "I am a "<< a->getName() << " and my area is " << a->getmArea() << endl;
  Shape* b = new Square(54,63);
  cout << "I am a "<< b->getName() << " and my area is " << b->getmArea() << endl;
	return 0;
}
