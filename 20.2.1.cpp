#include "bits/stdc++.h"
using namespace std;
// Dutch National Flag
/*
    Check value of arr[mid]-
        if 0, swap arr[mid] and arr[low], low++, mid ++
        if 1, mid++
        if 2 swap arr[mid] and arr[high], high--
*/ 

void dnfSort(int arr[], int n){
    int l = 0, m = 0, h = n-1;
    while(m <= h){
        if(arr[m] == 0){
            swap(arr[m], arr[l]);
            m++;
            l++;
        }
        else if(arr[m] == 1){
            m++;
        }
        else if(arr[m] == 2){
            swap(arr[m], arr[h]);
            h--;
        }
    }
}
int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    dnfSort(arr, n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}