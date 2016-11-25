#include <iostream>
#include <string>
#include <vector>
using namespace std;

void print_vector(vector<vector<int>> v) {
  for (unsigned int i = 0; i < v.size(); i++) {
    cout << "Vector " << i << ": ";
    for (unsigned int j = 0; j < v.size(); j++) {
      cout << v[i][j] << " ";
    }
    cout << endl;
  }
}

void horizontal(vector<vector<int>> &v) {
  int x = v.size()-1;
  for (unsigned int i = 0; i < (v.size())/2;i++) {
    for (unsigned int j = 0; j <v.size();j++) {
      int temp;
      temp = v[i][j];
      v[i][j] = v[x][j];
      v[x][j] = temp;
    }
    x--;
  }
}

void vertical(vector<vector<int>> &v) {
  int x = v.size()-1;
  for (unsigned int i = 0; i < v.size()/2;i++) {
    for (unsigned int j = 0; j < v.size();j++) {
      int temp;
      temp = v[j][i];
      v[j][i] = v[j][x];
      v[j][x] = temp;
    }
    x--;
  }
}

int main() {
  //Create a 2 dimensional vector with matrix!
      // 1 0 0 0
      // 0 1 0 0
      // 0 0 1 0
      // 0 0 0 1
  // Extend it to the following format:
      // 1 1 1 1 1
      // 0 1 0 0 1
      // 0 0 1 0 1
      // 0 0 0 1 1
      // 0 0 0 0 1
  // Mirror it horizontaly!
  // Mirror it verticaly!
  vector<vector<int>> example(5,(vector<int>(5,0)));
  for (unsigned int i = 0; i < example.size(); i++) {
    for (unsigned int j = 0; j < example.size(); j++) {
      if(i == j || i == 0 || j == 4) {
        example[i][j] = 1;
      }
    }
  }
  print_vector(example);
  cout << endl;
  horizontal(example);
  print_vector(example);
  cout << endl;
  vertical(example);
  print_vector(example);
  cout << endl;
  horizontal(example);
  print_vector(example);
  return 0;
}
