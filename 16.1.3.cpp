#include<iostream>
using namespace std;
// Factorail of n

/*
    DRY RUN:
    n = 3, 1*1*2*3
    n = 2, 1*1*2
    n = 1, 1*1
    n = 0, 1
*/ 

int factorial(int n){
    if(n == 0){
        return 1;
    }
    return n * factorial(n-1);
}

int main(){
    int n;
    cin>>n;

    cout<<factorial(n)<<endl;
    return 0;
}