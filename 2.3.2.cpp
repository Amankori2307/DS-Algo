#include<iostream>
using namespace std;

int main(){
    // Code For Input Output
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    // Odd Or Even
    int num;
    cin>>num;

    if(num%2 == 0)
        cout<<"Even\n";
    else
        cout<<"Odd\n";
    
}