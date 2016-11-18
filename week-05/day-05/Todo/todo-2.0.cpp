#include <fstream>
#include <iostream>
#include <string>
#include "Todotasks.h"
using namespace std;

int main(int argc, char* argv[]) {
Todo_tasks tasks("Tasks.txt");
  if (argc == 1) {
    tasks.print_tasks("Menu.txt");
  } else if (argc == 2) {
    char* input = argv[1];
    if (input[1] == 'l') {
      tasks.print_tasks("Tasks.txt");
  } else {
    cout << "Unsupported argument";
  }

  } else if (argc == 3) {
      char* input1 = argv[1];
      char* input2 = argv[2];
      int index = 0;
      switch (input1[1]) {
      case 'a' :
        tasks.add_task("Tasks.txt",input2);
        break;
      case 'r' :
        index = atoi(input2);
        tasks.remove_task("Tasks.txt",index);
        break;
      case 'c' :
        index = atoi(input2);
        tasks.chekc_task("Tasks.txt",index);
        break;
      }
  }
return 0;
}
