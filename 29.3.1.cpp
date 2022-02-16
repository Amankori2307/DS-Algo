/*
    Painters Partition Problem

    n = length of n different boards
    m = no of painters available

    A painter paints 1 unit of board in 1 unit of time &
    each painter will paint consecutive boards. Find the minimum 
    time that will be required to paint all the boards.


    boards = [10, 20, 30, 40]
    n = 4
    m = 2

    Possible partitions
    [[10], [20, 30, 40]] (mimum amount of time rquired : 90)
    [[10, 20], [30, 40]] (mimum amount of time rquired : 70)
    [[10, 20, 30], [40]] (mimum amount of time rquired : 60)

    Approach:
        same as minimum page allocation problem
*/

#include "bits/stdc++.h"
#include<climits>
using namespace std;

bool isPossible(int arr[], int n, int m, int min){
    int paintersRequired = 1;
    int sum = 0;

    for(int i=0; i<n; i++){
        if(arr[i] > min){
            return false;
        }
        if(sum+arr[i] > min) {
            paintersRequired++;
            sum = arr[i];
             if(paintersRequired > m){
                 return false;
             }
        }else{
            sum += arr[i];
        }
    }
    return true;
}

int minimumTimeRequired(int arr[], int n, int m){
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }

    int start = 0, end = sum, ans = INT_MAX;
    while(start <= end){
        int mid = (start+end)/2;
        if(isPossible(arr, n, m, mid)){
            end = mid-1;
            ans = min(ans, mid);
        }else{
            start = mid+1;
        }
    }
    return ans;
}

int main(){
    int arr[] = {10, 20, 30, 40};
    int n = 4;
    int m = 2;
    cout << "Minimum time required: " << minimumTimeRequired(arr, n, m) << endl;

    
    int arr2[] = {30, 40, 50, 60};
    int n2 = 4;
    int m2 = 2;
    cout << "Minimum time required: " << minimumTimeRequired(arr2, n2, m2) << endl;
    return 0;
}