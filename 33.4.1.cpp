/*
    GREEDY || Fractional Knapsack

    We are given 'n' items with {weight, value} of each item and the capacity of knapsack (Sack) 'W'. We need to put 
    these items in knapsack such that final value of items in knapsack is maximum

    Approach:
        - Sort items by value per unit and then then add item with the greatest per unit value in sack, it there is still
        space in knapsack then second greatest value itme and so on...
*/ 


#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

struct Pair{
    double weight;
    double price;
};

double knapSack(vector<Pair> items, double sc){
    sort(items.begin(), items.end(), [&](Pair a, Pair b){
        return (a.price/a.weight) > (b.price/b.weight);
    });
    double sum = 0, ans = 0;
    for(int i=0; i<items.size(); i++){
        if(sum + items[i].weight <= sc){
            sum += items[i].weight;
            ans += items[i].price;
        } else {
            double perUnitCost = items[i].price/items[i].weight;
            ans += (sc-sum)*perUnitCost;
            break;
        }
    }
    return ans;
}

int main(){
    double n; cin >> n;
    vector<Pair> arr;
    for(double i=0; i<n; i++){
        double weight, price;
        cin >> price >> weight;
        arr.push_back({weight, price});
    }
    double sc; cin >> sc;

    cout << knapSack(arr, sc);

    return 0;
}