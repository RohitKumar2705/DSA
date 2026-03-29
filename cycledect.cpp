#include<iostream>
#include<vector>
#include<queue>
using namespace std;

bool detectcyclebfs(int src,vector<vector<int>>&adj,vector<bool>&visited){
    queue<pair<int,int>>q;
    visited[src] = true;
    q.push({src , -1});
    while(!q.empty()){
        int node = q.front().first;
        int parent = q.front().second;
        q.pop();
        for(int neighbour:adj[node]){
            if(!visited[neighbour]){
                visited[neighbour] = true;
                q.push({neighbour,node});
            }
             else if(neighbour!= parent){
                return true;

        }
        }
    }
    return false;
}
bool hascycleundirected(int n,vector<vector<int>>&adj){
    vector<bool>visited(n,false);
    for(int i= 0;i<n;i++){
        if(!visited[i]){
            if(detectcyclebfs(i,adj,visited)) return true;

        }
    }
    return false;
}

int main(){
    int n;
    vector<vector<int>>adj(n);
    adj[0] = {1,2};
    adj[1] = {0,2};
    adj[2] = {0,1,3};
    adj[3] = {1,2};
    adj[4] = {2,4};
    adj[5] = {3};
    if(hascycleundirected(n,adj))
    cout<<"cycle found";
    else
    cout<<"no cycle";

    return 0;
}