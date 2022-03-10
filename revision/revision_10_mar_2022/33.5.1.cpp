/* Optimal Pattern Merge*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int optimalPatternMerge(vector<int> arr){
    sort(arr.begin(), arr.end());
    int sum = 0;
    int currSum = arr[0];
    for(int i=1; i<arr.size(); i++){
        currSum += arr[i];
        sum += currSum;
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    cout << optimalPatternMerge(arr) << endl;
    return 0;
}