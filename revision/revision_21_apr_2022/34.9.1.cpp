/*
    TEST CASES:
        Test 1:
            Input:  6 3
                    1 2
                    2 3
                    4 5
            Output: 1 3 2


        Test 2:
            Input:  5 3
                    0 1
                    1 2
                    3 4
            Output: 3 2
*/

#include<iostream>
#include<vector>
using namespace std;

vector<vector<int> > adj;
vector<bool> vis;

int get_comp(int src){
    vis[src] = true;
    int size = 1;

    for(int i=0; i<adj[src].size(); i++) {
        int el = adj[src][i];
        if(!vis[el]){
            size += get_comp(el);
        }
    }

    return size;
}

int main() {
    int n, m;
    cin >> n>> m;
    adj = vector<vector<int> >(n);
    vis = vector<bool>(n, false);

    for(int i=0; i<m; i++){
        int u,v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<int> comp;
    for(int i=0; i<n; i++){
        if(!vis[i]){
            comp.push_back(get_comp(i));
        }
    }

    for(int i=0; i<comp.size(); i++) {
        cout << comp[i] << " "; 
    }
    return 0;
}