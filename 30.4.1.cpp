/*
    Subarray of size K with palindrome concatenation || Sliding Window Challenge

    Palindrome: words that are spelled the same form backward as well as forward
    e.g. NITIN, AMA

    Problem: For a given array of and an integer K, check if any subarray of size K exists
             in the array such that concatenation of elements form a palindrome


    APPROACH 1: 
        - Generate all subarray of size k Time complexity O(n^2)
        - Check if their concatenation forms palindrome O(m)
        - total time complexity O(n^3) 


    APPROACH 2:
        - Store concatenation of initial K elementes of array
        - Iterate over the array and start deleting elements from the start and adding
          to the end
        - At each step, check if concatenation is a palindrome
*/ 

#include "bits/stdc++.h"
#include <vector>
#include <cmath>
using namespace std;

bool isPalindrome(int n) {
    int temp = n, number = 0;
    while(temp > 0) {
        number = number*10 + temp%10;
        temp /= 10;
    }
    return number == n;
}

int findPalindromicSubarray(vector<int> arr, int k){
    int num = 0;
    for(int i = 0; i<k; i++){
        num = num * 10 + arr[i];
    }

    if(isPalindrome(num)){
        return 0;
    }

    for(int i=k; i<arr.size(); i++){
        num = (num % (int)pow(10, k-1))* 10 + arr[i];
        if(isPalindrome(num)){
            return i-k+1;
        }   
    }
    return -1;
}

int main() {
    int n, k;
    cin >>  n >> k;

    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int idx = findPalindromicSubarray(arr, k);
    if(idx != -1){
        for(int i=idx; i<idx+k; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    } else {
        cout << "Not Found";
    }
    return 0;
}