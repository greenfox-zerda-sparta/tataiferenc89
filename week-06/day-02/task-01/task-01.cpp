#include <iostream>
using namespace std;

// Write a try - catch block.
// Throw an integer in the try block
// Catch it in the catch block and write it out.

int main() {
  try {
    throw 18;
  }
  catch (int x){
    cout << "I caught " << x << endl;
  }
	return 0;
}
