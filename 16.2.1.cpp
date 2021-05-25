#include <iostream>
using namespace std;

// Find if an array is sorted or not
bool isSorted(int arr[], int n){
    if(n==0){
        return true;
    }

    if(arr[n-1] > arr[n-2]){
        return isSorted(arr, n-1);
    }
    else{
        return false;
    }
}

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    
    cout<<isSorted(arr, n)<<endl;
    return 0;
}