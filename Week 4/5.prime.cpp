// Write a C++ program to generate all the prime numbers between 1 and n, where
// n is a value supplied by the user.

#include <iostream>
#include <cmath>

using namespace std;

// Function prototype for checking a number is prime or not
int isPrime(int);

// Main function
int main() {
    int range;

    cout << "Enter a number for range: ";
    cin >> range;

    cout << "Prime numbers between 1 and " << range << " are:\n";

    // Loop through the range
    for(int i = 1; i <= range; i++) {
        if(isPrime(i)) {
            cout << i << " ";
        }
    }

    return 0;
}

// Function to check whether a number is prime or not
int isPrime(int num) {
    // Number less than 2 i.e., 0 and 1 are not prime
    if(num < 2) {
        return 0;
    }

    // 2 and 3 are primes
    if (num == 2 || num == 3) {
        return 1;
    }

    // Even numbers are not primes
    if (num % 2 == 0) {
        return 0;
    }

    // find square root using sqrt function from cmath library
    int sqrtNum = sqrt(num);

    // Loop starts from 3 as we are already returning 1 for 2 and 3
    // Goes till the square root of the number. As the factors repeat
    // when it crosses the square root of the number
    // Increments by 2 to skip even numbers as they are not primes
    for(int i = 3; i <= sqrtNum; i += 2) {
        if(num % i == 0) {
            return 0;
        }
    }

    return 1;
}
