// 7. Max till i
#include<iostream>
#include<climits>
using namespace std;

int maxTillI(int arr[], int n, int i){
    int maxNum = INT_MIN;
    for(int j=0; j<i; j++){
        maxNum = max(maxNum, arr[j]); 
    }
    return maxNum;
}

int main(){
    int n, i;
    cin>>n>>i;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<maxTillI(arr, n, i);
    return 0;
}