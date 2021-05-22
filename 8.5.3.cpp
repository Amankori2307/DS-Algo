#include <iostream>
using namespace std;

// Find Minimum Missing Positive No
int findMinimumPositiveMissingNo(int arr[], int n){
    // -1e5 >= arr[i] <= 1e5
    int N = 1e5+2;
    bool idx[N];
    for(int i=0; i<N; i++){
        idx[i] = false;
    }
    
    for(int i=0; i<n; i++){
        int item = arr[i];
        if(item >= 0){
            idx[item] = true;
        }
    }

    // 0 will not be treated as a positive integer
    for(int i=1; i<N; i++){
        if(idx[i] == false){
            return i;
        }
    }
    return -1;
}

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<findMinimumPositiveMissingNo(arr, n)<<endl;

    return 0;
}


// /******************************************************************************

//                               Online C++ Compiler.
//                Code, Compile, Run and Debug C++ program online.
// Write your code in this editor and press "Run" button to compile and execute it.

// *******************************************************************************/

// #include <iostream>
// #include <climits>

// using namespace std;
// // Find minimum missing postive integer
// int main()
// {
//     int n;
//     cin>>n;
    
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
    
//     const int N=1e6+2;
//     bool idx[N] = {false};
    
//     for(int i=0; i<n; i++){
//         int item = arr[i];
//         if(item >= 0){
//             idx[item] = true;
//         }
//     }
//     int ans = -1;
//     for(int i=1; i<N; i++){
//         int item = idx[i];
//         if(item != true){
//             ans = i;
//             break;
//         }
//     }
    
//     cout<<ans<<endl;
        
//     return 0;
// }
