#include "bits/stdc++.h"
using namespace std;
/*
    WAVE SORT
    for i=1 to n-1
        if arr[i] > arr[i-1]
            swap(arr[i], arr[i-1])

        if arr[i] > arr[i+1] && i <= n-2
            swap(arr[i], arr[i+1])

        i+=2
*/ 

void waveSort(int arr[], int n){
    int i=1;
    while(i<n){
        if(arr[i] > arr[i-1]){
            swap(arr[i], arr[i-1]);
        }

        if(arr[i] > arr[i+1] && i <= n-2) {
            swap(arr[i], arr[i+1]);
        }
        i += 2;
    }
}

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    waveSort(arr, n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}