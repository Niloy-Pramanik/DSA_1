// #include<iostream>
// using namespace std;

// int main(){
//     float n;
//     float avg=0;
//     float sum=0;
//     cout<<"Enter the float number: ";
//     cin>>n;
//     float arr[n];
//     cout<<"Enter the array: ";
//     for(float i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(float i=0;i<n;i++){
//         sum+=arr[i];
//         avg=sum/arr[i];
    

//     }
//     cout<<"Average number is: "<<avg<<endl;
//     return 0;


// }

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     float avg=0;
//     float sum=0;
//     cout<<"Enter the number of elements in the array: ";
//     cin>>n;
//     float arr[n];
//     cout<<"Enter "<< n <<" numbers: ";
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//         sum+=arr[i];
//     }
//     avg = sum / n;
//     cout<<"Average number is: "<<avg<<endl;
//     return 0;
// }


#include<iostream>
using namespace std;

int main(){
    int n;
    float sum=0;
    float avg=0;
    cout<<"Enter the number: ";
    cin>>n;
    float arr[n];
    cout<<"Enter the number of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    avg=sum/n;
    cout<<"Average number is: "<<avg<<endl;
    return 0;

}
