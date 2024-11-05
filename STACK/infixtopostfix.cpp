// #include<iostream>
// #include<stdlib.h>
// #include<string.h>

// #define MAX 100

// char stack[MAX];
// char infix[MAX], postfix[MAX];
// int top= -1;
//  using namespace std;


//  void intoPost(){
//     int j=0;
//     char symbol,next;

//     for(int i=0;i<strlen(infix); i++){
//         symbol = infix[i];
//         switch (symbol)
//         {
//         case '(':
//         push(symbol);
//             break;
//         case ')':
//         while((next=pop()) != '(')
//         postfix[j++] =next;
//         break;
//         case '+':
//         case '-':
//         case '*':
//         case '/':
//         case '^':
//         while(!isEmpty() && precedence(stack[top]) >= precedence(symbol))
//         postfix[j++] = pop();
//         push(symbol);
//         break;

       
        
//         default:
//         postfix[j++] = symbol;
//             break;
//         }


//     }
//     while(!isEmpty()){
//         postfix[j++] = pop();
//         postfix[j] = '\0';
//     }
    
//  }


//  int precedence(char symbol){
//     switch (symbol)
//     {
//     case '^':
//     return 3;
//         break;
//     case '/':
//     case '*':
//     return 2;

//     case '+':
//     case '-':
//     return 1;

    
//     default:
//     return 0;
//         break;
//     }
//  }

//  int main(){
//     cout<<"Enter the infix expression: ";
//     gets(infix);
//     inToPost();

//     return 0;
//  }

#include<iostream>
#include<string.h>

#define MAX 100

char stack[MAX];
char infix[MAX], postfix[MAX];
int top = -1;

using namespace std;

void push(char symbol) {
    if (top == MAX - 1) {
        cout << "Stack Overflow\n";
        return;
    }
    top++;
    stack[top] = symbol;
}

char pop() {
    if (top == -1) {
        cout << "Stack Underflow\n";
        return -1;
    }
    char temp = stack[top];
    top--;
    return temp;
}

bool isEmpty() {
    return (top == -1);
}

int precedence(char symbol) {
    switch (symbol) {
        case '^':
            return 3;
        case '/':
        case '*':
            return 2;
        case '+':
        case '-':
            return 1;
        default:
            return 0;
    }
}

void intoPost() {
    int j = 0;
    char symbol, next;

    for (int i = 0; i < strlen(infix); i++) {
        symbol = infix[i];
        switch (symbol) {
            case '(':
                push(symbol);
                break;
            case ')':
                while ((next = pop()) != '(')
                    postfix[j++] = next;
                break;
            case '+':
            case '-':
            case '*':
            case '/':
            case '^':
                while (!isEmpty() && precedence(stack[top]) >= precedence(symbol))
                    postfix[j++] = pop();
                push(symbol);
                break;
            default:
                postfix[j++] = symbol;
                break;
        }
    }

    while (!isEmpty()) {
        postfix[j++] = pop();
    }
    postfix[j] = '\0';
}


int main() {
    cout << "Enter the infix expression: ";
    cin.getline(infix, MAX);
    intoPost();
    cout << "The postfix expression is: " << postfix << endl;

    return 0;
}
