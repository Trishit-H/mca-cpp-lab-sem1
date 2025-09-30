// Write a C++ Example Program for swapping numbers Using Pointers.

#include <iostream>
using namespace std;

int main() {
  int num1, num2, temp;

  cout << "Enter two numbers: ";
  cin >> num1 >> num2;

  int *ptr1 = &num1;
  int *ptr2 = &num2;

  cout << "Before swapping ==> Num1: " << num1 << ", Num2: " << num2 << endl;

  temp = *ptr1;
  *ptr1 = *ptr2;
  *ptr2 = temp;

  cout << "After swapping ==> Num1: " << num1 << ", Num2: " << num2 << endl;

  return 0;
}