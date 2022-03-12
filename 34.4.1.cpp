/*
    BFS
*/ 

#include <iostream>
#include <vector>
#include <queue>
using namespace std;

const int N = 1e5+2;
vector<bool> v(N, false);
vector<int> adj[N];


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

    /*
                1
               / \
              2-\ \
             /|\ \ 3
            4 | \ \ \
              5  6 \ \
                    \ /
                     7 
    */             
    int n, m;
    cin >> n >> m;
    int x, y;
    for(int i=0; i<m ; i++){
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }  
 
    cout << endl;

    printAdjMat(n);
    queue<int> q;
    q.push(1);
    v[1] = true;

    while(!q.empty()){
        int node = q.front();
        q.pop();
        cout << node << " ";
  
        vector<int> :: iterator it;
        for(it=adj[node].begin(); it != adj[node].end(); it++){
            if(v[*it] != true){
                q.push(*it);
                v[*it] = true;
            }
        }

    }
    return 0;
} 