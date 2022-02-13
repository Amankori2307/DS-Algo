/*
    Balanced Height Tree

    For each node, the difference between the heights of the left subtree and right subtree <= 1

    1. check if left subtree and right subtree are balanced
    2. calc left and right subtree's height 
    3. if (abs(rH, lH) <= 1) return true else return false;
*/


#include "bits/stdc++.h"
using namespace std;

struct Node{
    int data;
    Node *right, *left;
    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

int height(Node* root){
    if(root ==  NULL) return 0;
    return 1 + max(height(root->left), height(root->right));
}

bool isBalanced(Node* root){
    if(root == NULL) return true;

    if(!isBalanced(root->left) || !isBalanced(root->right)){
        return false;
    }

    int lHeight = height(root->left);
    int rHeight = height(root->right);
    if(abs(lHeight-rHeight <= 1)){
        return true;
    }else{
        return false;
    }
}

// Improved version
bool isBalanced2(Node* root, int *height){
    if(root == NULL){
         return true;
    }

    int lh = 0, rh = 0;
    if(!isBalanced2(root->left, &lh)){
        return false;
    } 
    if(!isBalanced2(root->right, &rh)){
        return false;
    } 

    *height = 1 + max(lh, rh);
    if(abs(lh-rh) <= 1) return true;
    else return false;
}
int main(){
    int h1 = 0, h2 = 0;
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    cout<<"Is Balanced: "<<isBalanced(root)<<endl;
    cout<<"Is Balanced2: "<<isBalanced2(root, &h1)<<endl;


    Node* root2 = new Node(1);
    root2->left = new Node(2);
    root2->right = new Node(3);
    root2->right->left = new Node(4);
    root2->right->left->left = new Node(5);
    root2->right->left->left->left = new Node(6);
    cout<<"Is Balanced: "<<isBalanced(root2)<<endl;
    cout<<"Is Balanced2: "<<isBalanced2(root2, &h2)<<endl;

    return 0;
}