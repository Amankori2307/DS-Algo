// Longest Arithmetic Array
#include<iostream>
using namespace std;


int longestArithmeticSubarray(int arr[], int n){
    int cl = 2;
    int cd = arr[1] - arr[0];
    int mx = 2;
    for(int i=2; i<n; i++){
        int diff = arr[i] - arr[i-1];
        if(diff == cd){
            cl++;
        }else{
            cl = 2;
            cd = diff;
        }
        mx = max(cl, mx);
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