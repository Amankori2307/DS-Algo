/*
    Form number divisible by 3 || Sliding window protocol

    Number formed from subarray of size K, divisible by 3
    Problem: For a give array and an inteeger K, check if any subarray of size k exists in the array 
             such that elemantes in the subarray form a number divisible by 3.

    APPROACH 1: 
        - Compute the numbers formed by all possible subarrays of size K. Check for their divisibility with 3

    FACT 1: A number is divisible by 3 if and only if the sum of its digits is dibisible by 3
    FACT 2:
        - If you having n numbers let's suppose n1, n2, n3......
        - And if you want to make a number with all n numbers divisible by three so for that condition sum all numbers should be divisible by three
    Approach 2:
        - sum of initial K elements from the array
        - Use sliding window technique and one by one, start subtracting elements from the end & adding from end
        - check if sum is divisible by 3 or not 
*/ 


#include "bits/stdc++.h"
using namespace std;

void formNumberDivisibleBy3(int arr[], int n, int k){
    int sum = 0, end = 0;
    bool found = false;

    for(;end<k; end++){
        sum += arr[end];
    }


    if(sum%3 == 0) found = true;

    for(; end<n; end++){
        if(found) break;

        sum = sum - arr[end-k] + arr[end];
        end++;
        if(sum%3 == 0){
            found = true;
            break;
        }
    }

    if(!found) {
        cout << "Not Found" << endl;
    }
    else {
        for(int i=end-k; i<end; i++){
            cout << arr[i] << " ";
        }
        cout<<endl;
    }
}

int main() {
    int n, k;
    cin >> n >> k;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    formNumberDivisibleBy3(arr, n, k);
    return 0;
}

