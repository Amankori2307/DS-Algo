#include<iostream>
using namespace std;

// Pring no till in decreasing and increasing order
void dec(int n){
    if(n == 0){
        return;
    }
    cout<<n<<" ";
    dec(n-1);
}

void inc(int n){
    if(n==0){
        return;
    }
    inc(n-1);
    cout<<n<<" ";
}

int main(){
    int n;
    cin>>n;

    dec(n);
    cout<<endl;
    inc(n);
    
}