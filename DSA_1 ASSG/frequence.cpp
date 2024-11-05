// #include <iostream>
// #include <unordered_map>

// using namespace std;

// void countFrequencies(int arr[], int n) {
//     unordered_map<int, int> frequencies;

//     for (int i = 0; i < n; i++) {
//         frequencies[arr[i]]++;
//     }

//     cout << "Element\tFrequency" << endl;
//     for (auto it : frequencies) {
//         cout << it.first << "\t" << it.second << endl;
//     }
// }

// int main() {
//     int arr[] = {10, 20, 20, 10, 10, 20, 5, 20};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     countFrequencies(arr, n);

//     return 0;
// }
#include <iostream>
#include <map>

using namespace std;

void countFrequencies(int arr[], int n) {
    map<int, int> frequencies;

    // Count the frequency of each element
    for (int i = 0; i < n; i++) {
        frequencies[arr[i]]++;
    }

    // Print the frequencies
    cout << "Element\tFrequency" << endl;
    for (auto it = frequencies.begin(); it != frequencies.end(); it++) {
        cout << it->first << "\t" << it->second << endl;
    }
}

int main() {
    int n;
    cout<<"Enter the number of Elements: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the number of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    

    
    countFrequencies(arr, n);

    return 0;
}
