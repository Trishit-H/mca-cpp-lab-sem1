// Write a C++ Program for Increment and Decrement an Integer Using a Pointer.

#include <iostream>
using namespace std;

int main() {
  int num;
  int *ptr = &num;

  cout << "Enter a number: ";
  cin >> num;

  cout << "Original number: " << num << endl;

  (*ptr)++;
  cout << "After incrementing, number is: " << num << endl;

  (*ptr)--;
  cout << "After decrementing, number is: " << num << endl;

  return 0;
}