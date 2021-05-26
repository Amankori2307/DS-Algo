#include "bits/stdc++.h"
using namespace std;

bool compare(pair<int, int> p1, pair<int, int> p2){
    return p1.first < p2.first;
}

void reduce(int arr[], int n){
    vector<pair<int, int>> v;
    for(int i=0; i<n; i++)
        v.push_back(make_pair(arr[i], i));

    sort(v.begin(), v.end(), compare);

    for(int i=0; i<n; i++){
        arr[v[i].second] = i;
    }

}

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    reduce(arr, n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}