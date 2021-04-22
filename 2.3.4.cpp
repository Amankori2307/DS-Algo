#include <iostream>
using namespace std;

int main(){
    // Code for input output
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    // Program to check if triangle is scalene, isosceles or equilateral
    int a,b,c;
    cin>>a>>b>>c;

    if(a ==b && b==c)
        cout<<"Equilateral";
    else if(a==b || b==c || c==a)
        cout<<"Isosceles";
    else    
        cout<<"Scelene";
}