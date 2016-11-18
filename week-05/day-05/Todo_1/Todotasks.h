/*
 * Todotasks.h
 *
 *  Created on: 2016 nov. 16
 *      Author: Feri
 */
using namespace std;
#ifndef TODOTASKS_H_
#define TODOTASKS_H_

class Todo_tasks {
public:
  Todo_tasks(string text);
  void print_usage(string);
  void print_tasks(string);
  void add_task(string,char*);
  void remove_task(string,int);
  void chekc_task(string,int);
  ~Todo_tasks();
private:
  int number_of_tasks;
  string* array_of_tasks;
};

#endif /* TODOTASKS_H_ */
