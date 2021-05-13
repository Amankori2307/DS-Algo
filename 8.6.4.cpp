// Pair Sum Problem

#include <iostream>
using namespace std;

bool sumpair1(int arr[], int n, int s){
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            int tempSum = arr[i] + arr[j];
            if(tempSum == s){
                return true;
            }
        }
    }
    return false;
}

void bubbleSort(int arr[], int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

}

bool sumpair2(int arr[], int n, int s){
    bubbleSort(arr,n);
    // Using Two Pointer Algorithm
    int i = 0, j = n-1;
    while(i<j){
        int sum = arr[i] + arr[j];
        if(sum == s){
            return true;
        }
        else if(sum > s){
            j--;
        }else{
            i++;
        }
        
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
    for(int i=0; i<n; i++){}
    // sumpair1(arr, n, k);
    cout<<sumpair2(arr, n, k);
    return 0;
}