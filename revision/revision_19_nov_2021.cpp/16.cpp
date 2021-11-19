// 16. Maximum circular subarray sub
/*
    There are two possibilites
    1. subarray with maximum sum is non-wraping, int that case use kadane's algorithm
    2. subarray with maximum sum is wrapping, in this case convert wrapping subarray to non-wraping, by removing no contributing elements from arry

    *To remove non contributing elements from array
    - Get sum of all the elements of array
    - now multiply all the elements by -1
    - now find maximum subarray sum for this inverted array
    - now add this to total sum
*/
#include<iostream> 
#include<climits>
using namespace std;


int kadane(int arr[], int n){
    int currentSum = 0;
    int maxSum = INT_MIN;
    for(int i=0; i<n; i++){
        currentSum += arr[i];
        if(currentSum < 0){
            currentSum = 0;
        }
        maxSum = max(currentSum, maxSum);
    }
    return maxSum;
}
int maxCircularSubArraySum(int arr[], int n){
    int wrapSum = kadane(arr, n);
    int nowrapSum;
    int totalSum  = 0;
    for(int i=0; i<n; i++){
        totalSum += arr[i];
        arr[i] *= -1;
    }
    nowrapSum = totalSum + kadane(arr, n);

    return max(wrapSum, nowrapSum);
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<maxCircularSubArraySum(arr, n);
    return 0;
}

// 1 2 3 4 5 -16 10 -42 5
// Ans 20
// 

// wrapsum = 15
// nowrapsum = 58-30 = 18 +48