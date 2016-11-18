#include <fstream>
#include <iostream>
#include <string>
#include "Todotasks.h"
using namespace std;
Todo_tasks::Todo_tasks(string text) {
  this->number_of_tasks = 0;
}
bool Todo_tasks::check_character(string text, int index, char character) {
  ifstream my_file;
  my_file.open(text);
  string line;
  my_file >> line;
  if (line[index] == character){
    my_file.close();
    return true;
  } else {
    my_file.close();
    return false;
  }
}
int Todo_tasks::Number_of_lines(string text) {
  ifstream my_file;
  my_file.open(text);
  string line;
  int counter = 0;
  if (my_file.is_open()){
    while (getline(my_file,line)) {
      counter++;
    }
  }
  my_file.close();
  return counter;
}
void Todo_tasks::setNumber_of_tasks(string text) {
  this->number_of_tasks = Number_of_lines(text);
}
int Todo_tasks::getNumber_of_tasks() {
  return this->number_of_tasks;
}
void Todo_tasks::print_tasks(string text) {
  setNumber_of_tasks(text);
  ifstream my_file;
  my_file.open(text);
  string line;
  if(my_file.is_open() && getNumber_of_tasks() == 0) {
    cout << "No todos for today! :)";
  } else if (my_file.is_open() && getNumber_of_tasks() > 0){
    while(getline(my_file,line))
      cout << line << endl;
  } else {
    cout << "I could not open the file";
  }
  my_file.close();
}
void Todo_tasks::add_task(string text, char* new_task) {
  setNumber_of_tasks(text);
  ifstream my_file_tasks;
  string* temp_array = new string[number_of_tasks+1];
  my_file_tasks.open(text);
  int i = 0;
  if (check_character(text, 0, '[') == 1){
    while(getline(my_file_tasks.ignore(3),temp_array[i])) {
      i++;
    }
  } else {
    while(getline(my_file_tasks,temp_array[i])) {
      i++;
    }
  }
  temp_array[number_of_tasks] = new_task;
  ofstream new_file_tasks;
  new_file_tasks.open(text);
  for (int i = 0; i <= number_of_tasks; i++) {
    new_file_tasks << "[ ]" + temp_array[i] << endl;
  }
  new_file_tasks.close();
  delete[] temp_array;
}
void Todo_tasks::remove_task(string text,int index) {
  setNumber_of_tasks(text);
  cout << number_of_tasks;
  ifstream my_file_remove;
  string* temp_array_remove = new string[number_of_tasks+1];
  my_file_remove.open(text);
  string line;
  int i = 0;
  while (getline(my_file_remove,line)) {
    if(index-1 == i && line[1] != 'X') {
      temp_array_remove[i] = "[X]" + line.erase(0,3);
    } else if(line[1] == 'X') {
      temp_array_remove[i] = "[X]" + line.erase(0,3);
    } else if (line[0] == '[' && line[1] != 'X') {
      temp_array_remove[i] = "[ ]" + line.erase(0,3);
    }
    ++i;
  }
  my_file_remove.close();
  ofstream new_file_remove;
  new_file_remove.open(text, fstream::out | fstream::trunc);
  for(int i = 0; i < number_of_tasks-1; i++) {
    if ( i < index-1) {
      new_file_remove << "[ ]" + temp_array_remove[i] << endl;
    } else if ( i >= index-1) {
      new_file_remove << "[ ]" + temp_array_remove[i+1] << endl;
    }
  }
  new_file_remove.close();
  delete[] temp_array_remove;
}
void Todo_tasks::chekc_task(string text,int index) {
  setNumber_of_tasks(text);
  ifstream my_file_check;
  string* temp_array_check = new string[number_of_tasks+1];
  my_file_check.open(text);
  string line;
  int i = 0;
  while (getline(my_file_check,line)) {
    if(index-1 == i && line[1] != 'X') {
      temp_array_check[i] = "[X]" + line.erase(0,3);
    } else if(line[1] == 'X') {
      temp_array_check[i] = "[X]" + line.erase(0,3);
    } else if (line[0] == '[' && line[1] != 'X') {
      temp_array_check[i] = "[ ]" + line.erase(0,3);
    }
    ++i;
  }
  //for (int i = 0; i < number_of_tasks; i ++ ) { cout << temp_array_check[i] << endl; }
  my_file_check.close();
  ofstream new_file_check;
  new_file_check.open(text);
  for (int i = 0; i < number_of_tasks; i++) {
    new_file_check << temp_array_check[i] << endl;
  }
  new_file_check.close();
  delete[] temp_array_check;
}
Todo_tasks::~Todo_tasks() {

}
