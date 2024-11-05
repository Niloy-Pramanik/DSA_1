#include<iostream>
using namespace std;

int main(){
    int n;
    int sum=0;
    cout<<"Enter the number: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the number of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            sum+=arr[i];
        }
    }
    cout<<"Even number sum is: "<<sum<<endl;

    return 0;

}