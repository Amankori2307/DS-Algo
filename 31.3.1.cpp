/*
    Program: Heap STL

    push -> O(Log N)
    pop -> O(Log N)
    top -> O(1)
    size -> O(1)

    Library: #include<queue>

    Max Heap: priority_queue<int, vector<int>>
    Min Heap: priority_queue<int, vector<int>, greater<int>>
*/ 


#include<iostream>
#include<vector>
#include<queue>
using namespace std;


// For faster coding define macros
// #define int long long
#define vi vector<int>
#define pii pair<int, int>
#define vii vector<pii>
#define rep(i,a,b) for(i=a; i<b; i++)
#define ff first
#define ss second
#define setBits(x) builtin_popcount(x)



signed main() {
    priority_queue<int, vd> pq; // max heap
    pq.push(5);
    pq.push(4);
    pq.push(9);
    pq.push(10);
    cout << pq.top() << endl;


    priority_queue<int, vd, greater<int>> pq2; // min heap
    pq2.push(10);
    pq2.push(11);
    pq2.push(9);
    pq2.push(8);
    cout << pq2.top() << endl;

    return 0;
}
