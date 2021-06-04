// Maximum Subarray Sum(Kadane’s Algorithm)
#include<iostream>
#include<climits>
using namespace std;

int maximumSubarraySum(int arr[], int n){
    int maxSum = INT_MIN;
    int currSum = 0;
    for(int i=0; i<n; i++){
        currSum += arr[i];
        if(currSum < 0){
            currSum = 0;
        }
        maxSum = max(currSum, maxSum);
    }
    return maxSum;
}

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<maximumSubarraySum(arr,n)<<endl;
    return 0;
}