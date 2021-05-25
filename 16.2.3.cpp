#include <iostream>
using namespace std;
// Print First and Last Occurrence of a number in an array
int firstOccurrence(int arr[], int n, int i, int key){
    if(i == n){
        return -1;
    }
    if(arr[i] == key){
        return i;
    }
    return firstOccurrence(arr, n, i+1, key);
}   

int lastOccurrence(int arr[], int n, int i, int key){

    // Base condition
    if(i == n){
        return -1;
    }

    int restArray = lastOccurrence(arr, n, i+1, key);

    if(restArray != -1){
        return restArray;
    }
    if(arr[i] == key){
        return i;
    }
    return -1;
}


int main(){
    int n, key;
    cin>>n>>key;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<firstOccurrence(arr, n, 0, key)<<" ";
    cout<<lastOccurrence(arr, n, 0, key);
    return 0;
}