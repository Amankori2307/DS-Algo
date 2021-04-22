#include <iostream>
using namespace std;
int main(){ 
    // input output code
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    // Max Till I
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    int mx = INT_MIN;
    for(int i = 0; i < n; i++){
        if(arr[i] > mx){
            mx = arr[i];
        }
        arr[i] = mx;
    }

    for(int i = 0; i< n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
