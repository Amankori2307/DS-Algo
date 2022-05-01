/*
    TOPOLOGICAL SORT
    A Topological ordedering is an ordering of the nodes in a directed graph where for 
    each directed edge from Node A to Node B, node A appears before node B in the ordering.


    Note:- 
    1. Toplogocal ordering are NOT unique.
    2. Not Every Graph has topological sort!


    Directed Cyclic graph cannot have a topological sort.
    Only directed acyclic graph(DAG) have a valid Topological sort.

    INDEGREE: The nubmer of inward coming directed edges on vertex in a directed graph

    We can use topological sort to detect cycle, because cyclic graph can't have topological sort

    APPROACH
        Calclated indegree || Use queue 

    TESTS:
        TEST1:

*/ 

#include<iostream>
#include<vector>
#include<queue>
using namespace std;

vector<vector<int>> adj;
queue<int> q;
vector<int> indeg;

int main(){
    int n, m;
    cin >> n >> m;
    adj = vector<vector<int>>(n);
    indeg = vector<int>(n, 0);

    for(int i=0; i<m; i++){
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        indeg[v]++;
    }


    for(int i=0; i<n; i++){
        if(indeg[i] == 0)
            q.push(i);
    }

    while(!q.empty()){
        int node = q.front();
        q.pop();
        cout << node << " ";

        for(auto childNode: adj[node]){
            indeg[childNode]--;
            if(indeg[childNode] == 0){
                q.push(childNode);
            }
        }
    }
    return 0;
}