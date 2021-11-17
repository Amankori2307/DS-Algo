// 9. Longest Arithmetic Subarray(Condition: difference between consecutive elements in subarray should be same)

#include<iostream>
using namespace std;


int longestArithmeticSubarray(int arr[], int n){
    int mx = 2;
    int curr = 2;
    int pd = arr[1] - arr[0];
    for(int i=2; i<n; i++){
        if(arr[i] - arr[i-1] == pd){
            curr++;
        }
        else{
            pd = arr[i] - arr[i-1];
        }
        mx = max(mx, curr);
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

    cout<<longestArithmeticSubarray(arr, n);
    return 0;
}