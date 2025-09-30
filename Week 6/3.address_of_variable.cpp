// Write a C++ Program to print the address of a variable Using a Pointer.

#include <iostream>
using namespace std;

int main() {
  int num;

  cout << "Enter a number: ";
  cin >> num;

  cout << "Address of the num variable is: " << &num << endl;

  return 0;
}