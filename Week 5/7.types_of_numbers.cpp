// Write a C++ program to count and display positive, negative, odd, and even numbers in
// an array.

#include <iostream>

using namespace std;

int main() {
    int positive = 0, negative = 0, odd = 0, even = 0;

    int arr[] = { 5, -3, 8, -2, 7, 0, 4, -9, 11, -6 };

    // Calculate length of array
    int arrayLength = sizeof(arr) / sizeof(arr[0]);


    // Positive numbers
    cout << "Positive numbers: ";
    for(int i = 0; i < arrayLength; i++) {
        if(arr[i] > 0) {
            cout << arr[i] << " ";
            positive++;
        }
    }
    cout << "| Total positive numbers: " << positive << endl;

    // Negative numbers
    cout << "Negative numbers: ";
    for(int i = 0; i < arrayLength; i++) {
        if(arr[i] < 0) {
            cout << arr[i] << " ";
            negative++;
        }
    }
    cout << "| Total negative numbers: " << negative << endl;

    // Odd numbers
    cout << "Odd numbers: ";
    for(int i = 0; i < arrayLength; i++) {
        if(arr[i] % 2 != 0) {
            cout << arr[i] << " ";
            odd++;
        }
    }
    cout << "| Total odd numbers: " << odd << endl;

    // Even numbers
    cout << "Even numbers: ";
    for(int i = 0; i < arrayLength; i++) {
        if(arr[i] % 2 == 0) {
            cout << arr[i] << " ";
            even++;
        }
    }
    cout << "| Total even numbers: " << even << endl;

    return 0;
}
