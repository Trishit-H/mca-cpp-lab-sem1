// Write a C++ Program to reverse the position of the array element 
// (Hint: First element to the last element.) 

#include <iostream>
using namespace std;

// Function prototype
void reverse_array(int arr[], int size);

// Main function
int main() {
	// Take the array length as input
	int array_length;
	cout << "Enter the number of elements: ";
	cin >> array_length;
	
	// Declare VLA and input the elements
	// for the array
	int arr[array_length];
	cout << "Enter " << array_length << " elements: ";
	for (int i = 0; i < array_length; i++) {
		cin >> arr[i];
	}
	
	// Print the original array
	cout << "\nOriginal array: ";
	for (int i = 0; i < array_length; i++) {
		cout << arr[i] << " ";
	}
	
	// Call the reverse_array function 
	// to reverse the array elements
	reverse_array(arr, array_length);
	
	// Print the reversed array
	cout << "\nReversed array: ";
	for (int i = 0; i < array_length; i++) {
		cout << arr[i] << " ";
	}
	
	return 0;
}

// Function to reverse an array
void reverse_array(int arr[], int size) {
	int temp;
	
	for (int i = 0; i < size / 2; i++) {
		temp = arr[i];
		arr[i] = arr[size - i - 1];
		arr[size - i - 1] = temp;
	}
}
