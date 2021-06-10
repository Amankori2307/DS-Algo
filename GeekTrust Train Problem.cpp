#include "bits/stdc++.h"
using namespace std;





const vector<pair<string, int>> trainAStations{
    {"CHN", 0},
    {"SLM", 350},
    {"BLR", 550},
    {"KRN", 900},
    {"HYB", 1200},
    {"NGP", 1600},
    {"ITJ", 1900},
    {"AGA", 2500},
    {"NDL", 2700},
};
const vector<pair<string, int>> trainBStations{
    {"CHN", 0},
    {"SLM", 350},
    {"BLR", 550},
    {"KRN", 900},
    {"HYB", 1200},
    {"NGP", 1600},
    {"ITJ", 1900},
    {"AGA", 2500},
    {"NDL", 2700},
};


void display(vector<string> data){
    for(auto item : data){
        cout<<item<<" ";
    }
    cout<<endl;
}
int binarySearch(string st, vector<string> stationsList){
    int s = 0;
    int e = stationsList.size();
    int mid;
    while(s<=e){
        mid = (s+e)/2;
        if(stationsList[mid] == st){
            return mid;
        }
    }
    return -1;
}

void removeFromList(vector<string> &stationList, string st){
    int idx = binarySearch(st, stationList);
    while(idx != -1){
        stationList.erase(stationList.begin()+idx);
        idx = binarySearch(st, stationList);

    }
}

int getDistance(string st){

    for(auto station:trainAStations){
        if(st==station.first){
            return station.second;
        }
    }
    
    for(auto station:trainBStations){
        if(st==station.first){
            return station.second;
        }
    }
    return -1;
}
vector<string> formatInput(string input){
    stringstream inputstream(input);
    vector<string> formatedInput;
    string item;
    while(inputstream >> item){
        formatedInput.push_back(item);
    }
    formatedInput.erase(formatedInput.begin()); // Removed Train Name Frome Input
    formatedInput.erase(formatedInput.begin()); // Removed Engine From Input
    return formatedInput;
} 

void trainProblemSolution(vector<string> A, vector<string> B){

    // Move Train A To Hyderabad
    // Remove all stations before hydrabad from list
    for(int i=0; i<trainAStations.size(); i++){
        // Remove Current Station From A
        removeFromList(A, A[i]);
        if(trainAStations[i].first == "HYB"){
            break;
        }
    }
    display(A);
    display(B);
}

int main(){
    string Ain, Bin;
    getline(cin, Ain);
    getline(cin, Bin);
    
    vector<string> A, B;
    A = formatInput(Ain);
    B = formatInput(Bin);

    trainProblemSolution(A, B);
    return 0;
}