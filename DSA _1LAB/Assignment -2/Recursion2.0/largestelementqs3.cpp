// #include <iostream>
// using namespace std;

// // Function to find the maximum element in an array recursively
// int findMax(int arr[], int start, int end) {
//     // Base case: if there is only one element in the array
//     if (start == end) {
//         return arr[start];
//     }
//     // Recursive case: find the maximum element in the rest of the array
//     int mid = (start + end) / 2;
//     int maxLeft = findMax(arr, start, mid);
//     int maxRight = findMax(arr, mid + 1, end);
//     // Compare the maximum of left and right subarrays
//     return maxLeft > maxRight ? maxLeft : maxRight;
// }

// int main() {
//     int arr[] = {5, 9, 3, 7, 2};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int maxElement = findMax(arr, 0, n - 1);
//     cout << "The largest element in the array is: " << maxElement << endl;
//     return 0;
// }

#include<iostream>

using namespace std;

int getmax(int arr[],int index){
    if(index==0){
        return arr[index];
    }
    int max = getmax(arr,index-1);
    if(max<arr[index])
    max = arr[index];

    return max; 

}

int main(){
    int arr[]= {10,15,5,6,11};
    int m = getmax(arr,4);
    cout<<"\nMaximum is: "<<m;
    return 0;
}
