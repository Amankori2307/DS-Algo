#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;

// Three Sum Problem
bool threeSum(vector<int> arr, int n, int s){
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            for(int k=j+1; k<n; k++){
                int sum = arr[i] + arr[j] + arr[k];
                if(sum == s){
                    return true;
                }
            }
        }
    }
    return false;
}

bool twoSum(vector<int> arr, int si, int ei, int s){
    while(si<ei){
        int sum = arr[si] + arr[ei];
        if(sum == s){
            return true;
        }
        else if(sum < s){
            si++;
        }else if(sum > s){
            ei--;
        }
    }
    return false;
}

// Using Two Pointer Technique
bool threeSumOptimizedApproach(vector<int> arr, int n, int s){
    sort(arr.begin(), arr.end());
    for(int i=0; i<n; i++){
        int tempSum = s - arr[i];
        if(twoSum(arr, i+1, n-1, tempSum)){
            return true;
        }
    }
    return false;
}



int main(){
    int n, s;
    cin>>n>>s;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    // cout<<threeSum(arr, n, s)<<endl;
    cout<<threeSumOptimizedApproach (arr, n, s)<<endl;
    return 0;
}