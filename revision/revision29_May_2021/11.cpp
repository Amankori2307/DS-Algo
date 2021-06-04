/*
    Find the repeating element in the array of integers with minimum index, i.e., 
    an element that occurs more than once and whose index of the first occurrence is smallest.
     0 <= A[i] <100000 
*/ 

#include <iostream>
#include <climits>
using namespace std;

int repeatingElementWithSmallestIndex(int arr[], int n){
    int minIndex = INT_MAX;
    int const N = 1e5+2;
    int idx[N];
    for(int i=0; i<N; i++){
        idx[i] = -1;
    }
    for(int i=0; i<n; i++){
        int item = arr[i];
        if(idx[item] != -1){
            minIndex = min(idx[item], minIndex);
        }
        else{
            idx[item] = i;
        }
    }
    return minIndex;
}

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<repeatingElementWithSmallestIndex(arr, n)<<endl;
    return 0;
}