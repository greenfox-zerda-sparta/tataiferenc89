#include <string>
#include <iostream>

using namespace std;
// Create a function that takes an array of pirates (and it's length) then returns the sum of the golds of all pirates

// Create a function that takes an array of pirates (and it's length) then returns the average of the gold / pirate

// Create a function that takes an array of pirates (and it's length) then returns the name of the
// richest that has wooden leg

struct Pirate {
  string name;
  bool has_wooden_leg;
  short int gold_count;
};
int pirates_gold(Pirate* array, int array_length);
int pirates_gold_average(Pirate* array, int array_length);
string ritchest_woodenleg_pirate(Pirate* array, int array_length);

int main() {
  Pirate priates[] = {
    {"Jack", false, 18},
    {"Uwe", true, 8},
    {"Hook", true, 12},
    {"Halloween kid", false, 0},
    {"Sea Wolf", true, 14},
    {"Morgan", false, 1}
  };
  int length=sizeof(priates)/sizeof(priates[0]);
  cout << "The pirates have " << pirates_gold(priates,length) << " gold total." <<endl;
  cout << "A pirate has an average of " << pirates_gold_average(priates,length) << " gold."<<endl;
  cout << "The richest pirate with a wooden leg is " << ritchest_woodenleg_pirate(priates,length) << "." ;
  return 0;
}
int pirates_gold(Pirate* array, int array_length) {
  int sum=0;
  for(int i = 0; i < array_length; i++) {
    sum += array[i].gold_count;
  }
  return sum;
}
int pirates_gold_average(Pirate* array, int array_length){
  return pirates_gold(array,array_length)/array_length;
}
string ritchest_woodenleg_pirate(Pirate* array, int array_length){
  string ritchest;
  int temp=0;
  for(int i = 0; i < array_length; i++){
    if(array[i].has_wooden_leg==1 && temp<array[i].gold_count){
      temp=array[i].gold_count;
      ritchest=array[i].name;
    }
  }
  return ritchest;
}
