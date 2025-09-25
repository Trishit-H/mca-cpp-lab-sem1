// Write a C++ program to add two numbers without using the addition operator

#include <iostream>

using namespace std;

int main() {
    int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // If num2 is positive then decrement num2 until it
    // is 0 and simultaneously increment num1.
    // Else if num2 is negative then increment num2 until it
    // is 0 and simultaneously decrement num1.
    if (num2 > 0) {
        while (num2 != 0) {
            num2--;
            num1++;
        }
    } else if (num2 < 0) {
        while (num2 != 0) {
            num2++;
            num1--;
        }
    }

    cout << "The sum of the two numbers is: " << num1 << endl;

    return 0;
}
