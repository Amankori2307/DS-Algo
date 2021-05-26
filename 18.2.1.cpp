#include "bits/stdc++.h"
using namespace std;

void solve(vector<int> &nums, vector<vector<int>> &ans, int idx){
    if(idx == nums.size()){
        ans.push_back(nums);
        return;
    }
    for(int i=idx; i<nums.size(); i++){
        swap(nums[i], nums[idx]);
        solve(nums, ans, idx+1);
        swap(nums[i], nums[idx]);
    }
}

vector<vector<int>> premute(vector<int> nums){
    vector<vector<int>> ans;
    solve(nums, ans, 0);
    return ans;
}


int main(){
    int n; 
    cin>>n;

    vector<int> nums(n);
    for(auto &i : nums)
        cin>>i;
    
    vector<vector<int>> res = premute(nums);
    for(auto r : res){
        for(auto c : r){
            cout<<c<<" ";
        }
        cout<<endl;
    }
    return 0;
}