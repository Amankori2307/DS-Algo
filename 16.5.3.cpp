#include<iostream>
using namespace std;

int knapsack(int value[], int wt[], int n, int W){
    if(n == 0 || W == 0){
        return 0;
    }

    if(W < wt[n-1]){
        return knapsack(value, wt, n-1, W);
    }

    // Put current item in knapsack
    int ans1 = knapsack(value, wt, n-1, W-wt[n-1])+value[n-1];
    // Don't put current item in knapsack
    int ans2= knapsack(value, wt, n-1, W);
    return max(ans1, ans2);
}
int main(){
    int W, n;
    cin>>W>>n;

    int wt[n], value[n];
    for(int i=0; i<n; i++){
        cin>>wt[i];
    }
    for(int i=0; i<n; i++){
        cin>>value[i];
    }
   

    cout<<knapsack(value, wt, n, W)<<endl;

    return 0;
}