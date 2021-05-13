#include <iostream>
#include <climits>

using namespace std;

// Record Breaker
int recordBreakingDays(int arr[], int n){
    int mx = INT_MIN;
    int record_breaking_days = 0;

    // If there is only day in the input
    if(n==0){
        return 1;
    }

    for(int i=0; i<n; i++){
        if(arr[i] > mx && arr[i] > arr[i+1]){
            record_breaking_days++;
        }
        mx = max(arr[i], mx);
    }

    return record_breaking_days;
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin>>n;

    int arr[n+1];
    arr[n] = -1; // So that you don't get error while comparing arr[n-1] > arr[n]


    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    int ans = recordBreakingDays(arr, n);
    cout<<ans<<endl;

}