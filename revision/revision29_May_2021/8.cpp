// Sum of All Subarray of a given array

#include <iostream>
using namespace std;

void subArraySum(int arr[], int n){
    for(int i=0; i<n; i++){
        int sum = 0;
        for(int j=i; j<n; j++){
            sum += arr[j];
            cout<<sum<<endl;
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

    subArraySum(arr, n);
    return 0;
}