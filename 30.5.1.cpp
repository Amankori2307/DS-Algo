/*
    Maximum perfect no in length K | Sliding window challenge

    Problem: For a given array and an integer K, find the maximum perfect numbers in a subarray of size K.

    PERFECT NUMBERS: a number is a perfect number if it is equal to the sum of its proper
                     divisor(positive diviser) except for the number itself


    APPROACH 1: 
        - Generate all subarrays of size k & count number of perfect numbers
        - time complexity O(n*k)

    APPROACH 2:
        To optimize the above approach, convert the given array arr[ ] into a binary array where the ith element is 1 if it is a Perfect Number. Otherwise, the ith element is 0. Therefore, the problem reduces to finding the maximum sum subarray of size K in the binary array using the Sliding Window technique. Follow the steps below to solve the problem:

        1. Traverse the array and for each element of the array arr[], check if it is a Perfect Number or not.
        2. If arr[i] is a Perfect Number then convert arr[i] equal to 1. Otherwise, convert arr[i] equal to 0.
        3. To check if a number is a perfect number or not:
            - Initialize a variable sum to store the sum of divisors.
            - Traverse every number in the range [1, arr[i] – 1] and check if it is a divisor of arr[i] or not. Add all the divisors.
            - If the sum of all the divisors is equal to arr[i], then the number is a perfect number. Otherwise, the number is not a Perfect Number.
        4. Compute the sum of the first subarray of size K in the modified array.
        5. Using the sliding window technique, find the maximum sum of a subarray from all possible subarrays of size K.
*/ 


#include <iostream>
#include <cmath>
using namespace std;

bool isPerfectNumber(int n){
    int sum = 1;
    for(int i=2; i<sqrt(n); i++){
        if(n%i == 0){
            if(i == n/i){
                sum += i;
            } else {
                sum += i + n/i;
            }
        } 
    }
    return sum == n;
}

int maxPerfectNos(int arr[], int n, int k){
    for(int i = 0; i< n; i ++) {
        if(isPerfectNumber(arr[i])) {
            arr[i] = 1;
        } else {
            arr[i] = 0;
        }
    }

    int mx = 0, currSum = 0;
    for(int i=0; i<k; i++){
        currSum += arr[i];
    }
    mx = currSum;
    for(int i=k; i<n; i++){
        currSum = currSum + arr[i] - arr[i-k];
        mx = max(currSum, mx);
    }
    return mx;
}

int main(){
    int n, k;
    cin >> n >> k;
    int arr[n];
    for(int i =0; i<n; i++){
        cin >> arr[i];
    }
    cout << maxPerfectNos(arr, n, k);
    return 0;
}