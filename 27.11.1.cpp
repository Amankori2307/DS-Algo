/*
    Left View Of a Binary Tree

            6
           / \
          3   7
         / \   \
        4   5   8
             \
              9  
    Right view of this tree would be 
    6, 7, 8, 9

    Approach - level order traversal with minimal changes
*/

#include "bits/stdc++.h"
#include<queue>
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

void leftView(Node* root){
    if(root == NULL) return;

    queue<Node*> currentLevel;
    queue<Node*> nextLevel;

    currentLevel.push(root);
    while(!currentLevel.empty()){
        Node* temp = currentLevel.front();
        cout<<currentLevel.front()->data<<" ";
        while(!currentLevel.empty()){
            temp = currentLevel.front();
            currentLevel.pop();
            if(temp->left) nextLevel.push(temp->left);
            if(temp->right) nextLevel.push(temp->right);
        }
        swap(currentLevel, nextLevel);
    }
}

int main(){
    /*
            6
           / \
          3   7
         / \   \
        4   5   8
             \
              9  
    */
    Node* root = new Node(6);
    root->left = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->left->right->right = new Node(9);
    root->right = new Node(7);
    root->right->right = new Node(8); 

    leftView(root);
    return 0;
}