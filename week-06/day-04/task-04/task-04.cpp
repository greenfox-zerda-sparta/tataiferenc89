#include <iostream>
#include <string>
#include <vector>
using namespace std;

void add_char(vector<char> &example) {
  char temp;
  cout << "Add a character" << endl;
  cin >> temp;
  example.push_back(temp);
}

int main() {
  //create a vector of chars with the size of zero;
  //write a function where the user can add characters to the end of this vector
vector<char> example(0);
add_char(example);
add_char(example);
add_char(example);
add_char(example);
for (unsigned int i = 0; i < 4; i++) {
  cout << example[i];
}
return 0;
}
