// Write a C++ program to find the second-largest integer in a list of integers.

#include <iostream>
using namespace std;

void bubbleSort(int arr[], int length);

int main() {
  int arrayLength;

  cout << "Enter the number of integers: ";
  cin >> arrayLength;

  int arr[arrayLength];

  cout << "Enter " << arrayLength << " integers: ";
  for (int i = 0; i < arrayLength; i++) {
    cin >> arr[i];
  }

  // Display the array
  cout << "Array: ";
  for (int i = 0; i < arrayLength; i++) {
    cout << arr[i] << " ";
  }

  // Call the bubble sort function to sort the array
  bubbleSort(arr, arrayLength);

  cout << "\nSecond largest integer is: " << arr[arrayLength - 2] << endl;

  return 0;
}

// Function to sort an array using bubble sort technique
// Sorting in ascending order
void bubbleSort(int arr[], int length) {
  int temp;

  for (int i = 0; i < length - 1; i++) {
    for (int j = 0; j < length - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}
