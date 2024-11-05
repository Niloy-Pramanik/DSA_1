#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

Node* createNode(int data_val){
    Node* new_node=new_Node();
    new_node->data= data_val;
    new_node->next=nullptr;
    return new_node;
}

Node* pushNode(Node* head,int data_val){
    Node* new_node= createNode(data_val);
    new_node->next=head;
    return new_node;
}

void printNode(Node* head){
    while(head !=nullptr){
        cout<<head->data<<"->";
    }
    cout<<"NULL"<<endl;
}

void printMiddle(Node* head){
    Node* slow_ptr=head;
    Node* first_ptr=head;

    if(head !=nullptr){
        while(first_ptr !=nullptr && first_ptr->next !=nullptr){
            first_ptr= first_ptr->next->next;
            slow_ptr= slow_ptr->next;
        }
        cout<<"The middle element is "<<slow_ptr->data<<endl;
    }
}

int main(){
    Node* head=nullptr;
    for(int i=5;i>0;i--){
        head= pushNode(head,i);
        printNode(head);

        printMiddle(head);
    }
    return 0;
}

// #include <iostream>
// using namespace std;

// struct Node {
//     int data;
//     Node* next;
// };

// Node* createNode(int data_val) {
//     Node* new_node = new_Node();
//     new_node->data = data_val;
//     new_node->next = nullptr;
//     return new_node;
// }
// Given a singly linked list and a key, count the number of occurrences of the given key in the linked list. For example, if the given linked list is 1->2->1->2->1->3->1 and the given key is 1, then the output should be 4.
// Node* pushNode(Node* head, int data_val) {
//     Node* new_node = createNode(data_val);
//     new_node->next = head;
//     return new_node;
// }

// void printNode(Node* head) {
//     while (head != nullptr) {
//         cout << head->data << "->";
//         head = head->next;
//     }
//     cout << "NULL" << endl;
// }

// void printMiddle(Node* head) {
//     Node* slow_ptr = head;
//     Node* fast_ptr = head;

//     if (head != nullptr) {
//         while (fast_ptr != nullptr && fast_ptr->next != nullptr) {
//             fast_ptr = fast_ptr->next->next;
//             slow_ptr = slow_ptr->next;
//         }
//         cout << "The middle element is [" << slow_ptr->data << "]" << endl;
//     }
// }

// int main() {
//     Node* head = nullptr;
//     for (int i = 5; i > 0; i--) {
//         head = pushNode(head, i);
//         printNode(head);
//         printMiddle(head);
//     }
//     return 0;
// }
