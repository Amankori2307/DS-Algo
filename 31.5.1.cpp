/*
    PROBLEM: Merge K Sorted Arrays

    APPROACH 1:
        - take 2 arrays and merge them, repeat this process until we are left with 1 array

    APPROACH 2:

    - The idea is to use Min Heap. This MinHeap based solution has the same time complexity which is O(NK log K). 
    \But for a different and particular sized array, this solution works much better. The process must start with 
    creating a MinHeap and inserting the first element of all the k arrays. Remove the root element of Minheap and 
    put it in the output array and insert the next element from the array of removed element. To get the result the 
    step must continue until there is no element in the MinHeap left. 

    - MinHeap: A Min-Heap is a complete binary tree in which the value in each internal node is smaller than or equal 
    to the values in the children of that node. Mapping the elements of a heap into an array is trivial: if a node is 
    stored at index k, then its left child is stored at index 2k + 1 and its right child at index 2k + 2. 

    Algorithm: 
    - Create a min Heap and insert the first element of all k arrays.
    - Run a loop until the size of MinHeap is greater than zero.
    - Remove the top element of the MinHeap and print the element.
    - Now insert the next element from the same array in which the removed element belonged.
    - If the array doesn’t have any more elements, then replace root with infinite.After replacing the root, heapify the tree.
*/


#include<iostream>
#include<vector>
#include<queue>
using namespace std;

#define pii pair<int, int>


void mergeKSortedArr(vector<vector<int>> arr) {
    priority_queue<pii, vector<pii>, greater<pii>> pq;
    vector<int> idx(arr.size(), 0);
    for(int i; i<arr.size(); i++){
        pq.push({arr[i][0], i});
    }

    while(!pq.empty()){
        pii top = pq.top();
        pq.pop();
        cout << top.first << " ";

        int arrayNum = top.second;
        int index = ++idx[arrayNum];
        if(index < arr[arrayNum].size()){
            int el = arr[arrayNum][index];
            pq.push({el, arrayNum});
        }
    }
    cout<<endl;
}

int main() {
    int k;
    cin >> k;
    vector<vector<int>> arr(k);
    for(int i=0; i<k; i++){
        int n; 
        cin >> n;
        vector<int> subArr(n);
        for(int j=0; j<n; j++){
            cin >> subArr[j]; 
        }
        arr[i] = subArr;
    }
    mergeKSortedArr(arr);
}