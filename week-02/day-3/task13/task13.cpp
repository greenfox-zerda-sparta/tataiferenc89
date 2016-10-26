#include <iostream>
#include <string>
using namespace std;
int prtwords(string sentence){
	for(unsigned int i = 0 ; i<sentence.length() ; i++){
			if(sentence[i]==' '){
				cout << endl;
			}else{
				cout << sentence[i];
			}
		}
return 0;
}
// Create a function that prints each word in a string into a new line!
// Create an other function that takes a string and an array of strings as it's input
// and puts each word in the original string into a new element in the array of strings.
// Decide which argument should be a pointer and which shouldn't.
// In the main function, print out each element of the array into a new line!


int main(int argc, char **argv){
	string sentence="egy kettő három négy öt hat hét nyolc kilenc tíz";
	prtwords(sentence);
	return 0;
}
