#include <iostream>
#include <vector>
#include <queue>
using namespace std;

// Function to perform BFS traversal
void bfsTraversal(int V, vector<vector<int>>& adj, int start) {
    vector<bool> visited(V, false);  // visited array
    queue<int> q;

    visited[start] = true;
    q.push(start);

    cout << "BFS Traversal starting from node " << start << ": ";

    while (!q.empty()) {
        int node = q.front();
        q.pop();
        cout << node << " ";

        // Traverse all adjacent vertices
        for (int neighbor : adj[node]) {
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                q.push(neighbor);
            }
        }
    }
    cout << endl;
}

int main() {
    int V = 6; // number of vertices
    vector<vector<int>> adj(V);

    // Add edges (Undirected Graph)
    adj[0].push_back(1);
    adj[0].push_back(2);
    adj[1].push_back(0);
    adj[1].push_back(3);
    adj[1].push_back(4);
    adj[2].push_back(0);
    adj[2].push_back(5);
    adj[3].push_back(1);
    adj[4].push_back(1);
    adj[5].push_back(2);

    // Perform BFS Traversal from node 0
    bfsTraversal(V, adj, 0);

    return 0;
}
