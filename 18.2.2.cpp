#include "bits/stdc++.h"
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int> nums(n);
    vector<vector<int>> ans;
    for(auto &i : nums)
        cin>>i;

    sort(nums.begin(), nums.end());
    do{
        ans.push_back(nums);
    }while(next_permutation(nums.begin(), nums.end()));

    for(auto r : ans){
        for(auto i : r){
            cout<<i<<" ";
        }
        cout<<endl;
    }



    return 0;
}