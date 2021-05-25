#include<iostream>
using namespace std;

int updateBit(int num, int pos, int bit){
    // Clear Bit At Given Position
    num = num & (~(1<<pos));
    // Then Place Given Value Bit Value On Given Pos
    return num | (bit<<pos);

}
int main(){
    int num, pos, bit;
    cin>>num>>pos>>bit;

    cout<<updateBit(num, pos, bit)<<endl;

    return 0;
}