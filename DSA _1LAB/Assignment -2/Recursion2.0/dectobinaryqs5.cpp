#include <iostream>
using namespace std;

// Function to convert decimal to binary recursively
void decimalToBinary(int n) {
    // Base case: if the number is 0, there's nothing more to divide
    if (n == 0) {
        return;
    }
    
    // Recursive case: divide the number by 2 and call the function recursively
    decimalToBinary(n / 2);
    
    // After returning from the recursive calls, print the remainder (0 or 1)
    cout << n % 2;
}

int main() {
    int decimalNum;
    cout << "Enter a decimal number: ";
    cin >> decimalNum;
    
    cout << "Binary equivalent: ";
    if (decimalNum == 0) {
        cout << "0"; // Special case: decimal number is 0
    } else {
        decimalToBinary(decimalNum);
    }
    cout << endl;

    return 0;
}
