// #include<iostream>
// #include<unordered_map>
// #include<list>
// using namespace std;

// bool iscycledfs(int node,int parent,unordered_map<int ,bool>&visited,unordered_map<int,list<int>>&adj){
//     visited[node] = true;
//     for(auto neighbour :adj[node]){
//         if(!visited[neighbour]){
//             bool cycledetect = iscycledfs(neighbour,node,visited,adj);
//             if(cycledetect){
//                 return true;
//             }
//             else if(neighbour != parent){
//                 return true;
//             }

//         }
//     }
//     return false;
// }


// int main(){
//     int n;
//     // vector<vector<int>>adj(n);
//     adj[0] = {1,2};
//     adj[1] = {0,2};
//     adj[2] = {0,1,3};
//     adj[3] = {1,2};
//     adj[4] = {2,4};
//     adj[5] = {3};
//     if(iscycledfs(n,adj))
//     cout<<"cycle found";
//     else
//     cout<<"no cycle";

//     return 0;
// }



#include <iostream>
#include <unordered_map>
#include <list>
using namespace std;

bool isCycleDFS(int node, int parent, unordered_map<int, bool> &visited, unordered_map<int, list<int>> &adj) {
    visited[node] = true;

    for (auto neighbour : adj[node]) {
        if (!visited[neighbour]) {
            if (isCycleDFS(neighbour, node, visited, adj)) {
                return true;
            }
        }
        // If neighbour is visited and not parent → cycle exists
        else if (neighbour != parent) {
            return true;
        }
    }
    return false;
}

int main() {
    // Number of nodes
    int n = 6;

    // Graph as adjacency list
    unordered_map<int, list<int>> adj;
    adj[0] = {1, 2};
    adj[1] = {0, 2};
    adj[2] = {0, 1, 3};
    adj[3] = {2, 4};
    adj[4] = {3};
    adj[5] = { }; // isolated node

    unordered_map<int, bool> visited;
    bool cycleFound = false;

    // Handle disconnected graph
    for (int i = 0; i < n; i++) {
        if (!visited[i]) {
            if (isCycleDFS(i, -1, visited, adj)) {
                cycleFound = true;
                break;
            }
        }
    }

    if (cycleFound)
        cout << "Cycle found";
    else
        cout << "No cycle";

    return 0;
}
