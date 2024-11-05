#include <iostream>
#include <climits>
using namespace std;

int main() {

    int n;
    cout<<"Enter number of elements: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the array of elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int largest = INT_MIN; 
    int secondLargest = INT_MIN; 

    // Find the largest element in the array
    for (int i= 0; i<n; ++i) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    if (secondLargest != INT_MIN) {
        cout << "The second largest element in the array is: " << secondLargest << endl;
    } else {
        cout << "There is no second largest element in the array." << endl;
    }

    return 0;
}
