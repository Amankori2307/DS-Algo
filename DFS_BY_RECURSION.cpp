#include <iostream>
#include <vector>
#include <stack>

using namespace std;

#define V 7

// DFS - Depth First Search
// Which Data Structure to use? Stack(LIFO).
// How to avoid cycle? Keep Track of visited nodes
// Application of DFS
//  - Topological Sort
//  - Schduling Problems
//  - Cycle Detection In Graph
void dfs_recursion(vector<int> graph[], vector<bool>& visited, int start){
    visited[start] = true;
    cout<<start<<" ";
    for(auto i = graph[start].begin(); i < graph[start].end(); i++){
        if(!visited[*i]){
            dfs_recursion(graph, visited, *i);
        }
    }
}
void addEdge(vector<int> graph[], int u, int v){
    graph[u].emplace_back(v);
}


void createGraph(vector<int> graph[]){
    addEdge(graph, 0, 1);
    addEdge(graph, 0, 3);
    addEdge(graph, 1, 2);
    addEdge(graph, 1, 0);
    addEdge(graph, 2, 1);
    addEdge(graph, 2, 3);
    addEdge(graph, 2, 6);
    addEdge(graph, 3, 0);
    addEdge(graph, 3, 2);
    addEdge(graph, 4, 3);
    addEdge(graph, 4, 5);
    addEdge(graph, 5, 4);
    addEdge(graph, 5, 6);
    addEdge(graph, 6, 5);
    addEdge(graph, 6, 2);
}


void printGraph(vector<int> graph[]){
    for(int i=0; i<V; i++){
        cout<<i;
        for(int j = 0; j<graph[i].size(); j++){
            cout<<" -> "<<graph[i][j];
        }
        cout<<"\n";
    }
}
int main(){
    vector<int> graph[V];
    createGraph(graph);
    // printGraph(graph);
    vector<bool> visited(graph->size(), false);

    dfs_recursion(graph, visited, 0);
    return 0;
}