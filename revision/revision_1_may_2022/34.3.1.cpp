/*
    Problem: Adjecency Matrix;

    TEST:
        TEST1:
            Input:  3 3
                    0 1
                    0 2
                    1 2
            Output: 0 1 1
                    1 0 1
                    1 1 0
*/ 


#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    // int adj[n][n];
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<n; j++){
    //         adj[i][j] = 0;
    //     }
    // }

    vector<vector<int>> adj(n, vector<int>(n, 0));
    for(int i=0; i<n; i++){
        int u, v; 
        cin >> u >> v;
        adj[u][v] = 1;
        adj[v][u] = 1;
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << adj[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}