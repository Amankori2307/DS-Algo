/*
    Problem:  Detect cycle in undirected graph

    TEST CASES:
        TEST1:
            Input:  4 4
                    0 1
                    1 2
                    2 3
                    3 0
            Output: 1
        
        TEST2:
            Input:  4 3
                    0 1
                    1 2
                    2 3
            Output: 0
*/ 

#include<iostream>
#include<vector>

using namespace std;

vector<vector<int> > adj;
vector<bool> vis;

bool isCycle(int src, int parent){
    vis[src] = true;

    for(int i=0; i<adj[src].size(); i++){
        int el = adj[src][i];
        if(el != parent){
            if(vis[el]) return true;
            else if(isCycle(el, src)) return true;
        }
    }
    return false;
}

int main(){
    int n, m;
    cin >> n >> m;
    adj = vector<vector<int> >(n);
    vis = vector<bool>(n, false);

    for(int i=0; i<m; i++){
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    bool cycle = false;
    for(int i=0; i<n; i++){
        if(!vis[i] && isCycle(i, -1)){
            cycle = true;
        }
    }

    cout << cycle << endl;
    return 0;
}
