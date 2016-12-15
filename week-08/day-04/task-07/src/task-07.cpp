
#include <iostream>
#include <string>

using namespace std;

string change_x(string word) {
  string result = "";
  if(word[0] == 'x') {
    result += 'Y';
  } else {
    result += word[0];
  }
  word.erase(word.begin(),word.begin()+1);
  if (word.length() > 0) {
    result += change_x(word);
  }
  return result;
}

int main() {
// Given a string, compute recursively (no loops) a new string where all the
// lowercase 'x' chars have been changed to 'y' chars.
  cout << change_x("xshahxjhashahshxashxasjhxjkhasjhxajkhsjshhaxsjahxjkshxa");
  return 0;

}
