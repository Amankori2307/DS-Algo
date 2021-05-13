#include <iostream>
using namespace std;

void selectionSort(int arr[], int n){
    // Find minimum element in unsorted array and swap it with 
    // first element in the array
    int temp =0;
    for(int i = 0; i < n-1; i++){
        for(int j = i+1; j<n; j++){
            if(arr[i] > arr[j]){
                // Swap
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp; 
            }
        }
    }

    for(int i = 0; i<n; i++){
        cout<<arr[i]<<", ";
    }
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin>>n;

    int arr[n];
    
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    selectionSort(arr, n);


    return 0;
}
