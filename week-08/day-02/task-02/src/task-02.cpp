#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// create a function that prints a vector using iterators
void print_function(int i) {
  cout << i << " ";
}

int main() {
  vector<int> v;
  for (int i = 0; i < 10; ++i) {
    v.push_back(i);
  }

  for(vector<int>::iterator it = v.begin(); it != v.end(); ++it){
    cout << *it << " ";
  }

  cout << endl;

  for_each(v.begin(),v.end(), print_function);

  return 0;
}
