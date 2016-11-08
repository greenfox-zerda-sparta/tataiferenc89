#include <iostream>
#include <string>
#include "Pirate.h"
using namespace std;

int main() {
  Pirate pirate_1;
    // create a pirate class
    // it should have 2 methods
    // drink_rum()
    // hows_goin_mate()
    // if the drink_rum was called at least 5 times:
    // hows_goin_mate should return "Arrrr!"
    // "Nothin'" otherwise
  pirate_1.drink_rum();
  pirate_1.drink_rum();
  pirate_1.drink_rum();
  pirate_1.drink_rum();
  cout << pirate_1.hows_goin_mate() << endl;
  pirate_1.drink_rum();
  cout << pirate_1.hows_goin_mate() << endl;
  return 0;
}
