// 1. Find Max and Min in array
#include <iostream>
#include <climits>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }

    int minNum = INT_MAX;
    int maxNum = INT_MIN;

    for(int i=0; i<n; i++){
        minNum = min(arr[i], minNum);
        maxNum = max(arr[i], maxNum);
    }

    cout<<maxNum<<" "<<minNum<<endl;
    return 0;
}