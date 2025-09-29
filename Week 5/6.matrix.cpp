//  Write a C++ program to perform the following:
//      a. Addition of two matrices
//      b. Multiplication of two matrices

#include <iostream>
using namespace std;

#define MAX 50

// Function prototypes for matrix multiplication, addition
// and to display a matrix
void matrixAddition(int mat1[MAX][MAX], int mat2[MAX][MAX],
                    int result[MAX][MAX], int r, int c);
void matrixMultiplication(int mat1[MAX][MAX], int mat2[MAX][MAX],
                          int product[MAX][MAX], int r1, int c1, int r2,
                          int c2);
void displayMatrix(int mat[MAX][MAX], int r, int c);

int main() {
  int row1, col1, row2, col2;

  cout << "Enter the number of rows and cols for first matrix: ";
  cin >> row1 >> col1;

  cout << "Enter the number of rows and cols for second matrix: ";
  cin >> row2 >> col2;

  // Check the condition for matrix addition
  if (row1 != row2 && col1 != col2) {
    cout << "Dimension of the both the matrix must be same for addition";
    return 1;
  }

  // Check the condition for matrix multiplication
  if (col1 != row2) {
    cout << "For multiplication, cols in 1st matrix must be equal to rows in "
            "2nd matrix";
    return 1;
  }

  // Declare the required 2D arrays
  int arr1[MAX][MAX];
  int arr2[MAX][MAX];
  int product[MAX][MAX];
  int sum[MAX][MAX];

  // Take input of 1st matrix elements
  cout << "Enter the elements of 1st matrix (row-wise): ";
  for (int i = 0; i < row1; i++) {
    for (int j = 0; j < col1; j++) {
      cin >> arr1[i][j];
    }
  }

  // Take input of 2nd matrix elements
  cout << "Enter the elements of 2nd matrix (row-wise): ";
  for (int i = 0; i < row2; i++) {
    for (int j = 0; j < col2; j++) {
      cin >> arr2[i][j];
    }
  }

  // Display both the matrices
  cout << "\nFirst matrix:\n";
  displayMatrix(arr1, row1, col1);

  cout << "\nSecond matrix:\n";
  displayMatrix(arr2, row2, col2);

  // Call the matrix addition function
  matrixAddition(arr1, arr2, sum, row1, col1);

  // Call the matrix multiplication function
  matrixMultiplication(arr1, arr2, product, row1, col1, row2, col2);

  // Display the results
  cout << "\nMatrix addition result:\n";
  displayMatrix(sum, row1, col1);

  cout << "\nMatrix Multiplication result:\n";
  displayMatrix(product, row1, col2);

  return 0;
}

// Function to perform addition of two matrices
void matrixAddition(int mat1[MAX][MAX], int mat2[MAX][MAX],
                    int result[MAX][MAX], int r, int c) {
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      result[i][j] += mat1[i][j] + mat2[i][j];
    }
  }
}

// Function to perform multiplication of two matrices
void matrixMultiplication(int mat1[MAX][MAX], int mat2[MAX][MAX],
                          int result[MAX][MAX], int r1, int c1, int r2,
                          int c2) {
  int sum = 0;

  for (int i = 0; i < r1; i++) {
    for (int j = 0; j < c2; j++) {
      for (int k = 0; k < r2; k++) {
        sum += mat1[i][k] * mat2[k][j];
      }
      result[i][j] = sum;
      sum = 0;
    }
  }
}

// Function to display a matrix
void displayMatrix(int mat[MAX][MAX], int r, int c) {
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      cout << mat[i][j] << " ";
    }
    cout << "\n";
  }
}
