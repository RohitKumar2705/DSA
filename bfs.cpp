//   it is the code of breadth first search 


#include<iostream>
#include<vector>
#include<unordered_map>
#include<set>
#include<queue>
using namespace std;

void prepareadjlist(unordered_map<int,set<int>> &adjlist, vector<pair<int,int>> &edges){
    for(int i=0; i<edges.size(); i++){
        int u = edges[i].first;
        int v = edges[i].second;
        adjlist[u].insert(v);
        adjlist[v].insert(u);  // undirected graph
    }
}

void printadj(unordered_map<int,set<int>> &adjlist){
    for(auto i: adjlist){
        cout << i.first << " -> ";
        for(auto j: i.second){
            cout << j << " ,";
        }
        cout << endl;
    }
}

void bfs(unordered_map<int,set<int>> &adjlist, unordered_map<int,bool> &visited, vector<int> &ans, int node){
    queue<int> q;
    q.push(node);
    visited[node] = true;

    while(!q.empty()){
        int frontnode = q.front();
        q.pop();
        ans.push_back(frontnode);

        for(auto i: adjlist[frontnode]){
            if(!visited[i]){
                q.push(i);
                visited[i] = true;
            }
        }
    }
}

vector<int> bfs(int vertex, vector<pair<int,int>> edges){
    unordered_map<int,set<int>> adjlist;
    vector<int> ans;
    unordered_map<int,bool> visited;

    // prepare adjacency list
    prepareadjlist(adjlist, edges);

    // BFS for all components
    for(int i=0; i<vertex; i++){
        if(!visited[i]){
            bfs(adjlist, visited, ans, i);
        }
    }
    return ans;
}

int main(){
    int v, e;
    cout << "Enter number of vertices and edges: ";
    cin >> v >> e;

    vector<pair<int,int>> edges;
    cout << "Enter edges:" << endl;
    for(int i=0; i<e; i++){
        int u, w;
        cin >> u >> w;
        edges.push_back({u,w});
    }

    vector<int> result = bfs(v, edges);

    cout << "BFS Traversal: ";
    for(int i: result){
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
