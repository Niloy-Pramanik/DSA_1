// #include <stdio.h>

// int main() {
//     int size = 0;
//     char expression[1000];
//     char stack[1000], ch;

//     // Input the mathematical expression
//     printf("Enter mathematical expression: ");
//     scanf("%s", expression);

//     // Iterate through each character in the expression
//     for (int i = 0; expression[i]; ++i) {
//         ch = expression[i];

//         // Check for opening brackets
//         if (ch == '[' || ch == '(' || ch == '{') {
//             stack[size++] = ch;
//         }
//         // Check for closing brackets
//         else if (ch == ']' || ch == ')' || ch == '}') {
//             // Check if there's a corresponding opening bracket in the stack
//             if (size == 0) {
//                 printf("Closing bracket overflow\n");
//                 return 0;
//             } else {
//                 size--;
//                 // Check if the closing bracket matches the corresponding opening bracket
//                 if ((ch == ']' && stack[size] != '[') ||
//                     (ch == '}' && stack[size] != '{') ||
//                     (ch == ')' && stack[size] != '(')) {
//                     printf("Unmatched\n");
//                     return 0;
//                 }
//             }
//         }
//         // If the character is not a bracket, it's an invalid symbol
//         else {
//             printf("Invalid symbol\n");
//             return 0;
//         }
//     }

//     // Check if there are any remaining opening brackets in the stack
//     if (size == 0) {
//         printf("Balanced\n");
//     } else {
//         printf("Opening bracket overflow\n");
//     }

//     return 0;
// }


#include <iostream>
#include <string>
#include <stack>

int main() {
    int size = 0;
    char expression[1000];
    char stack[1000], ch;

    // Input the mathematical expression
    std::cout << "Enter mathematical expression: ";
    std::cin >> expression;

    // Iterate through each character in the expression
    for (int i = 0; expression[i]; ++i) {
        ch = expression[i];

        // Check for opening brackets
        if (ch == '[' || ch == '(' || ch == '{') {
            stack[size++] = ch;
        }
        // Check for closing brackets
        else if (ch == ']' || ch == ')' || ch == '}') {
            // Check if there's a corresponding opening bracket in the stack
            if (size == 0) {
                std::cout << "Closing bracket overflow\n";
                return 0;
            } else {
                size--;
                // Check if the closing bracket matches the corresponding opening bracket
                if ((ch == ']' && stack[size] != '[') ||
                    (ch == '}' && stack[size] != '{') ||
                    (ch == ')' && stack[size] != '(')) {
                    std::cout << "Unmatched\n";
                    return 0;
                }
            }
        }
        // If the character is not a bracket, it's an invalid symbol
        else {
            std::cout << "Invalid symbol\n";
            return 0;
        }
    }

    // Check if there are any remaining opening brackets in the stack
    if (size == 0) {
        std::cout << "Balanced\n";
    } else {
        std::cout << "Opening bracket overflow\n";
    }

    return 0;
}

