#include <iostream>
#include <string>
using namespace std;
int prtwords(string sentence){
	for(unsigned int i = 0 ; i<sentence.length() ; i++){
      if(sentence[i]==' '){
        cout << endl;
      }
      else{
        cout << sentence[i];
      }
  }
return 0;
}
int main(int argc, char **argv){
  string sentence="egy kettő három négy öt hat hét nyolc kilenc tíz";
  prtwords(sentence);
  return 0;
}
