#include <iostream>
#include <climits>
#include <alg.h>
using namespace std;

int linearSearch(int arr[], int n, int key){
    for(int i = 0; i<n; i++){
        if(arr[i] ==  key)
            return i;
    }
    return -1;
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    // Progrma To Find Min And Max In An Array
    int n;
    cin>>n;

    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }

    int key; 
    cin>>key;
    cout<<linearSearch(arr, n, key);

    
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }

}