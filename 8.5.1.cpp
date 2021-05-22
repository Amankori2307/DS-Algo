#include <iostream>
using namespace std;

int firstRepeatingElementWithMinimumIndex(int arr[], int n){
    const int N = 1e5+2;
    int idx[N];
    for(int i=0; i<N; i++){
        idx[i] = -1;
    }

    int minIndex = INT_MAX;
    for(int i=0; i<n; i++){
        int item = arr[i];
        if(idx[item] != -1){
            minIndex = min(minIndex, idx[item]);
        }
        idx[item] = i;
    }

    return minIndex;
};

int main(){
    int n;
    cin>>n;
    
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<firstRepeatingElementWithMinimumIndex(arr, n);

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

// int main()
// {
//     int n;
//     cin>>n;
    
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
    
//     // 0 <= Ai <= 1e5
//     // const int N = 1e6+2;
//     const int N = 1e5+2;
//     int idx[N];
//     for(int i=0; i<N; i++){
//         idx[i] = -1;
//     }
    
//     int minIndex = INT_MAX;

//     // First Repating Element with minimum index
//     for(int i=0; i<n; i++){
//         int curr = arr[i];
//         if(idx[curr] != -1){
//             minIndex = min(minIndex, idx[curr]);
//         }else{
//             idx[curr] = i;
//         }
//     }
//     cout<<minIndex;

//     return 0;
// }
