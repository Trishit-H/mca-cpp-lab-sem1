// Write a program for reading elements using a pointer into a n array and
// display the values using an array.
//      i. Declare a set of elements.
//     ii. Declare the pointer and initialize it to the first element's address
//         of a set of elements(array).
//    iii. Repeat the loop until the pointer reaches to the last element and
//         displays each element.

#include <iostream>
using namespace std;

int main() {
  int arr[] = {-5, -4, -3, -2, -1, 1, 2, 3, 4, 5};

  int length = sizeof(arr) / sizeof(arr[0]);

  int *ptr = arr;

  cout << "Array elements: ";
  for (ptr = arr; ptr < arr + length; ptr++) {
    cout << *ptr << " ";
  }

  cout << endl;

  return 0;
}