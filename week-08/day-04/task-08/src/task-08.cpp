#include <iostream>
#include <string>

using namespace std;
string remove_x(string word) {
  string result = "";
  if(word[0] != 'x') {
    result += word[0];
  }
  word.erase(word.begin(),word.begin()+1);
  if (word.length() > 0) {
    result += remove_x(word);
  }
  return result;
}
int main() {
// Given a string, compute recursively a new string where all the 'x' chars have been removed.
  cout << remove_x("xjaksjjxskxjsaksjxjkajskxj");
  return 0;
}
