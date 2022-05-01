/*
    Problem: Dijkstra's Algorithm
*/ 


#include <iostream>
#include <vector>
using namespace std;

vector<vector<pair<int, int>>> adj;
vector<int> dist;
vector<bool> mstSet;

void printDist(){
    // cout << "Dist: ";
    for(int i=0; i<dist.size(); i++){
        cout << i << ":" << dist[i] << "(" << mstSet[i] << "),\t";
    }
    cout << endl << endl;
}

void display(int src) {
    cout << "Vertex:\tDistance from source("<< src<<"):\n";
    for(int i = 0; i< dist.size(); i++){
        cout << i << "\t" << dist[i] << endl;
    }
}

int getMin(){
    int min = INT_MAX, minIdx;
    for(int i=0; i<dist.size(); i++){
        if(mstSet[i] == false && min >= dist[i]){
            min = dist[i];
            minIdx = i;
        }
    }
    printDist();
    // cout << "MinIdx: "<< minIdx << ", Weight: " << dist[minIdx] << endl;
    return minIdx;
}

void dijkstras(int source) {
    dist[source] = 0;
    for(int count = 0; count <adj.size()-1 ; count++){
        int u = getMin();
        mstSet[u] = true;
        // cout << "U: " << u  << ", Dist: " << dist[u] << ", Adjecent: ";
        for(auto it:adj[u]){
            int v = it.first;
            int w = it.second;
            // cout << v << "("<<w<<")"<<", ";
            int currDist = dist[u] + w;
            if(currDist < dist[v]){
                dist[v] = currDist;
            } 
        }
        // cout << endl;
    }

    display(source);
}

int main(){
    int n, m;
    cin >> n >> m;
    adj = vector<vector<pair<int,int>>>(n);
    dist = vector<int>(n, INT_MAX);
    mstSet = vector<bool>(n, false);
    for(int i=0; i<m; i++){
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    }
    int source;
    cin >> source;

    dijkstras(source);
    return 0;
}