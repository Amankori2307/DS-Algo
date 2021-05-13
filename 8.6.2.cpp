#include <iostream>
#include <climits>
using namespace std;

// Maximum Subarray Sum
void maximumSubarraySum1(int arr[], int n){
    int mx = INT_MIN;
    for(int i = 0; i<n; i++){
        int sum = 0;
        for(int j=i; j<n; j++){
            sum += arr[j];
            mx = max(mx, sum);
        }
    }
    cout<<mx<<endl;
}


void maximumSubarraySum2(int arr[], int n){
    // Kadane's Algorithm
    int maxSum = INT_MIN;
    int currentSum = 0;

    for(int i=0; i<n; i++){
        currentSum += arr[i];
        if(currentSum < 0){
            currentSum = 0;
        }
        maxSum = max(maxSum, currentSum);
    }
    cout<<maxSum;

    
}
int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif 

    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i]; 
    }
    
    // maximumSubarraySum1(arr, n);
    maximumSubarraySum2(arr, n);
    return 0;
}