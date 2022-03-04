/*
    PROBLEM: Count frequency of elements

*/ 


#include<iostream>
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
    for(int i=0; i<n; i++){
        int el = arr[i];
        freq[el]++;
    }

    map<int, int> :: iterator it;
    for(it = freq.begin(); it!=freq.end(); it++){
        cout << it->first << ": "<< it->second << endl;
    }
    return 0;
}