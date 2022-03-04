/*
    Problem: Print vertical order of a binary tree

    Binary tree is given in an array form

    arr = [1, 2, 3, 4, 5, 6, 7]

            1
           / \
          2   3
         / \ / \
        4   |6  7
            5

    Vertical order: elements with same horizonal distance fals in same vertical line and we need to print all vertical lines
                    from left to right

    1 is at horizontal distance 0
    2 is at horizontal distance -1
    3 is at horizontal distance 1
    4 ....                      -2
    6 ...                        0
    5 .... 0
    7 .... 2

    vertical order would be 
    [4, 2, 2, 6, 5, 3, 7]

    Approach:
        1. calculate horizontal distance and then print element with lest horizonal distance to max horizontal distance

        Calc Horzontal Distance
            - Starting from the root
            - Recursively call left and right with HD-1 and HD+1 as arguments
            - (Base Case) when current node is NULL return
*/

#include<iostream>
#include<map>
#include<vector>
using namespace std;

void calcHorizontalDistance(int arr[], int root, int n, int HD, map<int, vector<int>> &vo){
    if(root >= n) return;
    vo[HD].push_back(arr[root]);
    calcHorizontalDistance(arr, root*2+1, n, HD-1, vo);
    calcHorizontalDistance(arr, root*2+2, n, HD+1, vo);
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    
    map<int, vector<int>> vo;
    calcHorizontalDistance(arr, 0, n, 0, vo);
    map<int, vector<int>> :: iterator it;
    for(it = vo.begin(); it != vo.end(); it++){
        vector<int> els = it->second;
        for(int i =0; i<els.size(); i++){
            cout << els[i] << " ";
        }
        cout << endl;
    }

}


