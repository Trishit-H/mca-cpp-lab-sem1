// Write a C++ program to reverse a string using pointers.

#include <cstring>
#include <iostream>
using namespace std;

void reverseString(char str[]);

int main() {
  char str[] = "Gifted";

  cout << "Original string: " << str << endl;

  reverseString(str);

  cout << "Reversed string: " << str << endl;

  return 0;
}

void reverseString(char str[]) {
  int size;
  char *begin_ptr, *end_ptr, ch;

  size = strlen(str);

  begin_ptr = str;
  end_ptr = str + size - 1;

  for (int i = 0; i < size / 2; i++) {
    ch = *begin_ptr;
    *begin_ptr = *end_ptr;
    *end_ptr = ch;

    begin_ptr++;
    end_ptr--;
  }
}