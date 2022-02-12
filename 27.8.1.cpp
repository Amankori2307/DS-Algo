/*
    Sum Replacement:- Replace the value of each node with the sum of all subtree nodes and itself


    Approach:
        - if root is NULL return NULL
        - else 
            - sumReplacement(left subtree)
            - sumReplacement(right subtree)
            - sum = root->data
            - if left subtree is there then add its value to sum and same with right subtree
            - then set current node value = sum
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

void sumReplacement(Node* root){
    if(root == NULL) return;
    sumReplacement(root->left);
    sumReplacement(root->right);
    int sum = root->data;
    if(root->left){
        sum += root->left->data;
    }
    if(root->right){
        sum += root->right->data;
    }
    root->data = sum;
}

void printPreorder(Node* root){
    if(root == NULL) return;
    cout<<root->data<<" ";
    printPreorder(root->left);
    printPreorder(root->right);
}

int main() {
    /*
            1
           / \
          2   3
         /   / \
        4   5   6
    */
    Node* root = new Node(1);
    root->left = new Node(2);
    root->left->left = new Node(4);
    root->right = new Node(3);
    root->right->left = new Node(5);
    root->right->right = new Node(6);
    printPreorder(root);
    cout<<endl;
    sumReplacement(root);
    printPreorder(root);

    return 0;
}