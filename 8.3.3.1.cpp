#include <iostream>
using namespace std;
int main(){
    // input output code
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    // Insertion Sort
    int n;
    cin>>n;

    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    for(int i = 1; i<n; i++){
      int j = i-1;
      int curr = arr[i];
      while((curr < arr[j]) && j >= 0){
          arr[j+1] = arr[j];
          j--;
      }
      arr[j+1] = curr;

    }

    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
   
    return 0;
}
/*
    1 244  65  32 3 675  12
    1 

*/