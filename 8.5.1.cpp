/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <climits>

using namespace std;

int main()
{
    int n;
    cin>>n;
    
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    const int N = 1e6+2;
    int idx[N];
    for(int i=0; i<N; i++){
        idx[i] = -1;
    }
    
    int minIndex = INT_MAX;

    // First Repating Element with minimum index
    for(int i=0; i<n; i++){
        int curr = arr[i];
        if(idx[curr] != -1){
            minIndex = min(minIndex, idx[curr]);
        }else{
            idx[curr] = i;
        }
    }
    cout<<minIndex;

    return 0;
}
