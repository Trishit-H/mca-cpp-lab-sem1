// Write a program using a pointer variable to the sum of n elements from the
// array.

#include <iostream>
using namespace std;

int main() {
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int arrayLength = sizeof(arr) / sizeof(arr[0]);
  int n;

  int sum = 0, *ptr;

  cout << "Enter how many elements to calculate the sum for: ";
  cin >> n;

  for (ptr = arr; ptr < arr + n; ptr++) {
    sum = sum + (*ptr);
  }

  cout << "Array: ";
  for (ptr = arr; ptr < arr + arrayLength; ptr++) {
    cout << *ptr << " ";
  }

  cout << endl;

  cout << "The sum of the first " << n << " array elements: " << sum << endl;

  return 0;
}