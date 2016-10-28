
#include <iostream>
#include <algorithm>
using namespace std;
string reverse_word(string &word){
  reverse(word.begin(),word.end());
return word;
}
int main() {
	string word, reword;
  cout << "Give me a string" << endl;
  cin >> word;
  reword=word;
  reverse_word(reword);
  string palindrome = word+reword;
  if (word == reword){
    cout << "This is already a plaindrome" ;
  }
  else {
  cout <<"The palindrome from your word is : " << palindrome << endl;
  }
return 0;
}
