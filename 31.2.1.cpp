/*
    How to “heapify” a tree?

    The process of reshaping a binary tree into a Heap data structure is known as ‘heapify’. A binary tree is a tree 
    data structure that has two child nodes at max. If a node’s children nodes are ‘heapified’, then only ‘heapify’ 
    process can be applied over that node. A heap should always be a complete binary tree. 

    Starting from a complete binary tree, we can modify it to become a Max-Heap by running a function called ‘heapify’ 
    on all the non-leaf elements of the heap. i.e. ‘heapify’ uses recursion.
*/ 

// Heap Sort Program
#include <iostream>
using namespace std;


void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
void heapify(int arr[], int n, int i){
    int largest = i;
    int l = i*2+1;
    int r = i*2+2;

    if(l < n && arr[l] > arr[largest]){
        largest = l;
    }
    if(r < n && arr[r] > arr[largest]){
        largest = r;
    }

    if(largest != i){
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}

void heapSort(int arr[], int n) {
    // Build heap(rearrange arry)
    for(int i = n/2-1; i >= 0; i--){
        heapify(arr, n, i);
    }

    // One by one extract an elament from array
    for(int i=n-1; i >= 0; i--){
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}


int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    heapSort(arr, n);
    printArray(arr, n);

}