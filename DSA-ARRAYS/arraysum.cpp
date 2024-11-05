#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int sum=0;
    int arr[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];

    }
    cout<<"Sum of the array is: ";
    for(int i=0;i<n;++i){
        sum+=arr[i];
        
    }
    cout<<sum<<endl;
    return 0;
}
// }
// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter the number of elements in the array: ";
//     cin >> n; // Input the number of elements
//     int sum=0;
//     int arr[n];
//     cout<<"Enter "<< n <<" integers:"<< endl; // Prompt user to enter integers
//     for(int i=0;i<n;++i){
//         cin>>arr[i]; // Input integers into the array
//     }
//     cout<<"Sum of the array is: ";
//     for(int i=0;i<n;++i){
//         sum+=arr[i]; // Calculate sum of the array
//     }
//     cout<<sum<<endl; // Print the sum
//     return 0;
// }
