#include <iostream>
#include <string>


using namespace std;
char rotate_right(char matrix[5][5], char rotated_matrix[5][5]){
 for(int i=0 ; i<=4 ; i++){
  for(int j=0 ; j<=4 ; j++){
    rotated_matrix[i][j]=matrix[4-j][i];
  }
}
return rotated_matrix[5][5];
}
int main() {
char matrix[5][5] = {
    {' ', ' ', '#', ' ', ' '},
    {' ', '#', ' ', '#', ' '},
    {' ', '#', '#', '#', ' '},
    {' ', '#', ' ', '#', ' '},
    {' ', '#', ' ', '#', ' '}
  };
char rotated_matrix[5][5];
  // write the rotate_right function that rotates the matrix to the left
  // so the program should print this:
  //
  // ####
  //   # #
  // ####
rotate_right(matrix,rotated_matrix);
for (int i = 0; i < 5; ++i) {
  for (int j = 0; j < 5; ++j) {
    cout << rotated_matrix[i][j];
    }
    cout << endl;
  }
  return 0;
}
