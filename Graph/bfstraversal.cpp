#include <iostream>
#include <vector>
#include <list>
#include <unordered_map>
#include <queue>

using namespace std;

void prepareAdjList(unordered_map<int, list<int>> &adjList, vector<pair<int, int>> &edges) {
    for (int i = 0; i < edges.size(); i++) {
        int u = edges[i].first;
        int v = edges[i].second;

        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }
}

void BFS(unordered_map<int, list<int>> &adjList, unordered_map<int, bool> &visited, vector<int> &ans, int start) {
    queue<int> q;
    q.push(start);
    visited[start] = true;

    while (!q.empty()) {
        int u = q.front();
        q.pop();
        ans.push_back(u);

        for (int v : adjList[u]) {
            if (!visited[v]) {
                q.push(v);
                visited[v] = true;
            }
        }
    }
}

void BFSTraversal(int vertex, vector<pair<int, int>> &edges) {
    unordered_map<int, list<int>> adjList;
    vector<int> ans;
    unordered_map<int, bool> visited;

    prepareAdjList(adjList, edges);

    for (int i = 0; i < vertex; i++) {
        if (!visited[i]) {
            BFS(adjList, visited, ans, i);
        }
    }

    // Output the BFS traversal
    cout << "BFS Traversal: ";
    for (int node : ans) {
        cout << node << " ";
    }
    cout << endl;
}

int main() {
    int vertices = 5;
    vector<pair<int, int>> edges = {{0, 1}, {0, 2}, {1, 3}, {2, 3}, {3, 4}};
    BFSTraversal(vertices, edges);
    return 0;
}
