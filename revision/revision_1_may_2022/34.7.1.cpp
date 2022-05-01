/*
    Problem: Cycle Detection In Undirected Graph


*/ 

#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> adj;
vector<bool> vis;

bool isCyclicHelper(int src, int parent){
    vis[src] = true;
    for(auto childNode: adj[src]){
        if(parent != childNode){
            if(vis[childNode]) return true;
            return isCyclicHelper(childNode, src);
        }
    }
    return false;
}

bool isCyclic(){
    for(int i=0; i<adj.size(); i++){
        if(!vis[i]){
            if(isCyclicHelper(i, -1)) {
                return true;
            }
        }
    }
    return false;
}

int main(){
    int n, m;
    cin >> n >> m;

    adj = vector<vector<int>>(n);
    vis = vector<bool>(n);

    for(int i=0; i<n ;i++){
        int u, v; 
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    cout << isCyclic();

}