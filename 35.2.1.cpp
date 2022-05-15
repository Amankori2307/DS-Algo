/*
    Problem: Fibonacci Number
*/ 


#include<iostream>
#include<vector>
using namespace std;
// 0 1 1 2 3 5 8 13
vector<int> fib(200, -1);

int fibonacci(int n){
    if(n == 1) return 0;
    if(n == 2) return 1;

    if(fib[n] != -1) return fib[n];
    fib[n] = fibonacci(n-1) + fibonacci(n-2);
    return fib[n];
}

int main(){
    int n;
    cin >> n;

    cout << fibonacci(n) << endl;
    return 0;
}