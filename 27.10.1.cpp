/*
    Right View Of a Binary Tree

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
#include <queue>
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

void rightView(Node *root){
    if(root == NULL) return;

    queue<Node*> currentLevel;
    queue<Node*> nextLevel;
    currentLevel.push(root);

    while(!currentLevel.empty()){
        Node *temp;
        while(!currentLevel.empty()){
            temp = currentLevel.front();
            currentLevel.pop();
            if(temp->left) nextLevel.push(temp->left);
            if(temp->right) nextLevel.push(temp->right);
        }
        cout<<temp->data<<" ";
        swap(currentLevel, nextLevel);
    }
}

int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->left->right = new Node(4);
    root->right = new Node(3);

    rightView(root);
    return 0;
}
