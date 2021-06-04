/*
    Given an unsorted array A of size N of non-negative integers, 
    find a continuous subarray that adds up to a given number S.
    Constraints:    1 <= N <= 105
		            0 <= Ai <= 1010

*/ 

#include<iostream>
using namespace std;

void subarrayWithGivenSum(int arr[], int n, int s){
    for(int i=0; i<n; i++){
        int sum = 0;
        for(int j=i; j<n; j++){
            sum += arr[j];
            if(sum == s){
                cout<<i+1<<" "<<j+1<<endl;
                return;
            }
        }
    }
    cout<<"Not Found";
}

int main(){
    int n, s;
    cin>>n>>s;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    subarrayWithGivenSum(arr, n, s);

    return 0;
}