// 6. Write insertion sort program
/*
    Insertion sort is a simple sorting algorithm that works similar to the way you sort playing cards in your hands. The array is virtually split into a sorted and an unsorted part. Values from the unsorted part are picked and placed at the correct position in the sorted part.
    Algorithm 
    To sort an array of size n in ascending order: 
    1: Iterate from arr[1] to arr[n] over the array. 
    2: Compare the current element (key) to its predecessor. 
    3: If the key element is smaller than its predecessor, compare it to the elements before. Move the greater elements one position up to make space for the swapped element.
*/

#include<iostream>
using namespace std;

void display(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void insertionSort(int arr[], int n){
    for(int i=1; i<n; i++){
        int item = arr[i];
        // check in the sorted array where to place the key
        for(int j=0; j<i; j++){
            if(arr[j] > item){
                // move elements to make space for key
                for(int k=i; k>j; k--){
                    arr[k] = arr[k-1];
                }
                arr[j] = item;
                break;
            }
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

    insertionSort(arr, n);
    display(arr, n);

    return 0;
}