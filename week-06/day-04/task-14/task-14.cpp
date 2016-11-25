#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <cstdlib>
#include "Car.h"
using namespace std;

int main() {
  srand(time(0));
  //Create a vector of string, for the following car types:
  //"Moszkvics", "Volga", "ZISZ", "Tatra", "Zbrojovka", "Hotchkiss", "DAF", "Warszawa", "Puli", "Balaton",
  //"Benz", "Marauder", "Zsiguli" , "IFA", "Fjord", "Trabant", "Wartburg", "Martini"
  //Create a vector of strings, for the following colors:
  //"Piros", "Narancssárga", "Zöld", "Kék", "Türkiz", "Barna", "Lila", "Sárga", "Fekete", "Fehér"
  //Create a Car class, which holds 3 strings, the name of a car, the color of it, and the platenumber in a format like "AAA"-"000"
  //Create a 3 dimensional vector of our car class, that will represent a "parking house"
    //1 dimension: row of cars
    //2 dimension: cars on a platform like a table game
    //3 dimension: "parking house"
  //Make this parking house 4*4*8 (4*4 platform on 8 floors), then fill it with cars! :)
  //Give these cars a random type from our car type vector!
  //Give these cars a random color from our color vector!
  //Give these cars a random plate number!
  //Make sure there are no duplicates in car plates!
  //Print out how much "Sárga"-"Zsiguli" we have, with their position and platenumber in the parking house!
  //At the end empty the parking house!

  string arr_types[] = {"Moszkvics", "Volga", "ZISZ", "Tatra","Zbrojovka", "Hotchkiss", "DAF", "Warszawa","Puli", "Balaton", "Benz", "Marauder","Zsiguli" , "IFA", "Fjord", "Trabant","Wartburg", "Martini"};
  string arr_colors[] = {"Piros", "Narancssárga", "Zöld", "Kék", "Türkiz", "Barna", "Lila", "Sárga", "Fekete", "Fehér"};

  vector<string> types(arr_types, arr_types + sizeof(arr_types) / sizeof(arr_types[0]));
  vector<string> colors(arr_colors, arr_colors + sizeof(arr_colors) / sizeof(arr_colors[0]));

  vector<vector<vector<Car>>> parking_house(8, vector<vector<Car>>(4, vector<Car>(4)));
  for(int i = 0; i < 8; i++) {
    for(int j = 0; j < 4; j++) {
      for(int k = 0; k < 4; k++) {
        Car temp(types,colors);
        parking_house[i][j][k] = temp;
      }
    }
  }
  int counter = 0;
  for(int i = 0; i < 8; i++) {
    cout << "Floor " << i+1 << ":" << endl;
      for(int j = 0; j < 4; j++) {
        for(int k = 0; k < 4; k++) {
          cout << "Car type: " << parking_house[i][j][k].get_car_type() <<
              " an color: " << parking_house[i][j][k].get_car_color() <<
              " and plate: " << parking_house[i][j][k].get_plate() << endl;
          if (parking_house[i][j][k].get_car_type() == "Zsiguli" && parking_house[i][j][k].get_car_color() == "Sárga") {
            counter++;
          }
        }
      }
      cout << endl;
    }
  cout << "There are " << counter << " sárga zsiguli'Z in the parking house";
  /*for (unsigned int i = 0; i < types.size(); i++) {
    cout << types[i] << ", ";
  }*/
  return 0;
}
