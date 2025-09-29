// Write a C++ program to find the frequency of a particular number in a list of integers.

#include <iostream>

using namespace std;

int main() {
    int arrayLength, num, freq = 0;

    cout << "Enter the number of integers: ";
    cin >> arrayLength;

    int arr[arrayLength];

    // Take integers as input
    cout << "Enter " << arrayLength << " integers: ";
    for(int i = 0; i < arrayLength; i++) {
        cin >> arr[i];
    }

    cout << "Enter the integer for which frequency is to be calculated: ";
    cin >> num;

    // Check frequency
    for(int i = 0; i < arrayLength; i++) {
        if(arr[i] == num) {
            freq++;
        }
    }

    cout << "Frequency of " << num << " is: " << freq << endl;

    return 0;
}
