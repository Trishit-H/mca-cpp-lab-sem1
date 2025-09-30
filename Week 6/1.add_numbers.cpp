// Write a C++ Program to Add Two Numbers Using a Pointer.

#include <iostream>
using namespace std;

int main() {
  int num1, num2, sum;

  cout << "Enter two numbers: ";
  cin >> num1 >> num2;

  int *ptr1 = &num1;
  int *ptr2 = &num2;

  sum = *ptr1 + *ptr2;

  cout << "The sum of the entered numbers is: " << sum << endl;

  return 0;
}