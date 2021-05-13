/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <climits>

using namespace std;
// Find minimum missing postive integer
int main()
{
    int n;
    cin>>n;
    
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    const int N=1e6+2;
    bool idx[N] = {false};
    
    for(int i=0; i<n; i++){
        int item = arr[i];
        if(item >= 0){
            idx[item] = true;
        }
    }
    int ans = -1;
    for(int i=0; i<N; i++){
        int item = idx[i];
        if(item != true){
            ans = i;
            break;
        }
    }
    
    cout<<ans<<endl;
        
    return 0;
}
