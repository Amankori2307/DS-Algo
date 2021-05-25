#include<iostream>
#include<string>
using namespace std;

// Count the number of paths possible from start point to end point gameboard
int boardGame(int s, int e){
    if(s>e){
        return 0;
    }
    if(s==e){
        return 1;
    }
    int ans = 0;
    for(int i=1; i<=6; i++){
       ans += boardGame(s+i, e);
    }
    return ans;
}

int main(){
    int s, e;
    cin>>s>>e;

    cout<<boardGame(s,e)<<endl;
    return 0;
}