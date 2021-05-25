#include <iostream>
using namespace std;

// Write a program to generate all possible subsets of a set {a, b, c}
/*
    APROACH
    000, 001, 010, 011, 100, 101, 110, 111
*/

void generateSubsets(int arr[], int n){
    for(int i=0; i<(1<<n); i++){
        for(int j=0; j<n; j++){
            if(i & (1<<j)){
                cout<<arr[j]<<" ";
            }
        }
        cout<<endl;
    }
}

int main(){

    int n;
    cin>>n;

    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }

    generateSubsets(arr, n);
    return 0;
}