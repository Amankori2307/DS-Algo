// 11. Find repeating element with minimum index


#include<iostream>
#include<climits>
using namespace std;

int findRepeatingEleWithMinInx(int arr[], int n){
    int N = 1e5+2;
    int idx[N];
    for(int i=0; i<N; i++){
        idx[i] = -1;
    }

    int minIdx = INT_MAX;
    for(int i=0; i<n; i++){
        int item = arr[i];
        if(idx[item] == -1){
            idx[item] = i;
        }else{
            minIdx = min(minIdx, idx[item]);
        }
    }
    return minIdx;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<findRepeatingEleWithMinInx(arr, n);
    return 0;
}

// 1 2 3 5 5 2, 1