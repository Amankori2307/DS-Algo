#include<iostream>
using namespace std;

int getBit(int num, int pos){
    int temp = 1<<pos;
    return (num & (1<<pos)) != 0;
}



int main(){
    int num, pos;
    cin>>num>>pos;

    cout<<getBit(num, pos);

    return 0;
}