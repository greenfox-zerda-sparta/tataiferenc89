
#include <iostream>
using namespace std;
//--------STRUCT--------//
struct Vector {
  double* length;
  unsigned int number_of_elements;
};

//------PROTORYPES------//

Vector* vektor_construct(double input[], int size);

double vector_at(Vector& vector, unsigned int index);

void vector_insert(Vector& vector, unsigned int index, double value);

unsigned int vector_find(Vector& vector, double value);

void vector_remove(Vector& vector, unsigned int index);

Vector* vector_concat(Vector& vector1, Vector vector2);

void print(Vector vector);

//---------MAIN---------//

int main() {
  double test_array[5] = {1,2,3,4,5};
// Construct
  Vector* test_vector = vektor_construct(test_array,5);
// Vector at
  cout << "The value at the given index is : " <<  vector_at(*test_vector,3) << endl;
// Insert
  vector_insert(*test_vector,4,13);
// Find
  vector_find(*test_vector,13);
// Remove
  vector_remove(*test_vector,2);
// Concat
  double test_array_1[5] = {1,2,3};
  double test_array_2[5] = {4,5,6,7,8};
  Vector* test_vector_concat_1 = vektor_construct(test_array_1,3);
  Vector* test_vector_concat_2 = vektor_construct(test_array_2,5);

  Vector* concated_vector = vector_concat(*test_vector_concat_1,*test_vector_concat_2);
  print(*concated_vector);

  delete[] test_vector->length;
  delete test_vector;

  delete[] test_vector_concat_1->length;
  delete test_vector_concat_1;

  delete[] test_vector_concat_2->length;
  delete test_vector_concat_2;

  delete[] concated_vector->length;
  delete concated_vector;

  return 0;
}
//------FUNCTIONS-------//
// Construct---------------------
Vector* vektor_construct(double input[], int size) {
  Vector* vector_1 = new Vector;
  vector_1->number_of_elements = size;
  vector_1->length=new double[vector_1->number_of_elements];
  for(unsigned int i = 0; i < vector_1->number_of_elements; i++) {
    vector_1->length[i] = input[i];
  }
  return vector_1;
}
// Vector at---------------------
double vector_at(Vector& vector, unsigned int index) {
  if (index > vector.number_of_elements) {
    return 0;
  }
  return vector.length[index - 1];
}
// Insert---------------------
void vector_insert(Vector& vector, unsigned int index, double value){
  if ((vector_at(vector,index)) == 0) {
  cout << "There are no " << index << " element in the vector. You should pick a number between 1 and "
  << vector.number_of_elements << endl;
  } else {
  double* temp_array = new double[++vector.number_of_elements];
  for(unsigned int i = 0; i < vector.number_of_elements; i++) {
    if(i<index-1) {
      temp_array[i] = vector.length[i];
    } else if(i == (index-1)) {
      temp_array[i] = value;
    } else {
      temp_array[i] = vector.length[i-1];
    }
  }
  delete[] vector.length;
  vector.length = temp_array;
  }
}
// Find----------------------
unsigned int vector_find(Vector& vector, double value){
  unsigned int index = 1;
  for (unsigned int i = 0; i < vector.number_of_elements; i++){
    if(vector.length[i] == value) {
      cout << value << " is in the " << index << ". place in the vector." << endl;
    } else {
      index++;
    }
  }
  if(index - 1 == vector.number_of_elements ){
    cout << "There is no " << value << " in this vector" << endl;
  }
  return 0;
}
// Remove---------------------
void vector_remove(Vector& vector, unsigned int index) {
  double* temp_array = new double[--vector.number_of_elements];
  for(unsigned int i = 0; i < vector.number_of_elements; i++) {
    if ( i < index) {
      temp_array[i] = vector.length[i];
    } else if ( i >= index) {
      temp_array[i] = vector.length[i + 1];
    }
  }
  delete[] vector.length;
  vector.length = temp_array;
}
// Concat---------------------
Vector* vector_concat(Vector& vector1, Vector vector2) {
  unsigned int concated_size = (vector1.number_of_elements + vector2.number_of_elements);
  double* temp_array = new double[concated_size];
  Vector* test_vector_concated = vektor_construct(temp_array,concated_size);
  for (unsigned int i = 0; i < concated_size; i++) {
    if (i < vector1.number_of_elements) {
      test_vector_concated->length[i] = vector1.length[i];
    } else {
      test_vector_concated->length[i] = vector2.length[i-vector1.number_of_elements];
    }
  }
return test_vector_concated;
}
// Print----------------------
void print(Vector vector) {
  for (unsigned int i = 0; i < vector.number_of_elements; i++) {
    cout << vector.length[i] << endl;
  }
}
