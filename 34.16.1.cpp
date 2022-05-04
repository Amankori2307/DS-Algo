/*
   Problem: Bellman Ford Algorithm 

   Bell Man Fords Words On Directed Graph By Default, to make it work on undirected graph we need to input
   0 -> 1 and 1 -> 0 as to seperate edges
   ``
*/ 


#include<iostream>
#include<vector>
using namespace std;

struct Node{
    int u; 
    int v;
    int w;
    Node(int x, int y, int wht){
        u = x;
        v = y;
        w = wht;
    }
};
vector<Node> edges;
vector<int> dist;

int main(){
    int n, m;
    cin >> n >> m;
    dist = vector<int>(n, INT_MAX);
    for(int i=0; i<m; i++){
        int u, v, w;
        cin >> u >> v >> w;
        Node n = Node(u, v, w);
        edges.push_back(n);
    }


    int src;
    cin >> src;
    cout << src << endl;
    dist[src] = 0;
    for(int i=0; i<n-1; i++){
        cout <<"I: " <<i  << endl;
        for(auto e: edges){
            if(dist[e.u] != INT_MAX && dist[e.v] > dist[e.u]+e.w){
                dist[e.v] = dist[e.u] + e.w;
            }
        }
    }

    cout << "From:\tTo:\tDistance:" << endl;
    for(int i=0; i<n;  i++){
        cout << src << "\t" << i << "\t" << dist[i] << endl;
    }
    return 0;
}