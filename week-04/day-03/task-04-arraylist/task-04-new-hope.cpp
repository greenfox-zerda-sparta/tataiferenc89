
#include <iostream>
#include "IntList.h"
#include "IntArrayList.h"

using namespace std;

int main() {
IntList* a = new IntArrayList(3);
((IntArrayList*)a)->fillArray();

((IntArrayList*)a)->append(17);
((IntArrayList*)a)->printArray();

((IntArrayList*)a)->insert(2,19);
((IntArrayList*)a)->printArray();

cout << a->getFirst() << endl;
cout << a->getLast() << endl;

a->isEmpty() > 0 ? cout << "The array is not empty" << endl : cout << "The array is empty "<< endl;

delete a;

	return 0;
}
