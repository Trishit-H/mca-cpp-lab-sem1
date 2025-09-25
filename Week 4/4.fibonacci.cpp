// A Fibonacci sequence is defined as follows: The first and second terms in the
// sequence are 0 and 1. Subsequent terms are found by adding the preceding two
// terms in the sequence. Write a C++ program to generate the first n terms of the
// sequence.

#include <iostream>

using namespace std;

int main() {
    int a = 0, b = 1, numberOfTerms, result;

    cout << "Enter number of terms: ";
    cin >> numberOfTerms;

    for (int i = 0; i < numberOfTerms; i++) {
        cout << a << " ";
        result = a + b;
        a = b;
        b = result;
    }

    return 0;
}
