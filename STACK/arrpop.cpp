#include<iostream>
#define MAX 4
using namespace std;
int stack_arr[MAX];
int top= -1;

void push(int data){
    if(top== MAX-1){
        cout<<"Stack is Overflow"<<endl;
        return;
    }
    top++;
    stack_arr[top]=data;
}
int pop(){
    int value;
    if(top==-1){
        cout<<"Stack is underflow"<<endl;
        exit(1);
    }
    value=stack_arr[top];
    top--;
    return value;
}
void print(){
    if(top== -1){
        cout<<"Stack Underflow";
        return;
    }
    for(int i=top;i>=0;i--){
        cout<<stack_arr[i]<<" ";
        cout<<endl;
    }
}
int main(){
    int data;
    push(1);
    push(2);
    push(3);
    push(4);
    data=pop();
    //data=pop();
    print();

    return 0;
}

