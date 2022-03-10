#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Pair{
    int weight, price;
};

int fractionalKnapsach(vector<Pair> arr, int W){
    sort(arr.begin(), arr.end(), [&](Pair a, Pair b){
        return (a.price/a.weight) > (b.price>b.weight);
    });
    int totalWeightInKnapsack = 0;
    int totalWorth = 0;
    for(int i=0; i<arr.size(); i++){
        if(totalWeightInKnapsack + arr[i].weight <= W){
            totalWeightInKnapsack += arr[i].weight;
            totalWorth += arr[i].price;
        } else {
            int perUnitValue = arr[i].price/arr[i].weight;
            int unitICanTake = W - totalWeightInKnapsack;
            totalWorth += unitICanTake*perUnitValue;
            break;
        }
    }
    return totalWorth;
}

int main(){
    int n;
    cin >> n;
    vector<Pair> arr(n);
    for(int i=0; i<n; i++){
        int weight, price;
        cin >> weight >> price;
        arr[i] = {weight, price};
    }
    int W;
    cin >> W;

    cout << fractionalKnapsach(arr, W);
    return 0;
}