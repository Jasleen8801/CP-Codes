#include <iostream>
using namespace std;

int main() {
   int row, column, i, j;

   cout << "Enter rows and columns of matrix: ";
   cin >> row >> column;
    
   int arr[row][column], transpose[row][column];
   cout << "\nEnter elements of matrix: " << endl;

   for (int i = 0; i < row; ++i) 
      for (int j = 0; j < column; ++j) 
         cin >> arr[i][j];

   for (int i = 0; i < row; ++i)
      for (int j = 0; j < column; ++j) {
         transpose[j][i] = arr[i][j];
      }

   cout << "\nTranspose of Matrix: " << endl;
   for (int i = 0; i < column; ++i)
      for (int j = 0; j < row; ++j) {
         cout << " " << transpose[i][j];
         if (j == row - 1)
            cout << endl << endl;
      }

   return 0;
}
