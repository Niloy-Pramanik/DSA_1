#include<iostream>
using namespace std;

const int MAX_VERTICES = 26;


void DFS(int graph[][MAX_VERTICES], bool visited[], int no_vertex, int start, int target) {
    visited[start] = true;

    // If the current vertex is the target, print "Yes"
    if (start == target) {
        cout << "Yes" << endl;
        return;
    }

    // Recursively visit all adjacent vertices of the current vertex
    for (int i = 0; i < no_vertex; ++i) {
        if (graph[start][i] == 1 && !visited[i]) {
            DFS(graph, visited, no_vertex, i, target);
        }
    }
}

int main() {
    char vertex[26];
    
    // Initialize vertices from A to Z
    for(int i = 0; i < 26; i++) {
        vertex[i] = 'A' + i;
    }
    
    // Display the vertices
    for(int i = 0; i < 26; i++) {
        cout << vertex[i] << " ";
    }
    cout << "\nEnter Number of Vertices: ";
    int no_vertex;
    cin >> no_vertex;
    
    int graph[MAX_VERTICES][MAX_VERTICES];
    
    for (int i = 0; i < no_vertex; i++) {
        for(int j = 0; j < no_vertex; j++) {
            graph[i][j] = 0;
        }
    }

    // Input edges
    for (int i = 0; i < no_vertex; i++) {
        for(int j = i + 1; j < no_vertex; j++) {
            cout << vertex[i] << " - " << vertex[j] << ": ";
            cin >> graph[i][j];
            
        
            if(graph[i][j] == 1)
                graph[j][i] = 1;
        }
    }

    // Display the adjacency matrix of the graph
    cout << "Adjacency Matrix:" << endl;
    for (int i = 0; i < no_vertex; i++) {
        for(int j = 0; j < no_vertex; j++) {
            cout << graph[i][j] << " ";
        }
        cout << endl;
    }

    // Input the vertex to start the search from
    char start_vertex;
    cout << "Enter the start vertex: ";
    cin >> start_vertex;

    int start_index = start_vertex - 'A';

    bool visited[MAX_VERTICES] = {false};

    DFS(graph, visited, no_vertex, start_index, start_index);


    if (!visited[start_index]) {
        cout << "No" << endl;
    }

    return 0;
}
