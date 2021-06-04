// Insertion Sort
#include <iostream>
using namespace std;

void display(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void swap(int arr[], int i, int j){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
void insertionSort(int arr[], int n){
    for(int i=1; i<n; i++){
        int item = arr[i];
        int j = i-1;
        while(j >= 0 && arr[j] > item){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = item;

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