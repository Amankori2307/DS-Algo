/*
    Problem: Cycle detection in directed graph

         0
        / \
       1   3
        \ /
         2

*/ 
#include <iostream>
#include <vector>
using namespace std;
bool isCycle(int src, vector<vector<int> > &adj, vector<bool> &visited, vector<int> &stack) {
    stack[src] = true;

    if(!visited[src]){
        visited[src] =  true;
        for(int i=0; i<adj[src].size(); i++){
            int el = adj[src][i];
            if(!visited[el] && isCycle(el, adj, visited, stack)){
                return true;
            }
            if(stack[el]){
                return true;
            }

        }
    }    
    stack[src] = false;
    return false;
}

int main() {
    int n,m; cin >> n >> m;
    vector<vector<int> > adj(n);
    for(int i=0; i<m; i++){
        int u, v; cin >> u >> v;
        adj[u].push_back(v);
    }
    bool cycle = false;
    vector<int> stack(n, 0);
    vector<bool> visited(n, 0);

    for(int i=0; i<n; i++) {
        // if(!visited[i])  cout << i << ", " << isCycle(i, adj, visited, stack) << endl;
        if(!visited[i] && isCycle(i, adj, visited, stack)){
            cycle = true;
            // break;
        }
    }
    cout << "Cycle: " << cycle;
    return 0;
}