/*
    Problem: Detect cycle in undirected graph using DSU

    TEST CASES: 
        TEST1:
            Input:  4 4
                    0 1
                    1 2
                    2 3
                    3 0
            Output: 1

        TEST1:
            Input:  4 4
                    0 1
                    1 2
                    2 3
            Output: 0`
*/ 


#include<iostream>
#include<vector>

using namespace std;

const int N = 1e5+6;
vector<int> parent(N);
vector<int> sz(N);

void make_set(int v){
    parent[v] = v;
    sz[v] = 1;
}

int find_set(int v){
    if(parent[v] == v) 
        return v;
    return parent[v] = find_set(parent[v]);
}

void union_sets(int u, int v){
    int a = find_set(u);
    int b = find_set(v);
    if(a!=b){
        if(a < b) {
            swap(a, b);
        }
        parent[b] = a;
        sz[a] += sz[b];
    }
}
int main() {
    for(int i=0; i<N; i++){
        make_set(i);
    }
    int n,m;
    cin >> n >> m;
    vector<vector<int> > edges;
    for(int i=0; i<m; i++){
        int u, v; 
        cin >> u >> v;
        vector<int> edge;
        edge.push_back(u);
        edge.push_back(v);
        edges.push_back(edge);
    }

    bool cycle = false;
    for(int i=0; i<m; i++){
        vector<int> edge = edges[i];
        int x = find_set(edge[0]);
        int y = find_set(edge[1]);
        if(x == y){
            cycle = true;
            break;
        }
        union_sets(edge[0], edge[1]);
    }

    cout << cycle << endl;

    return 0;
}