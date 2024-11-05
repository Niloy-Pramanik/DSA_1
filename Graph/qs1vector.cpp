#include<iostream>


using namespace std;

void rotateString(string s,int N){
    for(int i=0; i<N; ++i){
        char first_char= s[0];
        s= s.substr(1) + first_char;
    }
    return s;
}

int main(){
    str string = "Z";
    int steps = 10;
    string result = rotateString(string, steps);
    cout<<result<<endl;

    return 0;

}
