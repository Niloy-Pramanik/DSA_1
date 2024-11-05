#include <stdio.h>

// Function to reverse the digits of a number recursively
int reverse(int num) {
    static int reversedNum = 0, remainder;

    // Base case
    if (num == 0)
        return 0;

    remainder = num % 10;
    reversedNum = reversedNum * 10 + remainder;
    reverse(num / 10);

    return reversedNum;
}

int main() {
    int num;

    // Input number from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Reverse the number using recursion
    int reversed = reverse(num);

    // Output the reversed number
    printf("Reversed number: %d\n", reversed);

    return 0;
}
