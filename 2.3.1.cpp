#include<iostream>
using namespace std;

int main(){
    // Code For Input Output
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    // Greatest Among Three
    
    int a,b,c;
    cin>>a>>b>>c;

    if(a>b && a>c)
        cout<<"A is greatest\n";
    else if(b > c)
        cout<<"B is greatest\n";
    else
        cout<<"C is greatest\n";

    return 0;
}