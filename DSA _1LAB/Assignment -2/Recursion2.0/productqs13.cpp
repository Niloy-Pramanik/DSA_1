#include<iostream>

using namespace std;

int product(int num1, int num2){

    if(num1 == 0 || num2==0){
        return 0;
    }

    return num1 + product(num1, num2 -1);


}

int main(){

    int num1,num2;
    cout<<"Enter the first number: ";
    cin>>num1;
    cout<<"Enter the second number: ";
    cin>>num2;

    int result = product(num1, num2);

    cout<<"Product: "<< result << endl;

    return 0;
}
