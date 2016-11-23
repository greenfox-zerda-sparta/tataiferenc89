#include <iostream>
#include <string>

using namespace std;
template <class T>
class Example {
private:
  T item_1;
  T item_2;
public:
  void set_item_1(T);
  T get_item_1();
  void set_item_2(T);
  T get_item_2();
};
template <class T>
void Example<T>::set_item_1(T a){
  this->item_1 = a;
}

template <class T>
T Example<T>::get_item_1() {
return this->item_1;
}

template <class T>
void Example<T>::set_item_2(T b){
  this->item_2 = b;
}

template <class T>
T Example<T>::get_item_2() {
return this->item_2;
}
int main() {
  //Create a simple class template which contains 2 item and has both a get and a set method for these!
  Example<int> test;
  test.set_item_1(8);
  cout << test.get_item_1() << endl;
  test.set_item_1(23);
    cout << test.get_item_1() << endl;
  return 0;
}
