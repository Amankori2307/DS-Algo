#include<iostream>
using namespace std;

// Longest Arithmetic Subarray(Condition: difference between consecutive elements in subarray should be same)
// Condition: difference between consecutive elements in subarray should be same
int longestArithmeticSubarray(int arr[], int n){
    int pd = arr[1] - arr[0];
    int mx = 2, curr = 2;
    int i = 2;
    while(i<n){
        if(pd == arr[i] - arr[i-1]){
            curr++;
        }else{
            pd = arr[i] - arr[i-1];
            curr = 2;
        }
        mx = max(curr, mx);
        i++;
    }
    return mx;
}

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<longestArithmeticSubarray(arr, n)<<endl;

    return 0;
}