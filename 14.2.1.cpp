#include <iostream>
using namespace std;

// Write A Program To Check If A Number is Power Of Two
/*
    if we and n and n-1 it will return 0, if a no is power of two
    8 = 1000
    7 = 0111
    8 & 7 = 0 || 1000 & 0111 = 0000
*/
bool isNoIsPowerOf2(int num){
    return (num & num-1) == 0;
}

int main(){
    int num;
    cin>>num;

    cout<<isNoIsPowerOf2(num)<<endl;
    return 0;
}