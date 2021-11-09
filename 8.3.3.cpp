#include <iostream>
using namespace std;

/*
    Insertion sort is a simple sorting algorithm that works similar to the way you sort playing cards in your hands. The array is virtually split into a sorted and an unsorted part. Values from the unsorted part are picked and placed at the correct position in the sorted part.
    Algorithm 
    To sort an array of size n in ascending order: 
    1: Iterate from arr[1] to arr[n] over the array. 
    2: Compare the current element (key) to its predecessor. 
    3: If the key element is smaller than its predecessor, compare it to the elements before. Move the greater elements one position up to make space for the swapped element.
*/

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
        cout<<arr[i]<<" ";
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

void insertionSortRev(int arr[], int n){
    for(int i=1; i<n; i++){
        int item = arr[i];
        int j=i-1;
        while(j>=0 && item<arr[j]){
            // Shift Item
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = item;
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }

    // insertionSort(arr, n);
    // insertionSort2(arr, n);
    insertionSortRev(arr, n);
    return 0;
}