// #include<iostream>
// using namespace std;

// struct list{
//     int data;
//     list *next,*back;
// };
// typedef struct list node;

// void display(node *start){

//     node *temp;
//     temp=start;

//     while(temp!=NULL){
//         cout<<temp->data;
//         temp= temp->next;
//     }
// }
// void reverseDisplay(node *start){
//     node *temp;
//     temp=start;
//     while(temp->next !=NULL){
//         temp=temp->next;
//     }
//     temp=start;
//     while(temp!=NULL){
//         cout<<temp->data;
//         temp=temp->back;
//     }
// }

// int main(){
//     int ans;
//     node *start,*temp,*prev;
//     start=NULL;
//      cout<<"Do you want add data?";
//         cin>>ans;

//         while(ans==1){

//             if(start==NULL){

//                 start= new node();
//                 cout<<"Enter data: ";
//                 cin>>start->data;
//                 start->next=NULL;
//                 prev=start;
//                 start->back=NULL;

//             }else{
//                 temp=new node();
//                 cout<<"Enter data: ";
//                 cin>>temp->data;
//                 prev->next=temp;
//                 temp->back=prev;
//                 temp->next=NULL;
//                 prev=temp;
                


                
//             }


//               cout<<"Do you want add data?";
//                cin>>ans;
            
       
//         }
//         display(start);
//         cout<<endl;
//         reverseDisplay(start);
      

//     return 0;


// }
// // Give me the c++ code in following problem ans solve them using linked list.

// // 1.find max and min number
// // 2.find odd and even number
// // 3.find sum of all number,
// // 4.search an element if found.

// #include <iostream>
// #include <fstream>
// #include <random>
// #include <ctime>

// using namespace std;

// void swap(int &a,int &b){
//     int temp=a;
//     a=b;
//     b=temp;
// }

// void BubbleSort(int arr[],int n){
//     for(int i=0;i<n-1;i++){
//         for(int j=0;j<ni-1;j++){
//             if(arr[j]>arr[j+1])
//         }
//     }
// }
#include <iostream>
#include <vector>

using namespace std;

// Function to display the 4x4 graph
void displayGraph(const vector<vector<int>>& graph) {
    cout << "4x4 Graph:" << endl;
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            cout << graph[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    // Initialize a 4x4 vector to store the graph
    vector<vector<int>> graph(4, vector<int>(4, 0));

    // Input edges from the user
    cout << "Enter edges for the graph (1 if edge exists, 0 if not):" << endl;
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            cout << "Is there an edge from node " << i + 1 << " to node " << j + 1 << "? ";
            cin >> graph[i][j];
        }
    }

    // Display the graph
    displayGraph(graph);

    return 0;
}
