

#include <iostream>
#include <fstream>
#include <random>
#include <ctime>

using namespace std;



void bubbleSort(int arr[], int n) {
    
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap elements
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    }


int main() {
    const int n = 500;

    // Seed random number generator for better randomness
    srand(time(0));

    // Create and open output file
    ofstream outFile("in.txt");
    if (!outFile.is_open()) {
        cout << "Error opening output file." << endl;
        return 1;
    }

    // Generate and write random numbers to file
    for (int i = 0; i < n; i++) {
        int num = rand() % 1000; // Generate numbers from 0 to 999 (inclusive)
        outFile<< num << endl;
    }

    outFile.close();

    // Read integers from the file into an array
    int arr[n];
    ifstream inFile("in.txt");
    if (!inFile.is_open()) {
        cout<< "Error opening input file." << endl;
        return 1;
    }

    for (int i = 0; i < n; i++) {
        inFile >> arr[i];
    }

    inFile.close();

    // Sort the array using bubble sort
    bubbleSort(arr, n);

    // Print the sorted array
    cout << "Sorted numbers:" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << endl;
    }

    return 0;
}

// #include <iostream>
// #include <fstream>
// #include <ctime>
// #include <stdlib.h>

// using namespace std;

// const int ARRAY_SIZE = 500;
// const int MAX_VALUE = 999;
// const string INPUT_FILE = "in.txt";
// const string OUTPUT_FILE = "out.txt";

// void swap(int& a, int& b) {
//     int temp = a;
//     a = b;
//     b = temp;
// }

// void bubbleSort(int arr[], int n) {
//     bool swapped;
//     for (int i = 0; i < n - 1; i++) {
//         swapped = false;
//         for (int j = 0; j < n - i - 1; j++) {
//             if (arr[j] > arr[j + 1]) {
//                 swap(arr[j], arr[j + 1]);
//                 swapped = true;
//             }
//         }
//         // Optimization: If no swaps occurred in an iteration, the array is already sorted
//         if (!swapped) {
//             break;
//         }
//     }
// }

// int main() {
//     // Seed random number generator for better randomness
//     srand(time(NULL));

//     int arr[ARRAY_SIZE];

//     // Generate random numbers and write to input file
//     ofstream inFile(INPUT_FILE);
//     if (!inFile.is_open()) {
//         cerr << "Error opening input file!" << endl;
//         return 1;
//     }
//     for (int i = 0; i < ARRAY_SIZE; i++) {
//         arr[i] = rand() % (MAX_VALUE + 1);
//         inFile << arr[i] << endl;
//     }
//     inFile.close();

//     // Read numbers from input file into array
//     ifstream outFile(OUTPUT_FILE);
//     if (!outFile.is_open()) {
//         cerr << "Error opening output file!" << endl;
//         return 1;
//     }
//     for (int i = 0; i < ARRAY_SIZE; i++) {
//         outFile >> arr[i];
//     }
//     outFile.close();

//     // Sort the array using bubble sort
//     bubbleSort(arr, ARRAY_SIZE);

//     // Write sorted numbers to output file
//     outFile.open(OUTPUT_FILE, ios::trunc); // Truncate existing content
//     if (!outFile.is_open()) {
//         cerr << "Error opening output file!" << endl;
//         return 1;
//     }
//     for (int i = 0; i < ARRAY_SIZE; i++) {
//         outFile << arr[i] << endl;
//     }
//     outFile.close();

//     cout << "Random numbers generated and sorted successfully!" << endl;
//     cout << "Input file: " << INPUT_FILE << endl;
//     cout << "Output file: " << OUTPUT_FILE << endl;

//     return 0;
// }

// #include <iostream>
// #include <fstream>
// #include <ctime>
// #include <stdlib.h>

// using namespace std;

// const int ARRAY_SIZE = 500;
// const int MAX_VALUE = 999;
// const string INPUT_FILE = "in.txt";
// const string OUTPUT_FILE = "out.txt";

// void swap(int& a, int& b) {
//     int temp = a;
//     a = b;
//     b = temp;
// }

