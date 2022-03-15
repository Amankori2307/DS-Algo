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
        Calclated indegree || User queue 
*/ 

#include<iostream>
#include<vector>
#include<queue>
using namespace std;


int main(){
    int n, m; cin >> n >> m;
    vector<vector<int>> adj(n);
    vector<int> indeg(n, 0);

    for(int i=0; i<m; i++){
        int x, y; cin >> x >> y;
        adj[x].push_back(y);
        indeg[y]++;
    }

    queue<int> q;
    for(int i=0; i<n; i++){
        if(indeg[i] == 0){
            q.push(i);
        }
    }

    while(!q.empty()){
        int node = q.front();
        q.pop();
        cout << node << " ";

        vector<int> :: iterator it;
        for(it=adj[node].begin(); it!=adj[node].end(); it++){
            indeg[*it]--;
            if(indeg[*it] == 0){
                q.push(*it);
            }
        }
    }
    return 0;
}