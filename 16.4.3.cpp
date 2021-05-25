#include <iostream>
#include <string>
using namespace std;

// Count the number of paths possible in a maze

int possibleWays(int n, int i, int j){
    if(i==n-1 && j==n-1){
        return 1;
    }
    if( i>=n || j>=n){
        return 0;
    }

    int ans = 0;
    ans += possibleWays(n, i+1, j);
    ans += possibleWays(n, i, j+1);
    return ans;
}

int main(){
    int n;
    cin>>n;

    cout<<possibleWays(n,0,0);
    return 0;
}