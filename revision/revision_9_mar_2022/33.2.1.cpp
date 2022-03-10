// Coin Exchange

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int coinExchange(vector<int> coins, int amount){
    sort(coins.begin(), coins.end(), greater<>());
    int noOfCoins = 0;
    int i=0;
    while( amount != 0){
        noOfCoins += amount/coins[i];
        amount = amount%coins[i];
        i++;
    }
    return noOfCoins;
}

int main(){
    int amount, n;
    cin >> amount >> n;
    vector<int> coins(n);
    for(int i=0; i<n; i++){
        cin >> coins[i];
    }
    cout << coinExchange(coins, amount);
    return 0;
}