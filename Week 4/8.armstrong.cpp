// Write a C++ program to check whether a given 3-digit number is an
// Armstrong number.

#include <iostream>

using namespace std;

int countDigits(int);
bool isArmstrong(int, int);

// Main function
int main() {
    int num, numberOfDigits;

    cout << "Enter a number: ";
    cin >> num;

    // Negative numbers are not allowed
    if(num < 0) {
        cout << "Enter positive numbers only!" << endl;
        return 1;
    }

    // Calculate the number of digits
    numberOfDigits = countDigits(num);

    // Check for Armstrong number
    if(isArmstrong(num, numberOfDigits)) {
        cout << num << " is an armstrong number!" << endl;
    } else {
        cout << num << " is not an armstrong number!" << endl;
    }

    return 0;
}

// Function to count the number of digits in a number
int countDigits(int num) {
    int count = 0;

    while(num != 0) {
        num = num / 10;
        count++;
    }

    return count;
}

// Function to check whether a number is armstrong or not
bool isArmstrong(int num, int digits) {
    int numCopy = num;
    int digitsCopy = digits;
    int rem, sum = 0, product = 1;

    while(numCopy != 0) {
        rem = numCopy % 10;
        while(digitsCopy != 0) {
            product = product * rem;
            digitsCopy--;
        }
        sum = sum + product;
        numCopy = numCopy / 10;
        product = 1;
        digitsCopy = digits;
    }

    if(sum == num)
        return true;

    return false;
}
