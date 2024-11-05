#include<iostream>
using namespace std;

int linearSearch(int arr[],int n,int key){
for(int i=0;i<n;i++){
    if(arr[i]==key){
        return i;
    }
       
    

}
 return -1;
}


int main(){
    int n;
    cout<<"Input number: ";
    cin>>n;
    int arr[n];
    cout<<"Input the array of 'n' number: ";
    for(int i=0;i<n;i++){
            cin>>arr[i];


    }
    int key;
    cout<<"Input the key: ";
    cin>>key;

    cout<<linearSearch(arr,n,key)<<" is Index"<<endl;

return 0;
}