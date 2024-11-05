// #include<iostream>
// using namespace std;

// class node{
//     public:
//     int data;
//     node* next;
//     node* prev;

//     node(int val){
//         data= val;
//         next= NULL;
//         prev= NULL;

//     }

// };
// void insertAHead(node* &head,int val){
//     node* n=new node(val);
//     n->next=head;
//     if(head !=NULL){
//             head->prev=n;

//     }



//     head=n;
// }

// void insertAtTail(node* &head,int val){

//     if(head==NULL){
//         insertAHead(head,val);
//         return;
//     }

//     node* n=new node(val);
//     node* temp=head;

//     while(temp->next!= NULL){
//         temp=temp->next;
//     }
//     temp->next=n;
//     n->prev=temp;


// }
// void display(node* head){
//     node* temp=head;
//     while(temp!= NULL){
//         cout<<temp->data<<" ";
//         temp=temp->next;
        
//     }
//     cout<<endl;

// }
// int main(){
//     node* head= NULL;
//     insertAtTail(head,1);
//     insertAtTail(head,2);
//     insertAtTail(head,3);
//     insertAtTail(head,4);

//     display(head);
//     insertAHead(head,5);
//     insertAHead(head,6);
//     display(head);

//     return 0;
// }

#include<iostream>
using namespace std;

struct node{
    struct node*prev;
    int data;
    struct node* next;

};

// int main(){
//     struct node *head= new node();
//     struct node *temp= new node();
//     head->prev=NULL;
//     head->data=10;
//     temp->data=20;
//     head->next=NULL;

//     cout<<head->data<<temp->data<<" ";

//     return 0;
// }

//aading node in a empty function

struct node* addToEmpty(struct node* head,int data){
    struct node* temp= new node();
    temp->prev=NULL;
    temp->data= data;
    temp->next=NULL;

    head=temp;

    return head;
}

int main(){
    struct node* head=NULL;
    head= addToEmpty(head,45);
    cout<<head->data<<" ";
    cout<<endl;

    return 0;

}
