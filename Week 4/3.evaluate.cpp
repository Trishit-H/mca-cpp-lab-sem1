// Write a C++ program to evaluate the arithmetic expression ((a + b / c * d - e)
// * (f - g)). Read the values a, b, c, d, e, f, g from the standard input device.

#include <iostream>

using namespace std;

int main() {
    double a, b, c, d, e, f, g;
    double result;

    cout << "Enter a, b, c and d (respectively): ";
    cin >> a >> b >> c >> d;

    cout << "Enter e, f and g (respectively): ";
    cin >> e >> f >> g;

    // Given expression: ((a + b) / c * d - e) * (f - g))
    // It will be evaluated as: ((a + (b / c * d) - e) * (f - g))
    result = ((a + (b / c * d) - e) * (f - g));

    cout << "Evaluated result: " << result << endl;

    return 0;
}
