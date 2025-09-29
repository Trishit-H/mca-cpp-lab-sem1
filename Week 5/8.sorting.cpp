// Write a C++ program to merge two sorted arrays into another array in sorted
// order.

#include <iostream>
using namespace std;

void bubbleSort(int arr[], int length);

int main() {
  int arrayLength1, arrayLength2;

  cout << "Enter size of the first array: ";
  cin >> arrayLength1;
  int arr1[arrayLength1];
  cout << "Enter " << arrayLength1 << " sorted elements: ";
  for (int i = 0; i < arrayLength1; i++) {
    cin >> arr1[i];
  }

  cout << "Enter size of the second array: ";
  cin >> arrayLength2;
  int arr2[arrayLength2];
  cout << "Enter " << arrayLength2 << " sorted elements: ";
  for (int i = 0; i < arrayLength2; i++) {
    cin >> arr2[i];
  }

  int mergedLength = arrayLength1 + arrayLength2;
  int mergedArr[mergedLength];

  for (int i = 0; i < arrayLength1; i++) {
    mergedArr[i] = arr1[i];
  }

  for (int j = 0; j < arrayLength2; j++) {
    mergedArr[arrayLength1 + j] = arr2[j];
  }

  bubbleSort(mergedArr, mergedLength);

  cout << "Merged and sorted array: ";
  for (int i = 0; i < mergedLength; i++) {
    cout << mergedArr[i] << " ";
  }

  cout << endl;

  return 0;
}

// Function to sort an array using
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
