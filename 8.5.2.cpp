#include <iostream>
using namespace std;

// Find Subarrays with given sum
void findSubArraysWithGivenSum(int arr[], int n, int s){
    int st = 0, en = 0, sum = 0;
    while(st < n && en < n && sum != s){
        if(sum > s &&  st < en){
            sum -= arr[st];
            st++;
        }
        else{
            sum += arr[en];
            en++;
        }
    } 
    if(sum == s){
        cout<<st+1<<", "<<en<<endl;
    }
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif 

    int n, s;
    cin>>n>>s;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    findSubArraysWithGivenSum(arr, n, s);

    return 0;
}