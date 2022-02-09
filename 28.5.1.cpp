/*
    Sorted Array = [1, 2, 3]
    Balanced BST
    
            2
           /  \
          1    3


    STRATEGY:-
    1. Make middle element the root
    2. Recursively, do the same for subtrees
        a. (start to mid-1) for left subtree
        b. (mid+1 to end) for right subtree

*/ 


#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *right, *left;
    Node(int val){
        data = val;
        right = NULL;
        left = NULL;
    }
};

Node* sortedArrayToBST(int sortedArray[], int start, int end){
    if(start > end) return NULL;

    int mid = (start + end)/2;
    Node* root = new Node(sortedArray[mid]);
    root->left = sortedArrayToBST(sortedArray, start, mid-1);
    root->right = sortedArrayToBST(sortedArray, mid+1, end);

    return root;
}

void printPreorder(Node *root){
    if(root ==  NULL) return;
    cout<<root->data<<" ";
    printPreorder(root->left);
    printPreorder(root->right);
}

int main(){
    int n;
    cin>>n;
    int sortedArray[n];
    for(int i=0; i<n; i++){
        cin>>sortedArray[i];
    }

    Node* root = sortedArrayToBST(sortedArray, 0, n-1);
    printPreorder(root);
    return 0;
}