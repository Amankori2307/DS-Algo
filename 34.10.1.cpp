/*
    Problem: Bipartite graph


    What is bipartite graph
    - Its vertices can be devided into two disjoint and inidependent sets U and V such that every edge
      connects a vertex in U to one in V.
    - The graph does not contain any odd length cycle
    - The graph is 2 colorable


    Pseudocode:
    -   Traverse the graph
    - if the current node is of red color paint its neighbours as blue.

    if you are able to color the graph, successfylly, then the graph is bipartite

    TESTS:
        TEST1:
            Input:  4 4
                    0 1
                    1 2
                    2 3
                    3 0
            Output: 1
        TEST2:
            Input:  3 3
                    0 1
                    1 2
                    2 0
            Output: 0
*/ 

#include<iostream>
#include<vector>
using namespace std;

vector<vector<int> > adj;
vector<bool> vis;
vector<int> col;
bool bipart = true;

void color(int u, int curr) {
    if(col[u] != -1 && col[u] != curr) {
        bipart = false;
        return;
    }
    col[u] = curr;
    if(vis[u]) return;
    vis[u] = true;

    for(int i=0; i<adj[u].size(); i++){
        int el = adj[u][i];
        color(el, curr xor 1);
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    adj = vector<vector<int> >(n);
    vis = vector<bool>(n, false);
    col = vector<int>(n, -1);

    for(int i=0; i<m; i++){
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    for(int i=0; i<n; i++){
        if(!vis[i]){
            color(i, 0);
        }
    }
    cout << bipart << endl;
    return 0;
}