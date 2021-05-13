#include <iostream>
#include <climits>

using namespace std;

// Program To find Max till i
void maxTillI(int arr[], int n){
    int mx = INT_MIN;

    for(int i=0; i<n; i++){
        mx = max(arr[i], mx);
        cout<<mx<<", ";
    }

}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin>>n;

    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    maxTillI(arr, n);

}