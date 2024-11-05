#include<iostream>
#include<string>

using namespace std;


void reverseString(string &str, int start, int end){

    if(start >= end)
        return;

        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        reverseString(str, start +1,end -1);

    

}

int main(){
    string str;

    cout<<"Enter a string: ";
    getline(cin,str);

    reverseString(str, 0, str.length() -1);

    cout<<"Reversed String: "<<str <<endl;

    return 0;
}


