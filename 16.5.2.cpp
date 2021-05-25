#include <iostream>
using namespace std;

int friendsParing(int n){
    if(n==0 || n==1 || n==2){
        return n;
    }

    return friendsParing(n-1) + friendsParing(n-2)*(n-1);
}
int main(){
    int n;
    cin>>n;

    cout<<friendsParing(n);
    return 0;
}