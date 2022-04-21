/*
    Problem: Minimum Spanning Tree

    SPANNIG TREE: Given an undirected and connected graph G(V,E) a spanning tree of the of the graph G is a tree
    that spans G(that is, it includes every vertex of G) and is a subgraph of G(every edge in the tree belongs to G) 

    MINIMUM SPANNING TREE is the spanning tree where the cost of spanning tree is minimum
    *There also can be many minimum spanning tree for a single graph


    Approach: 
        1. Sort the edges in increasing order according to their weights
        2. Iterate in the sorted edges
            - it inclusion of i'th edge leads to a cycle, then skip this edge.
            - else, include the edge in MST 
            
        
*/ 

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
const int N = 1e5+6;
vector<int> parent(N);
vector<int> sz(N);


void make_set(int v) {
    parent[v] = v;
    sz[v] = 1;
}

int find_set(int v){
    if(parent[v] == v) return v;
    return parent[v] = find_set(parent[v]);
}


void union_sets(int u, int v){
    int a = find_set(u);
    int b = find_set(v);
    if(a != b){
        if(a < b){
            swap(a,b);
        }
        parent[b] = a;
        sz[a] += sz[b];
    }
}



int main(){
    for(int i=0;i<N;  i++){
        make_set(i);
    }

    int n,m;
    cin >> n >> m;
    
    vector<vector<int> > edges;
    for(int i=0; i<m; i++){
        int u,v,w;
        vector<int> edge;
        cin >> u >> v >> w;
        edge.push_back(w);
        edge.push_back(u);
        edge.push_back(v);
        edges.push_back(edge);
    }

    sort(edges.begin(), edges.end());
    int size = 0;
    for(int i=0; i<m; i++){
        int u,v,w;
        w = edges[i][0];
        u = edges[i][1];
        v = edges[i][2];

        int x = find_set(u);
        int y = find_set(v);

        if(x!=y){
            cout << u << " " << v << endl;
            size += w;
            union_sets(u,v);
        }
    }
    cout << size << endl;
    return 0;
}