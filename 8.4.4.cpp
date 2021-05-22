#include <iostream>
#include <climits>

using namespace std;

// Record Breaker
/* 
    If Day has maximum visitors so far and 
    visitior more than visitors on its next 
    day then it is record breaking day
*/
int recordBreakingDays(int arr[], int n){
    int i = 0;
    int recordBreakingDays = 0;
    int mx = 0;
    while(i<n){
        if((arr[i] > arr[i+1]) && arr[i] > mx){
            recordBreakingDays++;
        }
        mx = max(mx, arr[i]);
        i++;
    }
    return recordBreakingDays;
}

int main(){
    int n;
    cin>>n;

    int arr[n+1];
    arr[n] = -1;

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<recordBreakingDays(arr, n);
    return 0;
}