// In Your main function create an array of integers. 5 long.
// Fill it up with random numbers.
// For each number treat it as the radius of a circle.
// Calculate the circumference and the area of the circle with such a radius.
// Use preprocessor to define the MY_PI constant. Use this in the calculations.
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

#define MY_PI 3.14159265359

int main() {
  srand(time(0));
  int array[5];
	for (int i = 0; i < 5; i++) {
	  array [i] = rand()%50+1;
	}
	for (int i = 0; i < 5; i++) {
	  cout << "Area of circle: " << array[i] * array[i] * MY_PI << endl;
	  cout << "Circumreference of circle: " << 2 * array[i] * MY_PI << endl;
	}
	return 0;
}
