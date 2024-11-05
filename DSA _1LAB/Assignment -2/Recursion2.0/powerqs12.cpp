#include <iostream>

using namespace std;

// Function to calculate the power of a number recursively
double power(double base, int exponent) {

    if (exponent == 0) {
        return 1;
    }

    // Recursive call to calculate power
    double result = power(base, exponent - 1);

    // Multiply the base with the result of the previous call
    return base * result;
}

int main() {
    double base;
    int exponent;

    // Input base and exponent from user
    cout << "Enter the base: ";
    cin >> base;
    cout << "Enter the exponent: ";
    cin >> exponent;

    // Calculate the power using recursion
    double result = power(base, exponent);

    // Output the result
    cout << "Result: " << result << endl;

    return 0;
}
