/*
    Hight and Diameter of a binary tree


    Height:- It is the depth  of the tree's deepest node 
    Diameter:- Number of nodes in the longest path between any 2 levels
    Approach for calculating height:
        - if root is null reutrn 0
        - else 1 + max(leftSubtreeHeight, rightSubtreeHeight)

    Approach for calculating diameter:
        - if root is null return 0
        - else return max(currDiameter, leftSubtreeDiameter, rightSubtreeDiameter)
        - currDiameter = 1 + leftSubtreeHeight + rightSubtreeHeight
        
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

int heightOfTree(Node* root) {
    if(root == NULL) return 0;
    return 1 +  max(heightOfTree(root->left), heightOfTree(root->right));
}

int diameterOfTree(Node* root){
    if(root == NULL) return 0;

    int lHeight = heightOfTree(root->left);
    int rHeight = heightOfTree(root->right);
    int lDiameter = diameterOfTree(root->left);
    int rDiameter = diameterOfTree(root->right);
    cout<<"lHeight: "<<lHeight<<", rHeight: "<<rHeight<<", lDiameter: "<<lDiameter<<", rDiameter: "<<rDiameter<<endl;

    return max(1+lHeight+rHeight, max(lDiameter, rDiameter));
}

int main() {
  /*
                7
               / \
              8   11
             /   /  \
            10  12   34
                /      \
               13       5
              /
             14
            /
           15
    */
    Node* root = new Node(7);
    root->left = new Node(8);
    root->left->left = new Node(10);
    root->right = new Node(11);
    root->right->left = new Node(12);
    root->right->left->left = new Node(13);
    root->right->left->left->left = new Node(14);
    root->right->left->left->left->left = new Node(15);
    root->right->right = new Node(34);
    root->right->right->right = new Node(5);
    cout<<"Height: "<<heightOfTree(root)<<endl;
    cout<<"Diameter: "<<diameterOfTree(root)<<endl;
    return 0;
}