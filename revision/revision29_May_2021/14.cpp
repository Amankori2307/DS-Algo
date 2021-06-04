// Print all possible subarrays of an array

#include <iostream>
using namespace std;

void display(int arr[], int s, int e){
    for(int i=s; i<=e; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void allPossibleSubarrays(int arr[], int n){
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            display(arr, i, j);
        }
    }
}

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    allPossibleSubarrays(arr, n);

    return 0;
}