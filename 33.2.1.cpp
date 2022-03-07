/*
    GREEDY || Indian coin change problems

    You are given an array of denominations and a value X. You need ot find the minmum  number of coing
    required to value X.

    Note: we have infinte supply of each coin.

    Approach
        1. start from the largest value, till we can include it, take it
        2. Else move on the smaller value
*/ 



#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;


map<int, int> getCoins(int x){
    map<int, int> coins;
    vector<int> dnms = {1, 2, 5, 10, 20, 50, 100, 200, 500, 2000};
    for(int i=dnms.size(); i >= 0; i--){
        if(x/dnms[i] >= 1){
            coins[dnms[i]] = x/dnms[i];
            x = x%dnms[i];
        }
    }    
    return coins;
}

int coinChange(vector<int> dnms, int x){
    int ans = 0;
    for(int i=0; i<dnms.size(); i++){
        ans += x/dnms[i];
        x = x%dnms[i];
    }
    return ans;
}

int main(){

    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int x;
    cin >> x;
    sort(arr.begin(), arr.end(), greater<int>());
    // map<int, int> coins = getCoins(x);
    // map<int, int> :: iterator it;
    // for(it=coins.begin(); it!=coins.end(); it++){
    //     cout << it->first << ": " << it->second << endl;
    // }

    cout << coinChange(arr, x);
}