/*
    Build binary tree from inorder and postorder

    Algorithm
        1. Pick element from postorder and create a node(start from end)
        2. decreement preorder idx
        3. Search for picked element's pos in inorder
        4. call to build right subtree from inorder pos+1 to end
        5. call to build left subtree from inorder 0 to pos-1
        6. return the node
*/

#include "bits/stdc++.h"
using namespace std;


int search(int inorder[], int start, int end, int curr){
    for(int i=start; i<=end; i++){
        if(curr == inorder[i]) return i;
    }
    return -1;
}

struct Node{
    int data;
    Node *left, *right;
    Node (int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

Node* buildTree(int postorder[], int inorder[], int start, int end){
    static int idx = end;
    if(start > end){
        return NULL;
    };
    int curr = postorder[idx];
    idx--;
    Node *node = new Node(curr);
    if(start == end) {
        return node;
    }
    int pos = search(inorder, start, end, curr);
    node->right = buildTree(postorder, inorder, pos+1, end);
    node->left = buildTree(postorder, inorder, start, pos-1);
    return node;
    
}


void printPostorder(Node* root){
    if(root ==  NULL){
        return;
    }
    printPostorder(root->left);
    printPostorder(root->right);
    cout<<root->data<<" ";
}


int main(){
    int inorder[] = {5, 4, 7, 0, 6, 1}; 
    int postorder[] = {5, 4, 0, 1, 6, 7};
    int n = 6;
    Node* root = buildTree(postorder, inorder, 0, n-1);
    printPostorder(root);

    return 0;
}