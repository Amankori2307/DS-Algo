/*
    Graphs Representation:
        - Adjacency Matrix
        - Adjacency List
*/ 

#include <iostream>
#include <vector>
using namespace std;

#define vi vector<int>
#define vvi vector<vi>
#define rep(i, start, end) for(int i=start; i<end; i++)

const int N = 1e5+2, MOD = 1e9+7;
vvi adj(N);

// Check if ther is an edge present between two nodes
bool isEdge(vvi adjm, int a, int b){
    return adjm[a][b];
}

void printAdjacencyMatrix(vvi adjm){
    rep(i, 1, adjm.size()){
        rep(j, 1, adjm.size()){
           cout << adjm[i][j] << " ";
        }
        cout << endl;
    }
}

void adjacencyMatrix(){
    int n, m;
    cin >> n >> m;
    vvi adjm(n+1, vi(n+1, 0));
    
    rep(i, 0, n){
        int a, b;
        cin >> a >> b;
        adjm[a][b] = 1;
        adjm[b][a] = 1;
    }

    printAdjacencyMatrix(adjm);

    cout << isEdge(adjm, 3, 2) << endl;
    cout << isEdge(adjm, 1, 3) << endl;
}

void printAdjacencyList(vvi adj, int n){
    rep(i, 1, n+1){
        cout << i << " -> ";
        for(auto el:adj[i]){
            cout << el << " ";
        }
        cout << endl;
    }
}

void adjacencyList(){
    int n, m;
    cin >> n >> m;
    rep(i, 0, m){
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    } 
    printAdjacencyList(adj, n);
}

int main(){
    // adjacencyMatrix();
    adjacencyList();
    return 0;
}