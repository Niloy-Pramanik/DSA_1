// #include <iostream>
// #include <unordered_set>

// using namespace std;

// void printUnique(int arr[], int size) {
//     //unordered_set<int> uniqueElements;
//     cout << "Unique elements in the array: ";
//     for (int i = 0; i < size; ++i) {
//         if (uniqueElements.find(arr[i]) == uniqueElements.end()) {
//             uniqueElements.insert(arr[i]);
//             cout << arr[i] << " ";
//         }
//     }
//     cout << endl;
// }

// int main() {
//     int size;
//     cout << "Enter the size of the array: ";
//     cin >> size;

//     int arr[size];
//     cout << "Enter " << size << " elements for the array:" << endl;
//     for (int i = 0; i < size; ++i) {
//         cin >> arr[i];
//     }

//     printUnique(arr, size);

//     return 0;
// }

// // #include <iostream>
// // #include <unordered_set>
// // #include <set>

// // using namespace std;

// // int main() {
// //     int n;

// //     cout << "Enter the number of elements in the array: ";
// //     cin >> n;

// //     if (n <= 0) {
// //         cout << "Invalid array size. Please enter a positive integer." << endl;
// //         return 1;
// //     }

// //     int arr[n];

// //     cout << "Enter the elements of the array:" << endl;
// //     for (int i = 0; i < n; ++i) {
// //         cin >> arr[i];
// //     }

// //     // Choose the appropriate collection based on preference and performance considerations:

// //     // **unordered_set for faster performance** (better for large arrays):
// //     unordered_set<int> unique_elements;
// //     for (int i = 0; i < n; ++i) {
// //         unique_elements.insert(arr[i]);
// //     }

// //     // **set for preserving original order** (better for smaller arrays or maintaining order):
// //     // set<int> unique_elements;
// //     // for (int i = 0; i < n; ++i) {
// //     //     unique_elements.insert(arr[i]);
// //     // }

// //     // Print the unique elements:
// //     cout << "Unique elements in the array:" << endl;
// //     for (const auto& element : unique_elements) {
// //         cout << element << " ";
// //     }
// //     cout << endl;

// //     return 0;
// // }
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Unique elements in the array are: ";

    // Loop through each element in the array
    for (int i = 0; i < n; ++i) {
        bool isUnique = true;

        // Check if the current element is unique
        for (int j = 0; j < i; ++j) {
            if (arr[i] == arr[j]) {
                isUnique = false;
                break;
            }
        }

        // If the current element is unique, print it
        if (isUnique) {
            cout << arr[i] << " ";
        }
    }

    cout << endl;

    return 0;
}