// void bubbleSort(int arr[], int n) {
//     bool swapped;
//     for (int i = 0; i < n - 1; i++) {
//         swapped = false;
//         for (int j = 0; j < n - i - 1; j++) {
//             if (arr[j] > arr[j + 1]) {
//                 swap(arr[j], arr[j + 1]);
//                 swapped = true;
//             }
//         }
//         // Optimization: If no swaps occurred in an iteration, the array is already sorted
//         if (!swapped) {
//             break;
//         }
//     }
// }

// int main() {
//     // Seed random number generator for better randomness
//     srand(time(NULL));

//     int arr[ARRAY_SIZE];

//     // Generate random numbers and write to input file
//     ofstream inFile(INPUT_FILE);
//     if (!inFile.is_open()) {
//         cerr << "Error opening input file!" << endl;
//         return 1;
//     }
//     for (int i = 0; i < ARRAY_SIZE; i++) {
//         arr[i] = rand() % (MAX_VALUE + 1);
//         inFile << arr[i] << endl;
//     }
//     inFile.close();

//     // Read numbers from input file into array
//     ifstream outFile(OUTPUT_FILE);
//     if (!outFile.is_open()) {
//         cerr << "Error opening output file!" << endl;
//         return 1;
//     }
//     for (int i = 0; i < ARRAY_SIZE; i++) {
//         outFile >> arr[i];
//     }
//     outFile.close();

//     // Sort the array using bubble sort
//     bubbleSort(arr, ARRAY_SIZE);

//     // Write sorted numbers to output file
//     outFile.open(OUTPUT_FILE, ios::trunc); // Truncate existing content
//     if (!outFile.is_open()) {
//         cerr << "Error opening output file!" << endl;
//         return 1;
//     }
//     for (int i = 0; i < ARRAY_SIZE; i++) {
//         outFile << arr[i] << endl;
//     }
//     outFile.close();

//     cout << "Random numbers generated and sorted successfully!" << endl;
//     cout << "Input file: " << INPUT_FILE << endl;
//     cout << "Output file: " << OUTPUT_FILE << endl;

//     return 0;
// }
// #include <iostream>
// #include <fstream>
// #include <cstdlib>
// #include <ctime>

// using namespace std;

// // Function to swap two integers
// void swap(int &a, int &b) {
//     int temp = a;
//     a = b;
//     b = temp;
// }

// // Function to perform bubble sort
// void bubbleSort(int arr[], int n) {
//     for (int i = 0; i < n - 1; ++i) {
//         for (int j = 0; j < n - i - 1; ++j) {
//             if (arr[j] > arr[j + 1]) {
//                 // Swap arr[j] and arr[j+1]
//                 swap(arr[j], arr[j + 1]);
//             }
//         }
//     }
// }

// int main() {
//     // Seed the random number generator
//     srand(time(nullptr));

//     // Generate 500 random integer numbers in the range 0 to 999
//     const int SIZE = 500;
//     int numbers[SIZE];
//     for (int i = 0; i < SIZE; ++i) {
//         numbers[i] = rand() % 1000;
//     }

//     // Write the numbers to a file named "in.txt"
//     ofstream outFile("in.txt");
//     if (!outFile) {
//         cerr << "Error: Unable to open file for writing!" << endl;
//         return 1;
//     }
//     for (int i = 0; i < SIZE; ++i) {
//         outFile << numbers[i] << endl;
//     }
//     outFile.close();

//     // Read the numbers from the file
//     ifstream inFile("in.txt");
//     if (!inFile) {
//         cerr << "Error: Unable to open file for reading!" << endl;
//         return 1;
//     }
//     int num;
//     int index = 0;
//     while (inFile >> num && index < SIZE) {
//         numbers[index++] = num;
//     }
//     inFile.close();

//     // Sort the numbers using bubble sort
//     bubbleSort(numbers, SIZE);

//     // Write the sorted numbers back to the file
//     outFile.open("in.txt");
//     if (!outFile) {
//         cerr << "Error: Unable to open file for writing!" << endl;
//         return 1;
//     }
//     for (int i = 0; i < SIZE; ++i) {
//         outFile << numbers[i] << endl;
//     }
//     outFile.close();

//     cout << "Sorting completed successfully." << endl;

//     return 0;
// }
