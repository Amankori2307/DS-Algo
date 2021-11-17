// 3. Write binary search program
#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int key){
    int s = 0;
    int e = n-1;
    int mid;
    while(s<=e){
        mid = (s+e)/2;
        if(arr[mid] == key) return mid;
        if(arr[mid] > key) e = mid -1;
        else s = mid+1;
    }
    
    return -1;
}
int main(){
    int n, key;
    cin>>n>>key;
    int arr[n];
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }

    cout<<binarySearch(arr, n, key);
    return 0;
}

/*
    DRY RUN
    k = 5, 1 2 3 4 5
    s       0 3 4
    e       4 4 4
    mid     2 3 4

*/