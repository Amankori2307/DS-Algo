#include<iostream>
using namespace std;
// Calculate N Raise To Power P

/*
    Dry RUN
    p = 2, n*n
    p = 1, n
    p = 0, 1
*/ 
int pow(int n, int p){
    if(p == 0){
        return 1;
    }

    return n*pow(n, p-1);

}

int main(){
    int n, p;
    cin>>n>>p;

    cout<<pow(n, p)<<endl;
    return 0;
}