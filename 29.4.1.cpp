/*
    Binary Search Challenge 4 || Search in sorted and rotated array

    We are given an ascending sorted array that has been rotated 
    from a pivot point (Unknown to us) and an element X, Search 
    for element X in the array with complexity less than that of 
    the linear search

    original array = [10, 20, 30, 40, 50]
    rotated array = [30, 40, 50, 10, 20]

    here, 50 is pivot point
    how to find pivot point??
    - arr[i] > arr[i+1], i<n;

    Approach
        1) Find middle point mid = (l + h)/2
        2) If key is present at middle point, return mid.
        3) Else If arr[l..mid] is sorted
            a) If key to be searched lies in range from arr[l]
            to arr[mid], recur for arr[l..mid].
            b) Else recur for arr[mid+1..h]
        4) Else (arr[mid+1..h] must be sorted)
            a) If key to be searched lies in range from arr[mid+1]
            to arr[h], recur for arr[mid+1..h].
            b) Else recur for arr[l..mid] 

        https://www.geeksforgeeks.org/search-an-element-in-a-sorted-and-pivoted-array/
*/


#include "bits/stdc++.h"
using namespace std;

int searchInRotatedArray(int arr[], int l, int h,  int key){
    if(l > h) return -1;

    int mid = (l+h)/2;
    if(arr[mid] == key) return mid;

    // if arr[l ... mid] is sorted
    if(arr[l] <= arr[mid]){
        // check if key lies int first half
        if(key >= arr[l] && key <= arr[mid]){
            return searchInRotatedArray(arr, l, mid-1, key);
        }
        // if it doesn't lie in the first half than check if it is there in the second half
        return searchInRotatedArray(arr, mid+1, h, key);
    }

    // If arr[l ... mid] is not sorted then arr[mid... h] must be sorted, because only one array can be unsorted because there is only one pivot point
    // check if it lies in the arr[mid ... h]
    if(key >= arr[mid] && key <= arr[h]){
        return searchInRotatedArray(arr, mid+1, h, key);
    }
     return searchInRotatedArray(arr, l, mid-1, key);
};

int main(){
    int arr[] = {30,40,50,10,20};
    int n = 5;


    cout << searchInRotatedArray(arr, 0, n-1, 10) << endl;
    cout << searchInRotatedArray(arr, 0, n-1, 20) << endl;
    cout << searchInRotatedArray(arr, 0, n-1, 30) << endl;
    cout << searchInRotatedArray(arr, 0, n-1, 40) << endl;
    cout << searchInRotatedArray(arr, 0, n-1, 50) << endl;

    return 0;
}


