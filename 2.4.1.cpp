#include <iostream>
using namespace std;

int main(){
    // Code for input output
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    // Sum of n numbers
    int n;
    cin>>n;

    int sum = 0;
    for(int i = 1; i <= n; i++){
        sum += i;
    }

    cout<<"Sum: "<<sum<<endl;
    return 0;
}