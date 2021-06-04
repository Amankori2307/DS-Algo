// Max till i
#include <iostream>
#include <climits>
using namespace std;

void maxTillI(int arr[], int n){
    int mx = INT_MIN;
    for(int i=0; i<n; i++){
        mx = max(arr[i], mx);
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