#include <iostream>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    // Print all prime nos in range a-b
    int a,b;
    // cout<<"Enter two nos: ";
    cin>>a>>b;

    for(int i = a; i<=b; i++){
        int j;
        for(j=2; j<i; j++){
            if(i%j == 0){
                break;
            }
        }
        
        if(i==j){
            cout<<i<<endl;
        }
    }
    return 0;
}