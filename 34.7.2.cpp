/*
    How to detect cycle in an undirected graph



    TEST CASES:

    TEST 1: 
    3 3
    0 1
    1 2
    2 0

    Expected output: Cycle: 1


    TEST 2:
    4 3
    0 1
    1 2
    2 3

    Cycle: 0

*/ 



#include<iostream>
#include<vector>
using namespace std;

bool isCycle(int src, vector<vector<int> > &adj, vector<bool> visited, int parent){
    visited[src] = true;
    for(int j=0; j<adj[src].size(); j++){
        int i = adj[src][j];
        if(i!=parent){
            if(visited[i]){
                return true;
            }
            if(!visited[i] && isCycle(i, adj, visited, src)){
                return true;
            }
        }
    }
    return false;
}

int main() {
    int n,m; cin >> n >> m;
    vector<vector<int> > adj(n);
    for(int i=0;i<m; i++){
        int u, v; cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    bool cycle = false;
    vector<bool> visited(n, false);
    for(int i=0; i<n; i++){
        if(!visited[i] && isCycle(i, adj, visited, -1)){
            cycle = true;
        }
    }
    cout << "Cycle: " << cycle;
    return 0;
}