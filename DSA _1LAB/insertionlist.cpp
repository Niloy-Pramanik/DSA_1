// #include<iostream>
// using namespace std;
// struct list{
//     int data;
//     struct list *next;
// };
// typedef struct list node; 
//  // press 1 to insert  //press 2 to delete //press 3 exit
//  node *temp,*temp1;
// void insertion(int item){
//     node *temp;
//     if(start==NULL){
//         start= new node();
//         start->data=item;
//         start->next=NULL;

//     }else if(item<=start->data){
//         temp=new node();
//         temp->data= item;
//         temp->next=start;
//         start=temp;


//     }else{
//         temp =start;
//         while(temp->next->data <= item){
//             temp= temp->next;
//         }
//         temp1= new node();
//         temp1->data=item;
//         temp1->next=temp->next;
//         temp->next=temp1;

//     }
    


// }
// void deletation(){

// }
// void display(){
//     node *temp= start;
//     while(temp !NULL)
// }
    

//     void menu(){
//         cout<<"1. Insert\n2. Delete\n3. Exit\n4";
//     }

// int main(){
//     do{
//         menu();
//         cout<<"Enter the choice: ";
//         cin>>choice;

//         if(choice==1){ 
//             cout<<"Enter item to insert: "; // //insertion logic
//             cin>>item;
//             insertion(item);
//             display();

                                               

//         }else if(choice==2){ // deletation 

//         }else{
//             i=0;


//     }while(i==1);
//      return 0;



// }

// }

#include<iostream>
using namespace std;

struct list {
    int data;
    struct list *next;
};

typedef struct list node;
node *start = NULL; // Initialize start pointer

void insertion(int item) {
    node *temp, *temp1;
    if(start == NULL) {
        start = new node();
        start->data = item;
        start->next = NULL;
    } else if(item <= start->data) {
        temp = new node();
        temp->data = item;
        temp->next = start;
        start = temp;
    } else {
        temp = start;
        while(temp->next != NULL && temp->next->data < item) {
            temp = temp->next;
        }
        temp1 = new node();
        temp1->data = item;
        temp1->next = temp->next;
        temp->next = temp1;
    }
}

void deletion(int item) {
    node *temp = start, *prev = NULL;
    while(temp != NULL && temp->data != item) {
        prev = temp;
        temp = temp->next;
    }
    if(temp == NULL) {
        cout << "Element not found." << endl;
        return;
    }
    if(prev == NULL) {
        start = temp->next;
    } else {
        prev->next = temp->next;
    }
    delete temp;
    cout << "Element deleted successfully." << endl;
}

void display() {
    node *temp = start;
    cout << "List: ";
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void menu() {
    cout << "1. Insert\n2. Delete\n3. Exit\n";
}

int main() {
    int choice, item;
    do {
        menu();
        cout << "Enter the choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "Enter item to insert: ";
                cin >> item;
                insertion(item);
                display();
                break;
            case 2:
                cout << "Enter item to delete: ";
                cin >> item;
                deletion(item);
                display();
                break;
            case 3:
                cout << "Exiting...";
                break;
            default:
                cout << "Invalid choice!" << endl;
        }
    } while(choice != 3);

    return 0;
}
