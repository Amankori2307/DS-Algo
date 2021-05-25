#include<iostream>
using namespace std;

// how many numbers between 1-1000 are divisible by 5 or 7
int divisible(int num, int a, int b){
    int bya =0, byb = 0, byboth = 0;
    bya = num/a;
    byb = num/b;
    byboth = num/(a*b);
    // we are subtracting no divisible by both becuase nos which are divisible by both are present
    // in both divisible by 5 and 7, mesans they present 2 times which menas we have to subtract one time 
    return bya + byb - byboth;
}
int main(){
    int num, a, b;
    cin>>num>>a>>b;

    cout<<divisible(num, a, b)<<endl;

    return 0;
}