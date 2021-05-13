#include <iostream>
using namespace std;

// Smallest Positive Missing number
void smallestPositiveMissingNo(int arr[], int n){

}
int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif 

    int n, s;
    cin>>n>>s;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int N = 1e3+2;
    bool idx[N] = {false};
    for(int i=0; i<N; i++){
        cout<<idx[i]<<",  ";
    }
    smallestPositiveMissingNo(arr, n);
    return 0;
}