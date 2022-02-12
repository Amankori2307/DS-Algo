/*
    Count all the nodes in a binary tree

    Approch
        if root is null return 0
        else return 1 + noOfNodes(root->left) + noOfNodes(root->right)
*/

#include "bits/stdc++.h"
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

int noOfNodes(Node *root){
    if(root == NULL) return 0;
    return 1 + noOfNodes(root->left) + noOfNodes(root->right);
}

int main(){
    /*
                7
               / \
              8   11
             /   /  \
            10  12   34
    */
    Node* root = new Node(7);
    root->left = new Node(8);
    root->left->left = new Node(10);
    root->right = new Node(11);
    root->right->left = new Node(10);
    root->right->right = new Node(34);

    cout<<"No of nodes: "<<noOfNodes(root)<<endl;
    return 0;
}