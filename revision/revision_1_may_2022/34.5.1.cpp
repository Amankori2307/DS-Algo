/*
    PROBLEM: BFS

    TEST:
        TEST1:
            Input:
                    4 4
                    0 1
                    1 2
                    2 3
                    1 3
            Output:
                    0 1 2 3
        TEST2:
            Input:
                   7 7
                    0 1
                    0 2
                    1 3
                    1 4
                    1 5
                    1 6
                    6 3
            Output:
                    0 1 2 6 3 5 4

*/ 


#include<iostream>
#include<vector>
#include<stack>
using namespace std;

vector<vector<int>> adj;
vector<bool> vis;

void dfs(int root){
    vis[root] = true;
    cout << root << " ";
    for(auto childNode: adj[root]){
        if(!vis[childNode]){
            dfs(childNode);
        }
    }
}

int main(){
    int n, m;
    cin >> n >> m;

    adj = vector<vector<int>>(n);
    vis = vector<bool>(n, false);


    for(int i=0 ;i<m ; i++){
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }


    dfs(0);
    return 0;
}