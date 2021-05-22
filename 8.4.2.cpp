#include <iostream>
using namespace std;


// Sum of all subarray
void sumOfAllSubarray(int arr[], int n){
    for(int i=0; i<n; i++){
        int sum =0;
        for(int j=i; j<n; j++){
            sum += arr[j];
            cout<<sum<<" ";
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
    sumOfAllSubarray(arr, n);

    return 0;
}