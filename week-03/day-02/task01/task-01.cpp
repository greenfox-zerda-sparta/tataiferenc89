#include <string>
#include <iostream>

using namespace std;

struct Computer {
  string name;
  double cpu_speed_hz;
  double ram_size;
};

int main() {
  //Computer computer = {"Macbook", 3.2e9, 8e9};
  Computer computer = {"Macbook", 3.2e9, 8e9};
  computer.name="Macbook Pro";
  cout << computer.name << endl << computer.cpu_speed_hz << endl << computer.ram_size;
  // Change the name of the computer to "Macbook Pro" and print all the stats

  return 0;
}
