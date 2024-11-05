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
   
    vector<vector<int>> graph(4, vector<int>(4, 0));

    
    cout << "Enter edges for the graph (1 if edge exists, 0 if not):" << endl;
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            cout << "Is there an edge from node " << i + 1 << " to node " << j + 1 << "? ";
            cin >> graph[i][j];
        }
    }

    
    displayGraph(graph);

    return 0;
}
