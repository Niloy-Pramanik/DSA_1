#include <iostream>

using namespace std;

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    // Dynamically allocate memory for the array based on user input
    int* arr = new int[size];

    cout << "Enter " << size << " elements for the array:" << endl;
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    int count = 0;
    // Compare each element with all other elements in the array
    for (int i = 0; i < size - 1; ++i) {
        for (int j = i + 1; j < size; ++j) {
            if (arr[i] == arr[j]) {
                ++count;
                break; 
            }
        }
    }

    cout << "Total number of duplicate elements: " << count << endl;

  
    delete[] arr;

    return 0;
}
