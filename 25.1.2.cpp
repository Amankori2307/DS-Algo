// Sliding Window Maximum

#include <iostream>
#include <climits>
#include <deque>
using namespace std;

void slidingWindowMaximumBruteForce(int arr[], int n, int k){
    for(int i = 0; i <= n-k; i++){
        int mx = INT_MIN;
        for(int j=0; j<k; j++){
            mx = max(arr[i+j], mx);
        }
        cout<<mx<<" ";
    }
}

void slidingWindowMaximum(int arr[], int n, int k){
    int mx = INT_MIN;
    for(int i=0; i<k; i++){
        mx = max(arr[i], mx);
    }
    cout<<mx<<" ";
    int noOfWIndows = n-k+1;
    for(int i=0; i<noOfWIndows-1; i++){
        mx = max(arr[i+k], mx);
        cout<<mx<<" ";
    }

}

int main(){
    int n, k;
    cin>>n>>k;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    // slidingWindowMaximumBruteForce(arr, n, k);
    slidingWindowMaximum(arr, n, k);
    return 0;
}