/*
    DFS
*/

#include<iostream>
#include<vector>
#include<stack>
using namespace std;

const int N = 1e5+2;
vector<bool> v(N);
vector<int> adj[N];

void DFS(int node){
    v[node] = true;
    vector<int> :: iterator it;
    for(it=adj[node].begin(); it!=adj[node].end(); it++){
        if(v[*it] != true){
            DFS(*it);
        }
    }    
    cout << node << " ";
}


void printAdjMat(int n){
    for(int i=1; i<=n; i++){
        cout << i << " -> ";
        vector<int> :: iterator it;
        for(it = adj[i].begin(); it!=adj[i].end(); it++){
            cout << *it << " ";
        }
        cout << endl;
    }

}

int main(){
    int n, m;
    cin >> n >> m;
    int x, y;
    for(int i=0; i<m; i++){
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    printAdjMat(m);
    DFS(1);
    return 0;
}


