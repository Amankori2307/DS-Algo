#include <iostream>
using namespace std;

/*
    COUNT INVERSION:-
    Count the inversions in the given array.
    Two elements a[i] and a[j], form an inversion if a[i] > a[j] and i<j

    Arr = [3, 5, 6, 9, 1, 2, 7, 8]
*/ 

int countInversions(int arr[], int n){
    int inv = 0;
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i] > arr[j]){
                inv++;
            }
        }
    }
    return inv;
}


void display(int arr[], int l, int r){
    cout<<"[";
    for(int i=l; i<=r; i++){
        cout<<arr[i]<<", ";
    }
    cout<<"]\n";
}
// Count Inversion Using Merge Sort
int merge(int arr[], int l, int m, int r){
    int inv = 0;

    int n1 = m-l+1;
    int n2 = r-m;

    int a[n1];
    int b[n2];

    for(int i=0; i<n1; i++){
        a[i] = arr[l+i];
    }
    for(int i=0; i<n2; i++){
        b[i] = arr[m+1+i];
    }


    int i=0;
    int j=0;
    int k=l;
    while(i<n1 && j<n2){
        if(a[i] <= b[j]){
            arr[k] = a[i];
            i++;
            k++;
        }
        else{
            arr[k] = b[j];
            inv += n1-i;
            j++;
            k++;
        }
    }
    while(i<n1){
        arr[k] = a[i];
        i++;
        k++;
    }
    while(j<n2){
        arr[k] = b[j];
        j++;
        k++;
    }

    return inv;
}

int mergeSort(int arr[], int l, int r){
    int inv = 0;
    if(l<r){
        int mid = (l+r)/2;

        inv += mergeSort(arr, l, mid);
        inv += mergeSort(arr, mid+1, r);
        inv += merge(arr, l, mid, r);
    }
    return inv;
}

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    // cout<<countInversions(arr, n)<<endl;
    
    cout<<mergeSort(arr, 0, n-1)<<endl;
    return 0;
}