// #include<iostream>
// using namespace std;

// struct list{
//     int data;
//     list *next;
// };

// typedef struct list node;

// int main(){
//     //  node *a , *b;

//     //  a=new node();
//     //  a->data=10;

//     //  b= new node();

//     //  b->data=20;

//     //  cout<<a->data<<b->data<<" ";

//     node *start,*temp;

//     start= new node();
//     start->data=10;

//     temp= new node();
//     temp->data=20;

//     start->next=temp;

//     temp=new node();
//     temp->data=30;
//     start->next->next=temp;

//     temp=new node();
//     temp->data=40;
//     start->next->next->next=temp;

//     temp=new node();
//     temp->data=50;
//     start->next->next->next->next= temp;

//     temp->next=NULL;

//     temp=start;

//     while(temp!=NULL){
//         cout<<temp->data<<endl;
//         temp=temp->next;
        
//     }
    


//      return 0;
    


// }
#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;

    Node(int data) : data(data), next(nullptr){}
};

typedef struct list node;

// void insertAtBeginning(Node*& head,int data){
//     Node* newNode= new Node(data);
//     newNode->next= head;
//     head= newNode;
// }

// void insertAtEnd(Node* & head,int data){
//     Node* newNode= new Node(data);

//     if(head== nullptr){
//         head= newNode;
//         return ;
//     }
//     Node* temp=head;
//     while(temp->next !=nullptr){
//         temp->next= newNode;
//     }
// }

// int main(){
//     Node* head= nullptr;

//     insertAtBeginning(head,5);
//     insertAtEnd(head,3);

//     insertAtEnd(head,7);
//     insertAtEnd(head,9);


//     Node* temp=head;
//     while(temp !=nullptr){
//         cout<<temp->data<<" ";
//         temp= temp->next;
//     }
//     return 0;
// }
#include <iostream>

void insertAtBeginning(Node*& head, int data) {
    Node* newNode = new Node(data);
    newNode->next = head;
    head = newNode;
}

void insertAtEnd(Node*& head, int data) {
    Node* newNode = new Node(data);

    if (head == nullptr) {
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = newNode;
}

void insertAfter(Node* prevNode, int data) {
    if (prevNode == nullptr) {
        std::cout << "The given previous node cannot be null.\n";
        return;
    }

    Node* newNode = new Node(data);
    newNode->next = prevNode->next;
    prevNode->next = newNode;
}

int main() {
    Node* head = nullptr;

    // Insert at the beginning
    insertAtBeginning(head, 5);
    insertAtBeginning(head, 3);
    insertAtBeginning(head, 1);

    // Insert at the end
    insertAtEnd(head, 7);
    insertAtEnd(head, 9);

    // Insert after a specific node
    Node* prevNode = head->next; // Insert after the first node (node with data 3)
    insertAfter(prevNode, 4);

    // Print the linked list
    Node* temp = head;
    while (temp != nullptr) {
        std::cout << temp->data << " ";
        temp = temp->next;
    }
    std::cout << std::endl;

    return 0;
}
