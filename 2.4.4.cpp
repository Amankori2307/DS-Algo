#include <iostream>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    // Table Program
    int num;
    cin>>num;

    for(int i = 1; i <= 10; i++){
        cout<<num<<" X "<<i<<" = "<<num*i<<endl;
    }
    return 0;
}