/*
    Binary tree traversal

    1. Preorder Traversal
    2. Inorder Traversal
    3. Postorder Traversal

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

void printInorder(Node* root){
    if(root == NULL) return;
    printInorder(root->left);
    cout<<root->data<<" ";
    printInorder(root->right);
}

void printPostorder(Node* root){
    if(root == NULL) return;
    printPostorder(root->left);
    printPostorder(root->right);
    cout<<root->data<<" ";
}

int main(){
    /*
            7
           / \
          4   6
         /   / \
        5   0   1
    */

    Node* root = new Node(7);
    root->left = new Node(4);
    root->left->left = new Node(5);
    root->right = new Node(6);
    root->right->left = new Node(0);
    root->right->right = new Node(1);

    printPreorder(root);
    cout<<endl;
    printInorder(root);
    cout<<endl;
    printPostorder(root);
    cout<<endl;

    return 0;
}