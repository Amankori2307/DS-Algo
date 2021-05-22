#include <iostream>
#include <climits>

using namespace std;

// Max Till I
void maxTillI(int arr[], int n){
    int mx = INT_MIN;
    for(int i=0; i<n; i++){
        mx = max(mx, arr[i]);
        cout<<mx<<" ";
    }
    cout<<endl;
}

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    maxTillI(arr, n);
    return 0;
}