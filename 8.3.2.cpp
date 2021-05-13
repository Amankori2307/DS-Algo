#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n){
    // Bubble sort
    // Swap the adjecent elements if they are in wrong order

    for(int i = 1; i<n; i++){
        for(int j = 0; j < n-i; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    for(int i=0; i<n; i++){
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

    bubbleSort(arr, n);
    return 0;
}