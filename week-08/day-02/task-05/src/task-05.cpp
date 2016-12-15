#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

// Write a simple program that creates secret santa pairs
// It should read names till the character q is typed to the standard output,
// than it should print the names as secret santa pairs like:
// Clair - Mike
// Joe - Ron
// Cloe - Clair
// Ron - Cloe
// Mike - Joe

vector<string> fill_vector_with_names();

bool noone_same(vector<string> vec, vector<string> shuf_vec);

map<string,string> secret_santa(vector<string> names);

int main() {
  vector<string> names = fill_vector_with_names();
  map<string,string> m = secret_santa(names);
  for(map<string,string>::iterator it = m.begin(); it != m.end(); ++it) {
     cout << it->first << " - " << it->second << endl;
   }
return 0;
}

vector<string> fill_vector_with_names(){
  string name = "";
  vector<string> names;
  while (name != "q") {
    cin >> name;
    if (name == "q") break;
    names.push_back(name);
  }
  return names;
}

bool noone_same(vector<string> vec, vector<string> shuf_vec){
  for(unsigned int i = 0; i < vec.size(); i++) {
    if(vec[i] == shuf_vec[i]) {
      return 0;
    }
  }
  return 1;
}

map<string,string> secret_santa(vector<string> names) {
  map<string,string> m;
  vector<string> shuffeled_names = names;
  while(noone_same(names,shuffeled_names) != 1) {
    random_shuffle(shuffeled_names.begin(),shuffeled_names.end());
  }
  for (unsigned int i = 0; i < names.size(); i++) {
    m[names[i]] = shuffeled_names[i];
  }
  return m;
}
