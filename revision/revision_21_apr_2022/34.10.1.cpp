/*
    Problem: Bipartite graph


    What is bipartite graph
    - Its vertices can be devided into two disjoint and indiependent sets U and V such that every edge
      connects a vertex in U to one in V.
    - The graph does not contain any odd length cycle
    - The graph is 2 colorable


    Pseudocode:
    -  Traverse the graph
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
vector<int> color;

bool isBipartite(int src, int curr){
    if(color[src] != -1 && color[src] != curr)
        return false;

    color[src] = curr;
    for(int i=0; i<adj[src].size(); i++){
        int el = adj[src][i];
        int newCol = curr xor 1;
        if(color[el] == -1) return isBipartite(el, newCol);
        else if(color[el] != newCol) return false;
    }
    return true;
}

int main() {
    int n, m;
    cin >> n >> m;
    adj = vector<vector<int> >(n);
    color = vector<int>(n, -1);

    for(int i=0; i<m; i++){
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    bool ans = true;
    for(int i=0; i<n; i++){
        if(color[i] == -1 && !isBipartite(i, 0)) {
            ans = false;
        }
    }

    cout << ans << endl;
    return 0;
}