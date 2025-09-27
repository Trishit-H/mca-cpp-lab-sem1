// Write a C++ program to enter elements in the array and display the array elements.

#include <iostream>
using namespace std;

int main() {
    int lengthOfArray;

    cout << "Enter the length of the array: ";
    cin >> lengthOfArray;

    int arr[lengthOfArray];

    cout << "Enter " << lengthOfArray << " elements: " << endl;
    for(int i = 0; i < lengthOfArray; i++) {
        cin >> arr[i];
    }

    cout << "The array elements are: " << endl;
    for(int i = 0; i < lengthOfArray; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
