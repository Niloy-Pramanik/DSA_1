// #include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Function to perform insertion sort
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; ++i) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

// Function to read integers from file and load them into an array
int* input(const string& in2.txt, int& size) {
    ifstream inFile(in2.txt);
    if (!inFile) {
        cerr << "Error: Unable to open file for reading!" << endl;
        exit(1);
    }

    inFile >> size;

    int* arr = new int[size];
    for (int i = 0; i < size; ++i) {
        inFile >> arr[i];
    }

    inFile.close();

    return arr;
}

// Function to perform linear search and return the index if found, -1 otherwise
int lin_search(int arr[], int size, int key) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1;
}

// Function to display search result
void show(int index) {
    if (index != -1) {
        cout << "Key found at index: " << index << endl;
    } else {
        cout << "Key not found!" << endl;
    }
}

int main() {
    const string inFile = "in.txt";
    const string outFile = "out.txt";
    const int n = 50000;

    // Seed random number generator
    srand(time(nullptr));

    // Generate 50000 random integer numbers in the range -250 to 249
    ofstream outStream(inFile);
    if (!outStream) {
        cout << "Error: Unable to open file for writing!" << endl;
        return 1;
    }
    outStream << n << endl;
    for (int i = 0; i < n; ++i) {
        outStream << rand() % 500 - 250 << endl;
    }
    outStream.close();

    // Read integers from "in.txt" and perform insertion sort, then write to "out.txt"
    int* arr = input(inFile, n);
    insertionSort(arr, n);

    ofstream out(outFile);
    if (!out) {
        cerr << "Error: Unable to open file for writing!" << endl;
        return 1;
    }
    out << n << endl;
    for (int i = 0; i < n; ++i) {
        out << arr[i] << endl;
    }
    out.close();

    // Perform linear search on "out.txt"
    int key;
    cout << "Enter the key to search: ";
    cin >> key;

    int* sortedArr = input(outFile, n);
    int index = lin_search(sortedArr, n, key);
    show(index);

    // Free dynamically allocated memory
    delete[] arr;
    delete[] sortedArr;

    return 0;
}
