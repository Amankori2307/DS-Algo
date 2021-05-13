#include <iostream>
#include <vector>
#include <queue>
using namespace std;

#define V 7

void addEdge(vector<int> graph[], int u, int v){
    graph[u].emplace_back(v);
}

void createGraph(vector<int> graph[]){
    addEdge(graph, 0, 2);
    addEdge(graph, 0, 1);
    addEdge(graph, 1, 0);
    addEdge(graph, 1, 2);
    addEdge(graph, 2, 3);
    addEdge(graph, 2, 6);
    addEdge(graph, 2, 1);
    addEdge(graph, 3, 0);
    addEdge(graph, 3, 2);
    addEdge(graph, 4, 3);
    addEdge(graph, 4, 5);
    addEdge(graph, 5, 4);
    addEdge(graph, 5, 6);
    addEdge(graph, 6, 5);
    addEdge(graph, 6, 2);
}

// Linked in 1st level connection second level connection is 
// Implemented using BFS
void bfs(vector<int> graph[], int start){
    vector<bool> visited(graph->size(), false);
    queue<int> q;
    q.push(start);

    while(!q.empty()){
        int v = q.front();
        cout<<v<<" ";
        q.pop();
        for(auto i = graph[v].begin(); i != graph[v].end(); i++ ){
            if(!visited[*i]){
                q.push(*i);
                visited[*i] = true;
            }
        }
    }
}

void printGraph(vector<int> graph[]){
    for(int i = 0; i<V; i++){
        cout<<i;
        for(int j=0; j<graph[i].size(); j++){
            cout<<" -> "<<graph[i][j];
        }
        cout<<endl;
    }
}

int main(){
    vector<int> graph[V];
    createGraph(graph);
    printGraph(graph);

    // Performing BFS on graph
    bfs(graph, 0);
}