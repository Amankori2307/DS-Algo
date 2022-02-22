/*

    Minimum Subarray Size || Sliding windwo protocol
    Problem: For a given array and an given integer X, find the minimum subarray size for which sum > X

    Approach 1: calc sum of all subarray and check the condition(Brute force approach)

    Approach 2:
        1. declare start, sum and ans variable
        2. Iterater over array & start adding elements to sum
        3. if(sum > x) increement start by 1

*/


#include "bits/stdc++.h"
using namespace std;

int minSubarraySize(int arr[], int n, int x){
    int sum = 0, minLength = n+1, start = 0, end =0;
    while(end < n ) {
        while(sum <= x && end < n) {
            sum += arr[end];
            end ++;
        }
        while( sum > x && start < x) {
            if(end - start < minLength) minLength = end - start;
            sum -= arr[start];
            start++;
        }
    }
    return minLength;
}

int main() {
    int n, x;
    cin >> n >> x;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    cout << minSubarraySize(arr, n, x);

    return 0;
}