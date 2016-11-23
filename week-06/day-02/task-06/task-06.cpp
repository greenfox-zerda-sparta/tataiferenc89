#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main() {
	srand(time(NULL)); // This initializes the random generator.
	int rnd = 0;
	for (int i=0; i<20; i++) {
		rnd = rand() % 5; // generate a random number in the range [0, 4]
		try {
			switch (rnd) {
				case 0:
					throw 3.2f;
					break;
				case 1:
					throw double(43.56);
					break;
				case 3:
					throw "Abrakadabra";
					break;
				case 4:
					throw false;
					break;
				default:
					throw 12;
					break;
			}
		}
    catch(float x) {
      cout << "The exception type was float, it's value is :" << x << endl;
    }
    catch(double y) {
      cout << "The exception type was double, it's value is :" << y << endl;
        }
    catch(char const* z) {
      cout << "The exception type was string, it's value is :" << z << endl;
        }
    catch(bool v) {
      cout << "The exception type was bool, it's value is :" << v << endl;
        }
    catch(int w) {
      cout << "The exception type was integer, it's value is :" << w << endl;
        }
// Write catch blocks for each possibly thrown exception.
// In each catch block write out what the exception's type was. And what the exceptions value was.

	}

	return 0;
}
