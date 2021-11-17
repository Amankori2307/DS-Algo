// 13. Find Minimum Missing Positive No
#include<iostream>
using namespace std;

int findMinimumMissingPositiveNumber(int arr[], int n){
    int N = 10e5+2;
    bool nums[N];
    for(int i=0; i<N; i++){
        nums[i] = false;
    }

    for(int i=0; i<n; i++){
        if(arr[i] >= 1){
            nums[arr[i]] = true;
        }
    }

    for(int i=1; i<N; i++){
        if(nums[i] == false) return i;
    }

    return -1;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<findMinimumMissingPositiveNumber(arr, n);
    return 0;
}