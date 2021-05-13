#include <iostream>
#include <climits>
#include <alg.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    // Progrma To Find Min And Max In An Array
    int n;
    cin>>n;

    int arr[n];

    
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    int minNo = INT_MAX;
    int maxNo = INT_MIN;

    for(int i = 0; i<n; i++){
        maxNo = max(maxNo, arr[i]);
        minNo = min(minNo, arr[i]);
    }

    cout<<"MIN: "<<minNo<<", MAX: "<<maxNo<<endl;
}