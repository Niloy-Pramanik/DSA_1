#include <iostream>

using namespace std;

// Function to find the sum of digits of a number recursively
int sumOfDigits(int num) {
    if (num < 10) {
        return num; 
    }
    
    // Recursive call to sum the digits
    return num % 10 + sumOfDigits(num / 10);
}

int main() {
    int num;

    // Input number from user
    cout << "Enter a number: ";
    cin >> num;

    // Calculate the sum of digits using recursion
    int sum = sumOfDigits(num);

    // Output the sum of digits
    cout << "Sum of digits: " << sum << endl;

    return 0;
}
