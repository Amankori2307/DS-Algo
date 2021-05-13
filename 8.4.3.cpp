#include <iostream>
#include <climits>

using namespace std;


void longestArithmeticSubarray(int arr[], int n){
    // For this approach to work there has to be atleast three elements in the array

    int pd = arr[1] - arr[0];
    int mx = 2;
    int curr = 2;
    int i = 2;
    while(i<n){
        if(pd == arr[i] - arr[i-1]){
            curr++;
        }else{
            curr = 2;
            pd = arr[i] - arr[i-1];
        } 
        mx = max(curr, mx);
        i++;
    }
    cout<<"\n\n";
    cout<<mx<<endl;
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
    longestArithmeticSubarray(arr, n);

}