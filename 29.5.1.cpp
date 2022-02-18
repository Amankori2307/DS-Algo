/*
    FIND THE PEAK ELEMENT || Binary Search Challenge 5

    Proble Statement: For a given array, find the peak element in the arrat
           Peak element is one which is greater than both, left and right 
           neighbours of itself

    Corner Cases:
        - If input array is sorted in strictly increasing order, the last element is always a peak element. For example, 50 is peak element in {10, 20, 30, 40, 50}.
        - If the input array is sorted in strictly decreasing order, the first element is always a peak element. 100 is the peak element in {100, 80, 60, 50, 20}.
        - If all elements of input array are same, every element is a peak element. 

    Approach
        - Create two variables, l and r, initialize l = 0 and r = n-1
        - Iterate the steps below till l <= r, lowerbound is less than the upperbound
        - Check if the mid value or index mid = (l+r)/2, is the peak element or not, if yes then print the element and terminate.
        - Else if the element on the left side of the middle element is greater then check for peak element on the left side, i.e. update r = mid – 1
        - Else if the element on the right side of the middle element is greater then check for peak element on the right side, i.e. update l = mid + 1
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