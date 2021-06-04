// Record Breaking Day
#include <iostream>
#include <climits>
using namespace std;

int recordBreakingDays(int arr[], int n){
    int count = 0;
    int mx  = INT_MIN;
    for(int i=0; i<n; i++){
        if(arr[i] > mx && arr[i] > arr[i+1]){
            count++;
            mx = arr[i];
        }

    }
    return count;
}

int main(){
    int n;
    cin>>n;

    int arr[n+1];
    arr[n] = -1; // to prevent from error when we compare next day for last day arr[n-1] > arr[n]
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<recordBreakingDays(arr, n)<<endl;

    return 0;
}