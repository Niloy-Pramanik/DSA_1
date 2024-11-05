#include<iostream>
using namespace std;

int main(){
    int n;
    
    cout<<"Enter the number: ";
    cin>>n;
    int arr1[n];
    int arr2[n];
    int sumArr[n];
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<n;i++){
        cin>>arr2[i];
    }
    for(int i=0;i<n;i++){
        sumArr[i]=arr1[i]+arr2[i];


    }
    cout<<"The sum of corresponding array: "<<endl;
    for(int i=0;i<n;i++){
        cout<<sumArr[i]<<" ";
    }
    cout<<endl;
    return 0;
    

    

    

}