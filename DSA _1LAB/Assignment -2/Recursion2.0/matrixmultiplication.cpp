#include <iostream>

using namespace std;

int main() {
    int first[10][10], second[10][10], result[10][10], r1, r2, c1, c2;

    cout << "Enter rows and columns for first matrix: ";
    cin >> r1 >> c1;

    cout << "Enter rows and columns for second matrix: ";
    cin >> r2 >> c2;

    while (c1 != r2) {
        cout << "Error!! Columns of first matrix not equal to rows of second matrix." << endl;
        cout << "Enter rows and columns for first matrix: ";
        cin >> r1 >> c1;

        cout << "Enter rows and columns for second matrix: ";
        cin >> r2 >> c2;
    }

    // First matrix input
    cout << "Enter elements of first matrix: " << endl;
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            cin >> first[i][j];
        }
    }

    // Second matrix input
    cout << "Enter elements of second matrix: " << endl;
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            cin >> second[i][j];
        }
    }

    // Multiplying matrices
    int sum;
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            sum = 0;
            for (int k = 0; k < c1; k++) {
                sum += first[i][k] * second[k][j];
            }
            result[i][j] = sum;
        }
    }

    // Printing first matrix
    cout << "First Matrix:" << endl;
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            cout << first[i][j] << " ";
        }
        cout << endl;
    }

    // Printing second matrix
    cout << "Second Matrix:" << endl;
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            cout << second[i][j] << " ";
        }
        cout << endl;
    }

    // Printing result matrix
    cout << "Result Matrix:" << endl;
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
