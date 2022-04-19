/*
    Problem: There are N friends    numbered from 0 - N-1. you have to choose 2 person such that they are noth related to 
    each other.
    You are given information in the form of M Pairs(X,Y), i.e there is an link between friends X and Y.
    Find out the number of ways in which 2 persons from different group can be chose.


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

int get_comp(int idx, vector<vector<int> > &adj, vector<bool> &visited) {
    if(visited[idx]) return 0;
    visited[idx] = true;
    int ans = 1;
    for(int i=0; i<adj[idx].size(); i++){
        int el = adj[idx][i];
        if(!visited[el]){
            ans += get_comp(el, adj, visited);
            visited[el] = true;
        }
    }
    return ans;
}

int main(){
    int n, m;
    cin >> n >> m;
    vector<vector<int> > adj(n);
    vector<bool> visited(n, false);
    vector<int> component;
    for(int i=0; i<m; i++){
        int u, v; 
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    for(int i=0; i<n; i++){
        if(!visited[i]){
            int size = get_comp(i, adj, visited);
            component.push_back(size);
        }
    }

    int ans = 0;
    for(int i=0; i<component.size(); i++){
        ans += component[i]*(n-component[i]); // Permutation and combination
    }

    cout << ans/2 << endl;
    return 0;
}