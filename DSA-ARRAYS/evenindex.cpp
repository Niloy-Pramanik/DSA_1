#include<iostream>
using namespace std;

int main(){
    int n;
    int sum=0;
    cout<<"Enter the number: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];


    }
    for(int i=0;i<n;i+=2){
        sum+=arr[i];

    }
    cout<<"Sum of the even index: "<<sum<<endl;
    return 0;
}