// Write a C++ program using pointers to compute the sum, mean, and standard deviation 
// of all elements stored in an array of n real numbers.

#include <cmath>
#include <iostream>
using namespace std;

// Function prototypes
double return_sum(double *arr, int size);
double return_mean(double *arr, int size);
double return_standard_deviation(double *arr, int size);

int main() {
	// Declare an array of real numbers and
	// calculate array size
	double arr[] = { 1.1, 6.3, 8.3, 1.5, 9.5 };
	int arr_length = sizeof(arr) / sizeof(arr[0]);
	
	// Call the functions to store the sum, mean and,
	// standard deviation
	double sum_result = return_sum(arr, arr_length);
	double mean_result = return_mean(arr, arr_length);
	double std_dev_result = return_standard_deviation(arr, arr_length);
	
	// Display the array elements
	cout << "Array Elements: ";
	for (int i = 0; i < arr_length; i++) {
		cout << arr[i] << " ";
	}
	
	// Print the results
	cout << "\nSum: " << sum_result << endl;
	cout << "Mean: " << mean_result << endl;
	cout << "Standard Deviation: " << std_dev_result << endl;
	
	return 0;
}

// Function to calculate sum
double return_sum(double *arr, int size) {
	double sum = 0.0;
	
	for (int i = 0; i < size; i++) {
		sum = sum + *(arr + i);
	}
	
	return sum;
}

// Function to calculate mean
double return_mean(double *arr, int size) {
	double sum = return_sum(arr, size);
	return sum / size;
}

// Function to calculate standard deviation
double return_standard_deviation(double *arr, int size) {
	double mean = return_mean(arr, size);
	double variance = 0.0;
	
	for (int i = 0; i < size; i++) {
		double diff = *(arr + i) - mean;
		variance += diff * diff;
	}
	
	variance = variance / size;
	
	return sqrt(variance);
}
