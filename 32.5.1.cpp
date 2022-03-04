/*
    Problem: No of subarray with sum 0
*/ 



#include <iostream>
#include<vector>
#include<map>

using namespace std;



int main(){
    int n; 
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    map<int, int> freq;
    int prefSum = 0;
    for(int i=0; i<n; i++){
        prefSum += arr[i];
        freq[prefSum]++;
    }

    map<int, int> :: iterator it;
    int ans = 0;
    for(it = freq.begin(); it != freq.end(); it++){

        int c = it->second;
        ans += (c*(c-1))/2;
        if(it->first == 0){
            ans += it->second;
        }
    }   

    cout << ans << endl;


    return 0;
}