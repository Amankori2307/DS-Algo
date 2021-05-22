#include <iostream>
#include <climits>
#include <alg.h>
using namespace std;


void findMinMax(int arr[], int n){
    int minNo = INT_MAX;
    int maxNo = INT_MIN;

    for(int i=0; i<n; i++){
        minNo = min(minNo, arr[i]);
        maxNo = max(maxNo, arr[i]);
    }

    cout<<minNo<<" "<<maxNo<<endl;
}

int main(){

    // Progrma To Find Min And Max In An Array
    int n;
    cin>>n;

    int arr[n];

    
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }

    findMinMax(arr, n);
}