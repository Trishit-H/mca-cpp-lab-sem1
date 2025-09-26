// Write a C++ program to find the roots of a quadratic equation.

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b, c;
    double discriminant, discriminantSquareRoot, root1, root2;
    double realPart, imaginaryPart;

    // Take the coefficients as input
    cout << "Enter the coefficients a, b and c respectively: ";
    cin >> a >> b >> c;

    // Calculate the discriminant
    // D = (b * b) - (4 * a * c)
    discriminant = (b * b) - (4.0 * a * c);

    discriminantSquareRoot = sqrt(discriminant);

    // If D > 0, then roots are real and distinct.
    // If D = 0, then roots are real and equal.
    // If D < 0, then roots are complex and imaginary.
    if (discriminant > 0.0) {
        root1 = (-b + discriminantSquareRoot) / (2.0 * a);
        root2 = (-b - discriminantSquareRoot) / (2.0 * a);
        cout << "Roots are real and distinct." << endl;
        cout << "Root1: " << root1 << endl;
        cout << "Root2: " << root2 << endl;
    } else if (discriminant == 0.0) {
        root1 = -b / (2.0 * a);
        cout << "Roots are real and equal." << endl;
        cout << "Root1 = Root2 = " << root1 << endl;
    } else if (discriminant < 0.0) {
        realPart = -b / (2.0 * a);
        imaginaryPart = sqrt(-discriminant) / (2.0 * a);
        cout << "Roots are complex and imaginary." << endl;
        cout << "Root1: " << realPart << " + " << imaginaryPart << "i" << endl;
        cout << "Root2: " << realPart << " - " << imaginaryPart << "i" << endl;
    }

    return 0;
}
