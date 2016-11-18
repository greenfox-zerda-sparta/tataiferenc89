#include <fstream>
#include <iostream>
#include <string>
#include "Todotasks.h"
using namespace std;
Todo_tasks::Todo_tasks(string text) {
  ifstream my_file;
  my_file.open(text);
  string line;
  number_of_tasks = 0;
  array_of_tasks = NULL;
  if (!my_file.is_open()) {
    cout << "I couldn't open the file.";
  } else {
    while(getline(my_file,line)) {
      ++number_of_tasks;
    }
    my_file.close();
    my_file.open(text);
    int i = 0;
    array_of_tasks = new string[number_of_tasks+1];
    while(getline(my_file,line)) {
      if (line[1] == 'X') {
        array_of_tasks[i] = line;
      } else if (line[1] != 'X' && line[0] == '[') {
        array_of_tasks[i] = line;
      } else if (line[0] != '[') {
        array_of_tasks[i] = "[ ]" + line;
      }
      ++i;
    }
  }
  my_file.close();
}
void Todo_tasks::print_usage(string text) {
  ifstream my_file;
  my_file.open(text);
  string line;
  while(getline(my_file,line)) {
    cout <<line << endl;
  }
  my_file.close();
}
void Todo_tasks::print_tasks(string text) {
  ifstream my_file;
  my_file.open(text);
  string line;
  int i = 1;
  if(my_file.is_open() && number_of_tasks == 0) {
    cout << "No todos for today! :)";
  } else if (my_file.is_open() && number_of_tasks > 0){
    while(getline(my_file,line)) {
      cout << i <<". " <<line << endl;
      ++i;
    }
  } else {
    cout << "I could not open the file";
  }
  my_file.close();
}
void Todo_tasks::add_task(string text, char* new_task) {
  array_of_tasks[number_of_tasks] = "[ ]" + (string)new_task;
  ofstream new_file_tasks;
  new_file_tasks.open(text);
  for (int i = 0; i <= number_of_tasks; i++) {
    new_file_tasks << array_of_tasks[i] << endl;
  }
  new_file_tasks.close();
}
void Todo_tasks::remove_task(string text,int index) {
 // for (int i = 0; i < number_of_tasks; i ++ ) { cout << temp_array_remove[i] << endl; }
  ofstream new_file_remove;
  new_file_remove.open(text, fstream::out | fstream::trunc);
  for(int i = 0; i < number_of_tasks-1; i++) {
    if ( i < index-1) {
      new_file_remove << array_of_tasks[i] << endl;
    } else if ( i >= index-1) {
      new_file_remove << array_of_tasks[i+1] << endl;
    }
  }
  new_file_remove.close();
}
void Todo_tasks::chekc_task(string text,int index) {
  //for (int i = 0; i < number_of_tasks; i ++ ) { cout << temp_array_check[i] << endl; }
  ifstream new_file_check;
  new_file_check.open(text);
  string line;
  string* temp_array = new string[number_of_tasks+1];
  for (int i = 0; i < number_of_tasks; i ++ ) {
    if (index-1 == i ){
    temp_array[i] = "[X]" + array_of_tasks[i].erase(0,3);
    } else {
      temp_array[i] = array_of_tasks[i];
    }
  }
  new_file_check.close();
  ofstream new_file_check_out;
  new_file_check_out.open(text);
  for (int i = 0; i <= number_of_tasks-1; i++) {
    new_file_check_out << temp_array[i] << endl;
  }
  delete[] temp_array;
  new_file_check_out.close();
}
Todo_tasks::~Todo_tasks() {
  delete[] array_of_tasks;
}
