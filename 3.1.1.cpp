#include <iostream>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    // Print all odd nos till n
    int num;
    cin>>num;

    for(int i = 1; i <= num; i++){
        if(i%2 == 0){
            continue;
        }
        cout<<i<<endl;
    }
    return 0;
}