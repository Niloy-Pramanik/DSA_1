#include<iostream>
#include<stdlib.h>
#define MAX 4
using namespace std;

int stack_arr[MAX];
int top=-1;


void push(int data){
    if(top== MAX-1){
        cout<<"Overflow"<<endl;
          return;
       
    }else{
        cout<<"All good"<<endl;
       
    }
    top=top+1;
    stack_arr[top]=data;
}

int main(){
    push(1);
      push(2);
        push(3);
          push(4);
            push(5);
            push(6);

            return 0;

}