#include <iostream>
using namespace std;


void insertionSort(int arr[], int n){
    for(int i = 1; i < n; i++){
        int item = arr[i];
        // check in sorted array where to put item
        for(int j = 0; j < i; j++){
            if(arr[j] > item){
                // Insert item at correct postion by shifting item
                // in sorted array
                for(int k = i; k > j; k--){
                    arr[k] = arr[k-1];
                }
                arr[j] = item;
                break;
            }
        }
    }
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<", ";
    }
}

void insertionSort2(int arr[], int n){
    for(int i=1; i<n; i++){
        int current = arr[i];
        int j = i-1;
        while(arr[i] > current && j != 0){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = current;
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

    insertionSort(arr, n);
    cout<<endl;
    insertionSort2(arr, n);
    return 0;
}