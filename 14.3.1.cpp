#include <iostream>
using namespace std;

// write a program to find a unique number in an array where all numbers except one are present twice
/*
    For this we will use XOR operator becuase we
    know if we XOR same no we get 0 and in this question all no are present twice except one number

    0100 ^ 0100 = 0000
*/
int findUniqueNumber(int arr[], int n){
    int xorSum = 0;
    for(int i=0; i<n; i++){
        xorSum = xorSum^arr[i];
    }
    return xorSum;
}
int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<findUniqueNumber(arr, n)<<endl;
    return 0;
}