#include <iostream>
using namespace std;
// write a program to find two unique numbers in an array where all numbers except two are present twice
/*
    If we xor all the no then will get xor of two unique no because all are present twice
    and those nos xor will result in zero

    1000 ^ 0111 = 1111

*/
int getBit(int num, int pos){
    return (num & (1<<pos)) != 0;
}

void findTwoUniqueNos(int arr[], int n){
    int xorSum = 0;
    
    // Xor All nos
    for(int i=0; i<n; i++){
        xorSum = xorSum ^ arr[i];
    }

    // now in xor sum we have xor of two unique nos

    // Now get the position of set first set bit in the xor sum
    int pos = 0;
    while(!getBit(xorSum, pos)){
        pos++;
    }

    // now xor all the values who has a set bit postion pos
    int xorSum2 = 0;
    for(int i=0; i<n; i++){
        // If bit at pos is set
        if(getBit(arr[i], pos)){
            xorSum2 = xorSum2 ^ arr[i];
        }
    }

    // 1st Unique No
    cout<<xorSum2<<" ";
    // 2nd Unique No
    int temp = xorSum ^ xorSum2;
    cout<<temp<<endl;
}

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    findTwoUniqueNos(arr, n);
    return 0;
}