#include<iostream>
//#include<stdlib>
#define MAX 4
int stack_arr[MAX];
int top=-1;

using namespace std;

int isFull(){
    if(top==MAX-1){
        return 1;

    }else{
        return 0;
    }
}
int isEmpty(){
    if(top==-1){
        return 1;
    }else{
        return 0;
    }
}
void push(int data){
    if(isFull()){
        cout<<"Stack is overflow";
        return;
    }
    top=top+1;
    stack_arr[top]=data;
}

int pop(){
    int value;
    if(isEmpty()){
        cout<<"Stack is underflow";
        exit(1);
        
    }
    value=stack_arr[top];
    top--;
    return value;
    
}
int peek(){
    if(isEmpty()){
        cout<<"Stack underflow"<<endl;
        exit(1);
    }
    return stack_arr[top];
}
void print(){
    if(top==-1){
        cout<<"Underflow"<<endl;
        return;
    }
    for(int i=top;i>=0;i--){
        cout<<stack_arr[i]<<" ";
    }
    cout<<endl;
}



int main(){
    int choice,data;
    while(true){
        cout<<"\n";
        cout<<"1. Push\n";
        cout<<"2. Pop\n";
        cout<<"3. Print the top element\n";
        cout<<"4. Print all the element of the stack\n";
        cout<<"5. Quit\n";
        cin>>choice;
   

       switch (choice) {
            case 1:
                cout << "Enter the element to be pushed: ";
                cin >> data;
                push(data);
                break;
            case 2:
                data=pop();
                cout<<"Deleted element is: "<<data;
                break;
            case 3:
                cout<<"The topmost element of the stack is: "<<peek();
                break;
            case 4:
                print();
                break;
            case 5:

            exit(1);
                cout << "Exiting program. Goodbye!" << endl;
                return 0;
            default:
                cout << "Wrong choice. Please enter a valid option." << endl;
        }
    }

    return 0;
}

   