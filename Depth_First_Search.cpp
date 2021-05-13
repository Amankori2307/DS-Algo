#include <iostream>
#include <vector>
#include <stack>

using namespace std;

#define V 7

// DFS - Depth First Search
// Which Data Structure to use? Stack(LIFO).
// How to avoid cycle? Keep Track of visited nodes
void dfs(vector<int> graph[], int start){
    stack<int> st;
    vector<bool> visited(graph->size(), false);

    st.push(start);
    visited[start] = true;

    while(!st.empty()){
        int v = st.top();
        cout<<v<<" ";
        st.pop();
        for(auto i = graph[v].begin(); i != graph[v].end(); i++){
            if(!visited[*i]){
                st.push(*i);
                visited[*i] = true;
            }
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
    dfs(graph, 0);
    return 0;
}