/*
    Cycle Detection
        - In Undirected Graph

    Cycle detection in a undirected graph

    Keep on traversing the graph
    If you find an edge pointing to an already visited node(except the parent node), a cycle is found.




*/
#include<iostream>
#include<vector>
using namespace std;

bool isCycle(int src, vector<vector<int>> &adj, vector<bool> visited, int parent){
    visited[src] = true;
    for(auto i : adj[src]){
        if(i != parent){
            if(visited[i]){
                return true;
            } else if(!visited[i] && isCycle(i, adj, visited, src)){
                return true;
            }
        }
    }
    return false;
}

int main() {
    int n, m; cin >> n >> m;
    vector<vector<int>> adj(n);

    for(int i=0; i<m; i++){
        int x, y; cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }


    bool cycle = false;
    vector<bool> isVisited(m, false);

    for(int i=0; i<n; i++){
        if(!isVisited[i] && isCycle(i, adj, isVisited, -1)){
            cycle = true;
        }
    }

    cout << cycle << endl;
}