// Activity Selection
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

struct Pair{
    int start, end;
};

int activitySelection(vector<Pair> act){
    sort(act.begin(), act.end(), [&](Pair a, Pair b){
        return a.end < b.end;
    });

    int noOfAct = 1;
    Pair curr = act[0];
    for(int i=1; i<act.size(); i++){
        if(act[i].start >= curr.end){
            curr = act[i];
            noOfAct++;
        }
    }
    return noOfAct;
}

int main(){
    int n;
    cin  >> n;
    vector<Pair> act;
    for(int i=0; i<n; i++){
        int start, end;
        cin >> start >> end;
        act.push_back({start, end});
    }
    cout << activitySelection(act) << endl;
    return 0;
}