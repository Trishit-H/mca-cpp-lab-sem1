// Write a C++ program to concatenate two strings using pointers.

#include <iostream>
using namespace std;

int main() {
  char str1[100] = "There are 7 days ";
  char str2[100] = "in a week.";

  char *ptr1 = str1;
  char *ptr2 = str2;

  cout << "String 1: " << str1 << endl;
  cout << "String 2: " << str2 << endl;

  while (*ptr1 != '\0') {
    ptr1++;
  }

  while (*ptr2 != '\0') {
    *ptr1 = *ptr2;
    ptr1++;
    ptr2++;
  }

  *ptr1 = '\0';

  cout << "Concatenated string: " << str1 << endl;

  return 0;
}