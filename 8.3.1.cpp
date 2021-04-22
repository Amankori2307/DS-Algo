#include<iostream>
using namespace std;

// Selection Sort

int main(){
    // input output code
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin>>n;
    int arr[n];
    
    // Input Array
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    // Selection Sort 
    for(int i = 0; i < n-1; i++){
        for(int j = i+1; j < n; j++){
            if(arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                
            }
        }
    }

    // Output Array
    for(int i =0; i< n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}