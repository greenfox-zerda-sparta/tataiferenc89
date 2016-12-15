#include <iostream>
#include <string>

using namespace std;
string add_stars(string word) {
  string result = "";
  if(word.length() != 1){
    result += word[0];
    result += "*";
  } else {
    result += word[0];
  }
  word.erase(word.begin(),word.begin()+1);
  if (word.length() > 0) {
    result += add_stars(word);
  }
  return result;
}
int main() {
// Given a string, compute recursively a new string where all the
// adjacent chars are now separated by a "*".
  cout << add_stars("szilvasbuktatmertaztszeretem");
  return 0;
}
