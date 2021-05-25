#include<iostream>
using namespace std;

// Write a program to count the number of ones in binary representation of a number
/*
    if we do n&(n-1) the there will be 1 less set bit the result and this is
    what we are gonna use in our program
*/
int noOfOnes(int num){
    int count = 0;
    while(num){
        count++;
        num = num & (num-1);
    }
    return count;
}

int main(){
    int num;
    cin>>num;

    cout<<noOfOnes(num)<<endl;

    return 0;
}