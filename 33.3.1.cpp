/*
    Greedy || Activity Selection
    
    You are given N activities with their start and finish times. Select the maximum number of activites
    that can be performed by a single person, assuming that a person can only work on a single activity at 
    a time.


    Approach:
        - Sort activities by their end time
        - take first activity and then iterate over rest of the activities and if start time of next activity 
        is greater that or equal current activity end time than take take that
*/ 

#include "bits/stdc++.h"
#include <vector>
#include <algorithm>
using namespace std;

void print(vector<pair<int, int>> a){
    for(int i=0; i<a.size(); i++){
        cout << a[i].first << " " << a[i].second << endl;
    }
}

int maxActivities(vector<pair<int, int>> a){
    sort(a.begin(), a.end(), [&](pair<int, int> a, pair<int, int> b){
        return a.second < b.second;
    });
    int take = 1;
    int end = a[0].second; 
    for(int i=1; i<a.size(); i++){
        if(a[i].first >= end){
            take++;
            end = a[i].second;
        }
    }
    return take;
}

int main(){
    int n; 
    cin >> n;
    vector<pair<int, int>> a;
    for(int i=0; i<n; i++){
        int start, end;
        cin >> start >> end;
        a.push_back({start, end});
    }

    cout << maxActivities(a);
    return 0;
}