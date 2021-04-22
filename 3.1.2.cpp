#include <iostream>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    // Check if prime
    int num;
    cin>>num;

    int i;
    for(i = 2;i < num; i++){
        if(num%i == 0){
            break;
        }
    }
    if(i == num){
        cout<<"Prime"<<endl;
    }else{
        cout<<"Not Prime"<<endl;
    }
    return 0;
}