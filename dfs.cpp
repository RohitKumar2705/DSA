// #include<iostream>
// #include<unordered_map>
// #include<vector>
// #include<list>
// using namespace std;

// void dfs(int node,unordered_map<int,bool>&visited,unordered_map<int,list<int>>&adj,vector<int>&component){
//    component.push_back(node);
//    visited[node] = true;

//    for(auto i:adj[node]){
//     if(!visited[i]){
//         dfs(i,visited,adj,component);

//     }
//    }
// }
// vector<vector<int>> depthfirstsearch(int v,int e, vector<vector<int>>&edges){
//     unordered_map<int,list<int>>adj;
//     for(int i=0;i<edges.size();i++){
//         int u = edges[i][0];
//         int v = edges[i][1];

//         adj[u].push_back(v);
//         adj[v].push_back(u);

//     }
//     vector<vector<int>>ans;
//     unordered_map<int,bool>visited;
//     for(int i=0;i<v;i++){
//         if(!visited[i]){
//             vector<int>component;
//             dfs(i,visited,adj,component);
//             ans.push_back(component);
//         }
//     }
//     return ans;
// }
 

// int main(){
// int V = 5; // number of vertices
//     int E = 4; // number of edges

//     vector<vector<int>> edges = {
//         {0, 1}, {0, 2}, {1, 3}, {3, 4}
//     };

//     vector<vector<int>> result = dfs(v, e, edges);

//     cout << "DFS Traversal (Connected Components):\n";
//     for (auto component : result) {
//         for (auto node : component) {
//             cout << node << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }





#include <iostream>
#include <unordered_map>
#include <vector>
#include <list>
using namespace std;

// DFS function
void dfs(int node, unordered_map<int, bool> &visited, unordered_map<int, list<int>> &adj, vector<int> &component) {
    component.push_back(node);
    visited[node] = true;

    for (auto i : adj[node]) {
        if (!visited[i]) {
            dfs(i, visited, adj, component);
        }
    }
}

// Function to perform DFS for all components
vector<vector<int>> depthFirstSearch(int V, int E, vector<vector<int>> &edges) {
    unordered_map<int, list<int>> adj;

    // Create adjacency list
    for (int i = 0; i < edges.size(); i++) {
        int u = edges[i][0];
        int v = edges[i][1];

        adj[u].push_back(v);
        adj[v].push_back(u); // Undirected graph
    }

    vector<vector<int>> ans;
    unordered_map<int, bool> visited;

    // Handle disconnected components
    for (int i = 0; i < V; i++) {
        if (!visited[i]) {
            vector<int> component;
            dfs(i, visited, adj, component);
            ans.push_back(component);
        }
    }

    return ans;
}

int main() {
    int V = 5; // number of vertices
    int E = 4; // number of edges

    vector<vector<int>> edges = {
        {0, 1}, {0, 2}, {1, 3}, {3, 4}
    };

    vector<vector<int>> result = depthFirstSearch(V, E, edges);

    cout << "DFS Traversal (Connected Components):\n";
    for (auto component : result) {
        for (auto node : component) {
            cout << node << " ";
        }
        cout << endl;
    }

    return 0;
}
