/* 
    An Adjacency list is a collection of unordered
    lists used to represent a finite graph. Each 
    list describes the set of neighbors of a vertex 
    in the graph.
*/

#include <iostream>
#include <vector>
using namespace std;
#define V 5


void addEdge(vector<int> graph[V], int u, int v){
    graph[u].emplace_back(v);   
}

void addWeightEdge(vector<pair<int, int>> graph[V], int u, int v, int weight){
    graph[u].emplace_back(make_pair(v, weight));
}
int main(){
    vector<int> graph[V]; 

    addEdge(graph, 0,1);
    addEdge(graph, 0,4);
    addEdge(graph, 1,1);
    addEdge(graph, 1,2);
    addEdge(graph, 1,3);
    addEdge(graph, 1,4);
    addEdge(graph, 3,2);
    addEdge(graph, 3,4);

    for(int i=0; i<V; i++){
        cout << i;
        for(int j = 0; j<graph[i].size(); j++){
            cout<<" -> "<<graph[i][j];
        }
        cout<<"\n";
    }

    vector<pair<int, int>> graph2[V];

    addWeightEdge(graph2, 0,1, 1);
    addWeightEdge(graph2, 0,4,2);
    addWeightEdge(graph2, 1,1,3);
    addWeightEdge(graph2, 1,2, 4);
    addWeightEdge(graph2, 1,3, 4);
    addWeightEdge(graph2, 1,4, 5);
    addWeightEdge(graph2, 3,2, 5);
    addWeightEdge(graph2, 3,4, 0);

    for(int i=0; i<V; i++){
        cout<<i;
        for(int j=0; j<graph2[i].size(); j++){
            cout<<" -> ("<<graph2[i][j].first<<", "<<graph2[i][j].second<<")";
        }
        cout<<"\n";
    }
}
