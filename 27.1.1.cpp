/*
    Introduction to binary tree

    Properties of binary tree
    - Maximum nodes at level L = 2^L
    e.g. L = 0, nodes = 1
        L = 1, nodes = 2 and so on
    - Maximum nodes in a tree of height H = (2^H) -1
        - Height = no of levesl 
        for L = [0,1,2], H = 3, no of nodes = 1+2+4 = 7 = (2^H)-1

    - For N nodes, minimum possible height of minimum number of levels are log base 2(N+1)
    - A binary tree with L leaves has at least log base 2(N+1)+1 number of levels
*/ 

#include "bits/stdc++.h"
using namespace std;

struct Node{
    int data;
    Node *left, *right;
    Node(int val){
        data = val;
        right = NULL;
        left = NULL;
    }
};

void printPreorder(Node* root){
    if(root == NULL) return;
    cout<<root->data<<" ";
    printPreorder(root->left);
    printPreorder(root->right);
}
int main() {
    /*
        3
       / \
      2   5
    */

    Node* root = new Node(3);
    root->left = new Node(2);
    root->right = new Node(5);

    printPreorder(root);
    return 0;
}