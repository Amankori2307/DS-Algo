#include <iostream>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    // Simple Arithmetic Calc
    char op;
    cin>>op;
    int a,b;
    cin>>a>>b;

    switch(op){
        case '+':
            cout<<a+b;
            break;
        case '-':
            cout<<a-b;
        case '*':
            cout<<a*b;
        case '/':
            cout<<a/b;
            break;
        default:
            cout<<"Invalid Operator";

    }
    return 0;
}