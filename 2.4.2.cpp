#include <iostream>
using namespace std;

int main(){
    // Code for input output
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    // While Loop Example
    // Keep taking input as long as the input is positive
    int n;
    cin>>n;

    while(n>0){
        cout<<n<<endl;
        cin>>n;
    }
    return 0;
}