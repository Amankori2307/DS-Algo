// 17. Pair sum problem, check if there exists two elements in an array such that their sum is equal to given k.
/*
    Use of two pointer algorithm
*/
#include<iostream>
using namespace std;


void bubbleSort(int arr[], int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

bool pairSum(int arr[], int n, int k){
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i] + arr[j] ==  k) return true; 
        }  
    }
    return false;
}

bool pairSum2(int arr[], int n, int k){
    bubbleSort(arr, n);

    // Solution using two pointer algoritm
    int i=0; 
    int j=n-1;
    while(i<j){
        int sum = arr[i] + arr[j];
        if(sum == k) return true;
        else if(sum > k) j--;
        else i++;
    }
    return false;
}

int main(){
    int n, k;
    cin>>n>>k;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<pairSum2(arr, n, k)<<endl;
    return 0;
}