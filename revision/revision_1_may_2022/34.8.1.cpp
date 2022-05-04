/*
    Problem: Cycle Detection In Directed Graph

    TEST:
        TEST1:
            Input:
                    3 3
                    0 1
                    1 2
                    2 0
            Output:
                    1
        TEST2:
            Input:
                    4 3
                    0 1
                    1 2
                    2 3
            Output:
                    0
        TEST3:
            Input:
                    5 5
                    0 1
                    1 2
                    2 3
                    3 4
                    4 0
            Output:
                    1
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
    }

    
}