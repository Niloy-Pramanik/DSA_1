#include <iostream>

using namespace std;

void copyArray(int arr1[], int arr2[], int size) {
    for (int i = 0; i < size; ++i) {
        arr2[i] = arr1[i];
    }
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

  
    int arr1[size];
    cout << "Enter " << size << " elements for the source array:" << endl;
    for (int i = 0; i < size; ++i) {
        cin >> arr1[i];
    }

    int arr2[size];

   
    copyArray(arr1, arr2, size);

    cout << "Copied array:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << arr2[i] << " ";
    }
    cout << endl;

    return 0;
}
