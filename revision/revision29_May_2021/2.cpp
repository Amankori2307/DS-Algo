// Find Linear Search
#include <iostream>
#include <climits>
using namespace std;

int linearSerach(int arr[], int n, int key){
    for(int i=0; i<n; i++){
        if(arr[i] == key){
            return i;
        }
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
    
    cout<<linearSerach(arr, n, key)<<endl;

    return 0;
}