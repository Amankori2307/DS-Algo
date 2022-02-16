/*
    BST Challenge 1(Place elemets to maximise minimum distance)
    Problem: Given is an array with n elements that represents n positions along a straight line, Find K elements such
             that the minimum distance between any 2 elements is the maximum possible

    Approach:
        1. Sort the array
        2. Difine range  left = 1, right = last element of sorted array = arr[n-1]
        3. calc mid = (left + right)/2
        4. check if k elements with distance >= mid exists 
            - if yes - left = mid + 1;
            - if No - right - mid;
        repeat step 3 & 4 until, whilte(left < right)
*/

#include "bits/stdc++.h"
#include <algorithm>
using namespace std;

bool isFeasible(int mid, int arr[], int n, int k){
    int pos = arr[0], elements = 1;
    for(int i=1; i<n; i++){
        if((arr[i] - pos) >=     mid){
            pos = arr[i];
            elements++;
            if(elements == k) {
                return true;
            }
        }
    }
    return false;
}

int largestMinimumDistance(int arr[], int n, int k){
    sort(arr, arr+n);

    int left = 1, right = arr[n-1];
    int result = -1;

    while(left < right){
        int mid = (left+right)/2;
        if(isFeasible(mid, arr, n, k)){
            result = max(result, mid);
            left = mid + 1;
        }else{
            right = mid;
        }
    }
    return result;
}

int main() {
    int n, k;
    cin >> n >> k;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    cout << largestMinimumDistance(arr, n, k);
    return 0;
}