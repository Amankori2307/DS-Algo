#include <iostream>
using namespace std;

// Print All Sub Arrays
void printAllSubArrays(int arr[], int n){
    for(int i = 0; i<n; i++){
        for(int j=i; j<n; j++){
            for(int k=j; k<n; k++){
                cout<<arr[k]<<", ";
            }
            cout<<endl;
        }
    }
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
    
    printAllSubArrays(arr, n);
    return 0;
}