/*
    Greedy Expidition

    A group of cow grabed a truck and ventured on an expedition deep into the Jungle. The truck leaks one unit of fule 
    for one unit of distance it travels.
    To repari the truck, the cows need to drive to the nearest town(no more then 10^6 units of distance).
    On this road, between the town and the current location there are N (1 <= N <= 10^5) fuel stops where the cow can 
    stop to acquire fuel( 1.....100 units at stop).
    The cows want to make the minimum possible of stops on the way to town.
    Capacity of the tank is sufficiently large to hold any amount of fuel

    Initial unit of fuel : P (1 <= P <= 10^6)
    Initial distance from twon: L

    Determine the minmum no of stops to reach the town


    APPROACH:
        - use max heap
*/ 

#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

struct Pair{
    int distanceFromTown, fuel;
};


void printArr(vector<Pair> arr){
    for(int i=0; i<arr.size(); i++){
        cout << arr[i].distanceFromTown << " ";
    }
    cout << "\n";
}

int cowsExpidition(vector<Pair> pp, int P, int L){
    printArr(pp);
    sort(pp.begin(), pp.end(), [&](Pair a, Pair b){
        return b.distanceFromTown > a.distanceFromTown;
    });
    printArr(pp);
    priority_queue<int, vector<int>> heap;
    int pertrolPumps = 0;
    int distanceTravelled = 0;
    for(int i=0; i<pp.size(); i++){
        heap.push(pp[i].fuel);
        distanceTravelled = L - pp[i].distanceFromTown;
        if(distanceTravelled >= P && distanceTravelled >= L){
            break;
        }
        if(distanceTravelled >= P){
            P += heap.top();
            heap.pop();
            pertrolPumps++;
        }
        
    }
    return pertrolPumps;
}
int main(){
    int P, L;
    cin >> P >> L;
    int n;
    cin  >> n;
    vector<Pair> pp;
    for(int i=0; i<n; i++){
        int distanceFromTown, fuel;
        cin >> distanceFromTown >> fuel;
        pp.push_back({distanceFromTown, fuel});       
    }
    cout << cowsExpidition(pp, P, L);
    return 0;
}