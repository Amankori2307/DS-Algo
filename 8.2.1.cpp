#include <iostream>
#include <climits>
#include <alg.h>
using namespace std;

int linearSearch(int arr[], int n, int key){
    for(int i=0; i<n; i++){
        if(arr[i] == key){
            return i;
        }
    }
    return -1;
}
int main(){

    // Progrma To Find Min And Max In An Array
    int n, key;
    cin>>n>>key;

    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }

    cout<<linearSearch(arr, n, key);
}