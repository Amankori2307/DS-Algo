/*
    Build Binary tree from inorder and preorder

    Algorithm
        1. Pick element from preorder and create a node
        2. Increment preorder idx
        3. Search for picked element's pos in inorder
        4. call to build left subtree from inorder 0 to pos-1
        5. call to build right subtree from inorder pos+1 to end
        6. return the node
*/



#include "bits/stdc++.h"
using namespace std;

struct Node{
    int data;
    Node *left, *right;
    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

int binarySearch(int inorder[], int key, int n){
    int s = 0;
    int e = n;
    int mid;

    while(s<=e){
        mid = (s+n)/2;
        if(key == inorder[mid]){
            return mid;
        }else if(key > inorder[mid]){
            s = mid+1;
        }else {
            e = mid-1;
        }
    }
    return -1;
}

int search(int inorder[], int start, int end, int curr){
    for(int i=start; i<=end; i++){
        if(curr == inorder[i]) return i;
    }
    return -1;
}

Node* buildTree(int preorder[], int inorder[], int start, int end){
    static int idx = 0;
    if(start > end) {
        return NULL;
    }

    int curr = preorder[idx];
    idx++;
    Node *node = new Node(curr);
    if(start == end) {
        return node;
    }
    int pos = search(inorder, start, end, curr);
    node->left = buildTree(preorder, inorder, start, pos-1);
    node->right = buildTree(preorder, inorder, pos+1, end);
    return node;
}

void printPreorder(Node* root){
    if(root == NULL) return;
    cout<<root->data<<" ";
    printPreorder(root->left);
    printPreorder(root->right);
}

void printInorder(Node* root){
    if(root == NULL) return;
    printInorder(root->left);
    cout<<root->data<<" ";
    printInorder(root->right);
}
int main() {

     /*
            7
           / \
          4   6
         /   / \
        5   0   1
    */

   int preorder[] = {7, 4, 5, 6, 0, 1}; 
   int inorder[] = {5, 4, 7, 0, 6, 1}; 
   int n = 6;
   int idx = 0;
   Node* root = buildTree(preorder, inorder, 0, n-1);
   printPreorder(root);
   cout<<endl;
   printInorder(root);
    return 0;
}

