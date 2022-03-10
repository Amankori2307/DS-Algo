/*
    GREEDY || Maximum and Minimum difference

    Problem: You are give an array, A, of n elements. You have to remove exactly n/2 elements from array A and add it 
    to another array array B(initially empty)

    Find the maximum and minimum values of difference between these two arrays.
    We define the difference between these two arrays as : Sigma abs(A[i]-B[i])

    12 -3 10 0
    -3 0 10 12

    Ans: 5 25
*/ 



#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

struct Pair{
    int min, max;
};

Pair minAndMax(vector<int> arr){
    sort(arr.begin(), arr.end());
    int half = arr.size()/2;
    int n = arr.size();
    int minDiff = 0, maxDiff = 0;
    for(int i=0; i<half; i++){
        minDiff += abs(arr[2*i] - arr[2*i+1]);
        maxDiff += abs(arr[i] - arr[n-i-1]);
    }
    return {minDiff, maxDiff};
}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i]; 
    }

    Pair ans = minAndMax(arr);
    cout << ans.min << " " << ans.max;
    return 0;
}