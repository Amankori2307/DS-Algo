/*
    Level order traversal

    Approach
    - Use two queues currLevel and nextLevel
    - check if root = NULL then return
    - else push root to the currLevel
    - then define a while loop | cond = currLevel != empty
    - inside loop get print currlevel.front and then pop it
    - push left and right child of curr to nextLevel
    - swap currLevel and nextLevel if currLevel is empty
*/ 

#include "bits/stdc++.h"
#include <queue>
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

void levelOrderTraverse(Node* root){
    if(root == NULL) return;

    queue<Node*> currentLevel;
    queue<Node*> nextLevel;
    currentLevel.push(root);
    while(!currentLevel.empty()){
        Node* curr = currentLevel.front();
        currentLevel.pop();
        cout<<curr->data<<" ";
        if(curr->left) nextLevel.push(curr->left);
        if(curr->right) nextLevel.push(curr->right);
        if(currentLevel.empty()){
            swap(currentLevel, nextLevel);
        }
    }
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
    root->right->left = new Node(12);
    root->right->right = new Node(34);

    levelOrderTraverse(root);
    return 0;
}