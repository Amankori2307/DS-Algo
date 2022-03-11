/*
    COWS EXPIDITION
*/ 


#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;

#define vi vector<int>
#define rep(i,start,end) for(int i=start; i<end; i++)

struct Pair{
    int distance, fuel;
};

int expidition(vector<Pair> fuelPumps, int FD, int F){
    sort(fuelPumps.begin(), fuelPumps.end(), [&](Pair a, Pair b){
        return a.distance > b.distance;
    });

    int distanceCovered = 0;
    int vfp = 0;
    priority_queue<int, vector<int>> fp;
    for(int i=0; i<fuelPumps.size(); i++){
        distanceCovered = FD - fuelPumps[i].distance;
        fp.push(fuelPumps[i].fuel);
        if(distanceCovered > F){
            vfp++;
            F += fp.top();
            fp.pop();
        }
    }
    return vfp;
}

int main(){
    int F, FD; // Fuel, Final Destination
    cin >> F >> FD;
    int noOfFuelPumps;
    cin >> noOfFuelPumps;
    vector<Pair> fulePumps(noOfFuelPumps);
    rep(i, 0, noOfFuelPumps){
        int distance, fuel;
        cin >> distance >> fuel;
        fulePumps[i] = {distance, fuel};
    }
  

    cout << expidition(fulePumps, FD, F) << endl;
    return 0;
}