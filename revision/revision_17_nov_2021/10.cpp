// 10. Record Breaker (If Day has maximum visitors so far and visitior more than visitors on its next day then it is record breaking day)

#include<iostream>
#include<climits>
using namespace std;

int recordBreaker(int arr[], int n){
    int mx = INT_MIN;
    int noOfRecordBreakingDays = 0;
    for(int i=0; i<n; i++){
        if(arr[i] > mx && arr[i] > arr[i+1]){
            noOfRecordBreakingDays += 1;
        }
        mx = max(arr[i], mx);
    }
    return noOfRecordBreakingDays;
}  

int main(){
    int n;
    cin>>n;
    int arr[n+1];
    arr[n] = -1;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<recordBreaker(arr, n);

    return 0;
}