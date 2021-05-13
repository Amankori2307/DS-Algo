#include <iostream>
#include <climits>
using namespace std;


int kadane(int arr[0], int n){
    int currentSum = 0;
    int maxSum = INT_MIN;

    for(int i=0; i<n; i++){
        currentSum += arr[i];
        if(currentSum < 0){
            currentSum = 0;
        }
        maxSum = max(maxSum, currentSum);
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

    // Maximum Circular Subarray Sum
    // Approach is to find non contributing elemnt and it from and remove it from array

    int wrapsum;
    int nowrapsum;
    int totalSum = 0;
    nowrapsum = kadane(arr,n);

    for(int i=0; i<n; i++){
        totalSum += arr[i];
        arr[i] *= -1;
    }
    wrapsum = totalSum + kadane(arr, n);
    cout<<max(nowrapsum, wrapsum);

    return 0;
}