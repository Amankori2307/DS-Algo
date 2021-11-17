// 5. Write bubble sort program
/*
    Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements if they are in wrong order.
*/

#include<iostream>
using namespace std;

void display(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void bubbleSort(int arr[], int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
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

    bubbleSort(arr, n);
    display(arr, n);
    return 0;
}

/*
    DRY RUN
    n = 5, arr = 1 4 3 5 2
    i = 0, j = 0, 1 4 3 5 2
    i = 0, j = 1, 1 3 4 5 2
    i = 0, j = 2, 1 3 4 5 2
    i = 0, j = 3, 1 3 4 2 5
*/