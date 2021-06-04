/*
    You Are Given An arr[] of N integers including 0, 
    The Task is to find the smallest positive number 
    missing from the array
    Constraint:     1<=N<=106
                    -10000 <= Ai <= 10000
*/ 

#include <iostream>
using namespace std;

int smallestMissingPositiveNumber(int arr[], int n){
    int N = 1e5 +2;
    bool nums[N];
    for(int i=0; i<N; i++){
        nums[i] = false;
    }
    for(int i=0; i<n; i++){
        if(arr[i] >= 0){
            nums[arr[i]] = true;
        }
    }
    cout<<endl;

    int i=0;
    for(; i<N; i++){
        if(nums[i] == false){
            break;
        }
    }
    return i;
}

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<smallestMissingPositiveNumber(arr, n)<<endl;

    return 0;
}