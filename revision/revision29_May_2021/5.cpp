// Bubble Sort
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
void bubbleSort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        for(int j=1; j<n-i; j++){
            if(arr[j-1] > arr[j]){
                swap(arr, j-1, j);
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