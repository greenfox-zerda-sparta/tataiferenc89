#include <string>
#include <iostream>
using namespace std;
// Create a struct that represents a House
// It should store:
//  - The address of the house
//  - The price in EUR
//  - The number of rooms
//  - The area of the house in square meters
//
// The market price of the houses is 400 EUR / square meters
// Create a function that takes a refrence to a house and decides if it's worth to buy
// (if the price is lower than the calculated price from it's area)
//
// Create a function that takes an array of houses (and it's length), and counts the
// houses that are worth to buy.
//
// Create a function that takes an array of houses (and it's length),
// then it creates a new array that consists new houses with the calculated price,
// but all the other properties are the same.
struct House{
  string adress;
  int price;
  int room_num;
  int area;
};
bool worth_to_buy(House &house);
int num_of_worth_to_buy(House* array, int length);
void houses_with_new_price(House* array, int length);
int main() {
  House house1={"P. Sherman 42 wallaby way sydney",33000,3,80};
  House houses[5]={
      {"P. Sherman 42 wallaby way Sydney",30000,7,180},
      {"P. Sherman 52 wallaby way Sydney",38000,3,70},
      {"P. Sherman 62 wallaby way Sydney",42000,5,110},
      {"P. Sherman 72 wallaby way Sydney",70000,7,200},
      {"P. Sherman 82 wallaby way Sydney",42000,4,95}
  };
// Task 5/a.
  if(worth_to_buy(house1)==1) {
    cout << "This house is worth to buy!" << endl;
  }
  else {
    cout << "This house is too expensive" << endl;
  }
// Task 5/b.
  cout << "There is/are " << num_of_worth_to_buy(houses,5) << " house/s worth to buy in this array."<< endl;
// Task 5/c.
  houses_with_new_price(houses,5);
  return 0;
}
bool worth_to_buy(House &house) {
  bool worth_it = true;
  if((house.area*400)>house.price) {
    worth_it = true;
  }
  else{
    worth_it = false;
  }
  return worth_it;
}
int num_of_worth_to_buy(House* array, int length){
  int sum=0;
  for(int i = 0; i < length; i++){
    if(worth_to_buy(array[i]) == 1){
      sum++;
    }
  }
  return sum;
}
void houses_with_new_price(House* array, int length){
  House* new_price_houses=new House[length];
  for(int i = 0; i < length; i++){
    new_price_houses[i]=array[i];
    new_price_houses[i].price=(new_price_houses[i].area*400);
    cout <<"House "<< i+1 <<" address: "<< new_price_houses[i].adress<< ", new price: " << new_price_houses[i].price
    << ",number of rooms: " << new_price_houses[i].room_num<< " and area in square meters: " << new_price_houses[i].area << endl;
  }
  delete[] new_price_houses;
}
