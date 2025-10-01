// Write a program for reading elements using a pointer into the array and
// display the values using an array.

#include <iostream>
using namespace std;

int main() {
  int arrayLength;

  cout << "Enter the number of elements: ";
  cin >> arrayLength;

  int arr[arrayLength];
  int *ptr;

  cout << "Enter the array elements: ";
  for (ptr = arr; ptr < arr + arrayLength; ptr++) {
    cin >> *ptr;
  }

  cout << "Array: ";
  for (ptr = arr; ptr < arr + arrayLength; ptr++) {
    cout << *ptr << " ";
  }

  cout << endl;

  return 0;
}