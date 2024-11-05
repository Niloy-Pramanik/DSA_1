// #include <iostream>
// using namespace std;

// int main(){
//     int n,t;
//     cin>>n;
//     int arr[n];
    
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(int i=1;i<n;i++){
//         for(int j=2;j<n;j++){
//             t=arr[j];
//             i=j-1;

    
//         }
//         while((i>=1) && (arr[i]>t)){
//             arr[i+1]= arr[i];
//             i--;

//         }
//         arr[i+1]=t;
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<endl;
//     }
//     return 0;
// }
#include <iostream>
using namespace std;

int main() {
    int n, t;
    cin >> n;
    int arr[n];
 
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Corrected outer loop: start from i = 1, iterate to n-1
    for (int i = 1; i < n; i++) {
        t = arr[i];  // Store the current element as the key
        int j = i - 1;  // Initialize j for the inner loop

        // Corrected inner loop condition: j >= 0
        while (j >= 0 && arr[j] > t) {
            arr[j + 1] = arr[j];  // Shift elements to the right
            j--;
        }

        arr[j + 1] = t;  // Insert the key at its correct position
    }

    // Print the sorted array
    cout<<"Sorted Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

