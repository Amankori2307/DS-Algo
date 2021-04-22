#include<iostream>
using namespace std;

int main(){
    // Code For Input Output
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    // Maximum or minimum
    int n1, n2;
    cin>>n1>>n2;

    if(n1 > n2)
        cout<<"Max: num1, Min: n2\n";
    else
        cout<<"Max: num2, Min: num1\n";

    
}