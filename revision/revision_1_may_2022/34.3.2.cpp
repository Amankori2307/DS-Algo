/*
    Problem: Adjecency List;

    TEST:
        TEST1:
            Input:  3 3
                    0 1
                    0 2
                    1 2
            Output: 0 1
                    0 2
                    1 0
                    1 2
                    2 0
                    2 1
*/ 

#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> adj;


int main(){
    int n, m;
    cin >> n >> m;
    adj = vector<vector<int>>(n);
    for(int i=0; i<m; i++){
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    for(int i=0; i<n; i++){
        vector<int> u = adj[i];
        for(auto v: u){
            cout << i << " " << v << endl;
        }
    }
    return 0;
}