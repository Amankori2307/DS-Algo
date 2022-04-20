/*
    Problem: Detect cycle in directed graph

    TEST CASES:
        TEST1:
            Input:  4 4
                    0 1
                    1 2
                    2 3
                    3 0
            Output: 1
        
        TEST2:
            Input:  4 4
                    0 1
                    1 2
                    2 3
                    0 3 
            Output: 0

*/ 

#include<iostream>
#include<vector>

using namespace std;

vector<vector<int> > adj;
vector<bool> vis;
vector<bool> stack;

bool isCycle(int src){
    if(stack[src]) return true;
    stack[src] = true;
    vis[src] = true;

    for(int i=0; i<adj[src].size(); i++){
        int el = adj[src][i];
        if(!vis[el] && isCycle(el)) return true;
        else if(stack[el]) return true;
    }
    stack[src] = false;
    return false;
}

int main() {
    int n, m;
    cin >> n >> m;
    adj = vector<vector<int> >(n);
    vis = vector<bool>(n, false);
    stack = vector<bool>(n, false);

    for(int i=0; i<m; i++){
        int u, v; 
        cin >> u >> v;
        adj[u].push_back(v);
    }

    int cycle = false;
    for(int i=0; i<n; i++){
        if(!vis[i] && isCycle(i)){
            cycle = true;
            break;
        }
    }
    cout << cycle << endl;
    return 0;
}

