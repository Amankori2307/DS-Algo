/*
    Sliding Window Challenges ||  Maximum sum subarray

    Problem: For a give array and integers K & X, find the maximum sum of 
             subarray of size K and having sum less than X

    Approach 1(Brute force):
        - Calculate sum of all possible subarrays O(n*K)
        
    Approach 2:
        - Calculate sum of first K elements
        - Initialize and with this sum
        - Iterate over the rest of arr
            - keep adding one element in sum and removing once form start
            - compare new sum with the ans in each iteration
*/ 


#include "bits/stdc++.h"
using namespace std;

int maxSum(int arr[], int k, int x,int n){
    if(k > n) return 0;
    int sum = 0, ans = 0;
    for(int i=0; i<k; i++){
        sum += arr[i];
    }

    if(sum < x){
        ans = sum;
    }

    for(int i=k; i<n; i++){
        sum = sum + arr[i] - arr[i-k];
        if(sum < x){
            ans = max(ans, sum);
        }
    }
    return ans;
}

int main(){

    int n, k, x;
    cin >> n >> k >> x;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    cout << maxSum(arr, k, x, n);
    return 0;
}

