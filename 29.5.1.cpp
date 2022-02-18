/*
    FIND THE PEAK ELEMENT || Binary Search Challenge 5

    Proble Statement: For a given array, find the peak element in the arrat
           Peak element is one which is greater than both, left and right 
           neighbours of itself

    Corner Cases:
        - Use binary search analyze indices from 1 to n-1
        - Compute mid and for each mid check if arr[mid] is a peak element
        - if mid is not a peak element and arr[mid-1] is greater then the arr[mid] then
          then left subarray must contain a peak element that is why we should call findPeak for left subarray
        - if mid is not a peak element and arr[mid+11] is greater then the arr[mid] then
          then right subarray must contain a peak element that is why we should call findPeak for rught subarray
    
*/


#include "bits/stdc++.h"
using namespace std;

int findPeak(int arr[], int l, int r){
    if ( l >= r ) {
        return r;
    }

    int mid = l + (r-l)/2;
 
    if ( arr[mid] >= arr[mid-1] && arr[mid] >= arr[mid+1]){
        return mid;
    }
    else if(arr[mid - 1] > arr[mid]) {
        return findPeak(arr, l, mid-1);
    } else if(arr[mid + 1] > arr[mid]){
        return findPeak(arr, mid+1, r);
    }

    return -1;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    cout << findPeak(arr, 0, n-1) << endl;
    return 0;
}