#include<iostream>
using namespace std;

struct node{
    struct node* prev;
    int data;
    struct node* next;
    
};
struct node*addToEmpty(struct node* head,int data){
    struct node* temp1=new node();
    temp1->prev=NULL;
    temp1->data=data;
    temp1->next= NULL;
    head=temp1;
    return head;
}
struct node* addAtBeg(struct node* head,int data){
    struct node* temp2=new node();
    temp2->prev=NULL;
    temp2->data=data;
    temp2->next=NULL;

    temp2->next=head;
    head->prev=temp2;
    head=temp2;
    return head;
}
struct node* addAtEnd(struct node* head,int data){
    struct node* temp,*tp;
    temp=new node(); 
    temp->prev=NULL;
    temp->data=data;
    temp->next=NULL;
    tp=head;
    while(tp->next !=NULL){
        tp=tp->next;
        tp->next= temp;
        temp->prev=tp;
        return head;
    }

};
struct node* addAfterPos(struct node*head,int data,int position){

    struct node* newP=NULL;
    struct node* temp= head;
    struct node* temp2=NULL;
    newP=addToEmpty(newP,data);

    while(position !=1){
          temp=temp->next;
    position--;
        
    }

    if(temp->next==NULL){
        temp->next=newP;
        newP->prev=temp;
    }
    else{
        temp2=temp->next;
        temp->next=newP;
        temp2->prev=newP;
        newP->next=temp2;
        newP->prev=temp;
    }
    return head;
  
};

int main(){
    struct node* head=NULL;
    struct node* ptr;
    int position=2;
    head=addToEmpty(head,45);
    head=addAtBeg(head,34);
    head= addAtEnd(head,9);
    head= addAfterPos(head,25,position);

    ptr=head;

    while(ptr != NULL){
        cout<<ptr->data;
        ptr= ptr->next;
    }
    cout<<endl;
    return 0;
}

// #include<iostream>
// using namespace std;

// struct node{
//     struct node* prev;
//     int data;
//     struct node* next;
// };

// struct node* addToEmpty(struct node* head, int data){
//     struct node* temp1 = new node();
//     temp1->prev = NULL;
//     temp1->data = data;
//     temp1->next = NULL;
//     head = temp1;
//     return head;
// }

// struct node* addAtBeg(struct node* head, int data){
//     struct node* temp2 = new node();
//     temp2->prev = NULL;
//     temp2->data = data;
//     temp2->next = NULL;

//     if (head == NULL) {
//         head = temp2;
//     } else {
//         temp2->next = head;
//         head->prev = temp2;
//         head = temp2;
//     }
//     return head;
// }

// int main(){
//     struct node* head = NULL;
//     struct node* ptr;
//     head = addToEmpty(head, 45);
//     head = addAtBeg(head, 34);
    
//     ptr = head; // Initialize ptr with head

//     while(ptr != NULL){
//         cout << ptr->data << " ";
//         ptr = ptr->next;
//     }
//     cout << endl;
//     return 0;
// }
