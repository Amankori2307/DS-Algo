#include <iostream>
#include<string>
using namespace std;
/*
    Tiling Problem
    Given a “2 x n” board and tiles of size “2 x 1”, 
    count the number of ways to tile the given board 
    using these tiles

*/ 
int tilingWays(int n){
    if( n<0){
        return 0;
    }
    if(n == 0){
        return 1;
    }

    int ans = 0;
    // Try to put tile vertically
    ans += tilingWays(n-1);
    // Try to put tile horizontally
    ans += tilingWays(n-2);

    return ans;
}

int main(){
    int n;
    cin>>n;

    cout<<tilingWays(n)<<endl;
    return 0;
}
