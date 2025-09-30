// Write a C++ Program to Print a String Using a Pointer.

#include <iostream>
using namespace std;

int main() {
  char str[] = "Sunny Day";
  char *ptr = str;

  while (*ptr != '\0') {
    cout << *ptr;
    ptr++;
  }

  cout << endl;

  return 0;
}