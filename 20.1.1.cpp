#include "bits/stdc++.h"
using namespace std;
void initializeWithZero(int arr[], int n){
    for(int i=0; i<n; i++){
        arr[i] = 0;
    }
}

void display(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void countSort(int arr[], int n){
    int k=arr[0];
    for(int i=0; i<n; i++){
       k = max(k, arr[i]);
    }
    k += 1;
    // Initialize Count Array With Zero
    int count[k];
    initializeWithZero(count, k);

    for(int i=0; i<n; i++){
        int item = arr[i];
        count[item]++;
    }
   
    for(int i=1; i<n; i++){
        count[i] += count[i-1];
    }

    int output[n];
    for(int i=n-1; i>=0; i--){
        int item = arr[i];
        int pos = --count[item];
        output[pos] = item; 
    }

    for(int i=0; i<n; i++){
        arr[i] = output[i];
    }

}


int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }   

    countSort(arr, n);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}