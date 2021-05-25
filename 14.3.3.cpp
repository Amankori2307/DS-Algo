#include <iostream>
using namespace std;

// // write a program to find a unique number in an array where all numbers except one, are present thrice
int getBit(int num, int pos){
    return (num & (1<<pos)) != 0;
}
int setBit(int num, int pos){
    return num | (1<<pos);
}
int uniqueNumber(int arr[], int n){
    int result = 0;
    for(int i = 0; i<64; i++){
        int occourence = 0;
        for(int j=0; j<n; j++){
            // Check if bit at position i in arr[j] is set or not
            if(getBit(arr[j], i)){
                occourence++;
            }
        }
        if(occourence % 3 != 0){
            result = setBit(result, i);
        }
    }
    return result;
}   
int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<uniqueNumber(arr, n)<<endl;
    return 0;
}