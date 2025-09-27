// Write a C++ program to find the sum of all the array elements.

#include <iostream>
using namespace std;

int main() {
    int sum = 0, arrayLength;

    cout << "Enter length of the array: ";
    cin >> arrayLength;

    int arr[arrayLength];

    cout << "Enter the array elements: ";
    for(int i = 0; i < arrayLength; i++) {
        cin >> arr[i];
    }

    // Display the array:
    cout << "Array: ";
    for(int i = 0; i < arrayLength; i++) {
        cout << arr[i] << " ";
    }

    // Calculate the sum
    for(int i = 0; i < arrayLength; i++) {
        sum = sum + arr[i];
    }

    cout << "\nThe sum of all the elements of the array is: " << sum << endl;

    return 0;
}
