/*
    PROBLEM: Smallest sequence with sum k

    Subarray: Continuous block of elements
    Subsequence: Not necessarily continuous, but order should remain as in original array
    Note: Every subarray is subsequence but not vice versa

    PROBLEM STATEMENT: 
        - Possible subsequence which satisfy the condition that sum >= k

    APPROACH:
        - Keep a maxheap and insert all the elements
        - Keep popping the elemnents and keep adding them to a variable sum and maintail count
        - When sum >= k, then quote then answer(count)
*/ 

#include<iostream>
#include<queue>
#include<vector>
using namespace std;

int minSubSequenceWithSumK(int arr[], int n, int k){
    priority_queue<int> pq;
    for(int i=0; i<n; i++){
        pq.push(arr[i]);
    }

    int sum = 0, count = 0;
    bool exists = false;
    while(!pq.empty()){
        sum += pq.top();
        pq.pop();
        count++;
        if(sum >= k){
            exists = true;
            break;
        }
    }
    return exists ? count : -1;
}

int main() {
    int n, k; 
    cin >> n >> k;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    cout << minSubSequenceWithSumK(arr, n, k) << endl;
}