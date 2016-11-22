#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Write a function that receives a string and a character.
// The function should return an array of strings.
// The function should split the string at the character it receives as the second argument.
// The character it uses to split should not be in any of the new strings.
// Example: split("What a nice day", ' ');
// Result: {"What", "a", "nice",  "day"}
// If the character is not in the string throw an exception.
//
// In the main function demonstrate the function when working, and when throwing an exception.
// Write the results to the console.

vector <string> split_text(string text, char a) throw(char){
  char check = a;
  string word;
  int vector_counter = 0;
  vector <string> temp;
  for (unsigned int i = 0; i < text.length(); i++) {
      if (text[i] != a) {
        word += text[i];
      } else {
        temp.push_back(word);
        word = "";
        vector_counter++;
      }
    }
  temp.push_back(word);
  if (vector_counter == 0) {
    throw (check);
  }
  return temp;
}

int main () {
  vector<string> example;
  try {
  example= split_text("kutya cica kutya cica", 'c');
    for (unsigned int i = 0; i < example.size(); i++) {
      cout << example[i] << " ";
    }
  }
  catch (char a) {
    cout << "There is no '" <<  a << "' character in the given text.";
  }
return 0;
}
