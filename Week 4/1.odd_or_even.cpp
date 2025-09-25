// Write a C++ program to check whether a number is odd or even using
// ternary operator

#include <iostream>

using namespace std;

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    (num % 2 == 0) ? cout << "Number is even!" << endl : cout << "Number is odd!" << endl;

    return 0;
}
