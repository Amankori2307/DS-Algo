#include <iostream>
#include <climits>

using namespace std;


void sumOfAllSubArrays(int arr[], int n){
    for(int i = 0; i < n; i++){
        int current_sum = 0;
        for(int j=i; j<n; j++){
            current_sum += arr[j];
            cout<<current_sum<<endl;
        }
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
    sumOfAllSubArrays(arr, n);

}