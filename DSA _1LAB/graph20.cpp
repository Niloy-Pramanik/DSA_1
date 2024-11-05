// // #include <iostream>

// // using namespace std;

// // const int SIZE = 4;
// // char vertex[24];

// // void displayGraph(int graph[][SIZE]) {
// //     cout << "4x4 Graph:" << endl;
// //     for (int i = 0; i < SIZE; ++i) {
// //         for (int j = 0; j < SIZE; ++j) {
// //             cout << graph[i][j] << " ";
// //         }
// //         cout << endl;
// //     }
// // }

// // int main() {
    
// //     int graph[SIZE][SIZE] = {0};

// //     // Input edges from the user
// //     cout << "Enter edges for the graph (1 if edge exists, 0 if not):" << endl;
// //     for (int i = 0; i < SIZE; ++i) {
// //         for (int j = 0; j < SIZE; ++j) {
// //             cout << "Is there an edge from node " << i + 1 << " to node " << j + 1 << "? ";
// //             cin >> graph[i][j];
// //         }
// //     }

    
// //     displayGraph(graph);

// //     return 0;
// // } 
// #include <iostream>

// using namespace std;

// const int SIZE = 4;

// // Function to display the 4x4 graph
// void displayGraph(int graph[][SIZE]) {
//     cout << "4x4 Graph:" << endl;
//     char vertex = 'A';
//     for (int i = 0; i < SIZE; ++i) {
//         char start_vertex = vertex;
//         for (int j = 0; j < SIZE; ++j) {
//             cout << start_vertex << "->" << graph[i][j] << " ";
//             ++start_vertex;

//         }
//         ++vertex;
//         cout << endl;
//     }
// }

// int main() {

//     int graph[SIZE][SIZE] = {0};

//     char mapping[SIZE] = {'A', 'B', 'C', 'D'};

//     cout << "Enter edges for the graph (1 if edge exists, 0 if not):" << endl;
//     for (int i = 0; i < SIZE; ++i) {
//         char start_vertex = mapping[i];
//         for (int j = 0; j < SIZE; ++j) {
//             cout << "Is there an edge from node " << start_vertex << " : " << mapping[j] << "? ";
//             cin >> graph[i][j];
//         }
//     }

//     displayGraph(graph);

//     return 0;
// }

#include<iostream>
using namespace std;

int main() {
    char vertex[26];
    
    for(int i = 0; i < 26; i++) {
        vertex[i] = 'A' + i;
    }
    
    for(int i = 0; i < 26; i++) {
        cout << vertex[i] << " ";
    }
    cout << "\nEnter Number of Vertices: ";
    int no_vertex;
    cin >> no_vertex;
    
    int graph[no_vertex][no_vertex];
    
    for (int i = 0; i < no_vertex; i++) {
        for(int j = 0; j < no_vertex; j++) {
            graph[i][j] = 0;
        }
    }

    for (int i = 0; i < no_vertex; i++) {
        for(int j = i + 1; j < no_vertex; j++) {
            cout << vertex[i] << " - " << vertex[j] << ": ";
            cin >> graph[i][j];
            
            if(graph[i][j] == 1)
                graph[j][i] = 1;
        }
    }

    // Displaying the adjacency matrix of the graph
    for (int i = 0; i < no_vertex; i++) {
        for(int j = 0; j < no_vertex; j++) {
            cout << graph[i][j] << " ";
        }
        cout << endl;
    }


    // Displaying the adjacency list of the graph
    cout << "Adjacency List:" << endl;
    for(int i = 0; i < no_vertex; i++) {
        cout << vertex[i] << " ";
        for(int j = 0; j < no_vertex; j++) {
            if(graph[i][j] == 1) {
                cout << "->" << vertex[j];
            }
        }
        cout << endl;
    }

    // cout<<"Enter particular vertex: ";

    // char ch = 'B';
    // for(i=0;i<no_of_vertex;i++){
    //     if(ch== vertex[i]){
    //         cout<<vertex[i];
    //         for(i=0)
    //     }
    // }
    char ch;
    cin>>ch;
    cout<<"Input the vertex to start: ";
    int check = 0;
    for(int i=0;i<no_of_vertex;i++){
        for(int j=0;j<no_of_vertex;j++){
            if(graph[i][j]==1){
                check==1;
            }
        }
    }
    if(check==1){
        cout<<"Yes";
    }else{
        cout<<"NO";
    }


    return 0;
}

