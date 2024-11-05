#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Number: ";
    cin>>n;
    int arr[n];
    cout<<"enter the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Array in reverse order: ";
    for(int i=n-1;i>=0;--i){
        cout<<arr[i]<<" ";
    }
    return 0;
    
}