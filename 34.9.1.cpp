/*
    Problem: Conected component

    What is a connected component?
    Ans. A connected component is a subgraph in which any two vertices are connected to each other by paths, 
    and which is connected to no additional vertices in the subgraph

    Find the no of connected components and its size


    Test Cases:
    TEST1
    INPUT:          4 2
                    0 1
                    2 3

    Output: 2 2

    TEST2:
    INPUT:  5 3
            0 1
            1 2
            3 4
    
    Output: 3 2

*/


#include<iostream>
#include<vector>

using namespace std;

int get_comp(int idx, vector<vector<int> > &adj, vector<bool> &visited){
    if(visited[idx])
        return 0;

    visited[idx] = true;
    int ans = 1;
    for(int i=0; i<adj[idx].size(); i++){
        int el = adj[idx][i];
        if(!visited[el]){
            ans += get_comp(el, adj, visited);
            visited[el] = true;
        }
    }
    return ans;
}

int main() {
    int n, m; cin >> n >> m;
    vector<vector<int> > adj(n);
    vector<bool> visited(n, false);
    vector<int> component;

    for(int i=0; i<m; i++){
        int u,v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    for(int i=0; i<n; i++){
        if(!visited[i]){
            component.push_back(get_comp(i, adj, visited));
        }
    }

    for(int i=0; i<component.size(); i++){
        cout << component[i] << " ";
    }
    return 0;
}