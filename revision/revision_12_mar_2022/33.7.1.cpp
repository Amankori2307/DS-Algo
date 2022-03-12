/*
    Maximum and Minimum Diff
*/


#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

struct Pair{
    int min, max;
};

Pair minMaxDiff(vector<int> arr){
    sort(arr.begin(), arr.end());


    int n = arr.size();
    int half = n/2;

    int minDIff = 0, maxDiff = 0;
    for(int i=0; i<half; i++){
        minDIff += abs(arr[2*i] - arr[2*i+1]);
        maxDiff += abs(arr[i] - arr[n-i-1]);
    }


    return {minDIff, maxDiff};
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    Pair ans = minMaxDiff(arr);
    cout << ans.min << " " << ans.max;
    return 0;
}
 