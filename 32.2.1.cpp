/*
    Hashing STL

    Hasing Data Structures In STL

    Maps:
        - Insertion: O(Log N)
        - Access: O(Log N)
        - Deletion: O(Log N)
        - Implemented using red - black trees
        - map<int, int> mp;
        - #include<map>

    Unordered Maps:
        - Insertion: O(1) (on average)
        - Access: O(1)
        - Deletion: O(N)
        - Implemented using hash tables(basically array of buckets)
        - unordered_map<int, int> mp;
*/  

#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;



int main(){
    map<int, int> mp;
    mp[8] = 2;
    cout << mp[8] << endl;

    unordered_map<int, int> um;
    um[9] = 3;
    cout << um[9] << endl;
    return 0;
}


