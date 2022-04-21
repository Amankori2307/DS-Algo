/*
    Problem: There are N friends numbered from 0 - N-1. you have to choose 2 person such that they are noth related to 
    each other.
    You are given information in the form of M Pairs(X,Y), i.e there is a link between friends X and Y.
    Find out the number of ways in which 2 persons from different group can be chosen.


    Idea:
        - Find the componenets and their size
        - At I'th componen, choose one person from it and the other person from the rest of the groups.
         
    TEST CASES:-
        TEST1:-
            Input:  4 2
                    0 1
                    2 3
            Output: 4

        TEST2:-
            Input:  6 3
                    0 1
                    2 3
                    4 5
            Output: 12

*/ 


#include<iostream>
#include<vector>

using namespace std;

vector<vector<int> > adj;
vector<bool> vis;


int get_comp(int src){
    vis[src] = true;
    int size = 1;
    
    for(int i = 0; i<adj[src].size(); i++){
        int el = adj[src][i];
        if(!vis[el]) size += get_comp(el);
    }

    return size;
}
int main() {
    int n, m;
    cin >> n >> m;
    adj = vector<vector<int> >(n);
    vis = vector<bool>(n, false);
    for(int i=0; i<m; i++){
        int u, v; 
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<int> comp;
    for(int i=0; i<n; i++){
        if(!vis[i]){
            comp.push_back(get_comp(i));
        }
    }

    int pairs = 0;
    for(int i=0; i<comp.size(); i++){
        pairs += comp[i] * (n-comp[i]);
    }

    cout << pairs/2 << endl;
    return 0;
}