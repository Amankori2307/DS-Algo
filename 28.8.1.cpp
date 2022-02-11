/*
    ARE BST IDENTICAL?

    Approach
        1. If both empty, return true
        2. If both nodes are non-empty
            - Compare node data(should be equal)
            - check if left subtree is identical
            - check if right subtree is identical 
        3. else return false

    
*/ 


#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *right, *left;
    Node(int val){
        data = val;
        right = NULL;
        left = NULL;
    }
};

bool isIdenticle(Node* root1, Node* root2){
    if(root1 == NULL && root2 == NULL) return true;
    
    if(root1 != NULL && root2 != NULL){
        return (root1->data == root2->data) && isIdenticle(root1->left, root2->left) && isIdenticle(root1->right, root2->right);
    }

    return false;

}

int main() {
    /*
            5
           / \
          3   8
         /   / \
        2   7   9
    */

    Node* root1 = new Node(5);
    root1->left = new Node(3);
    root1->left->left = new Node(2);
    root1->right = new Node(8);
    root1->right->right = new Node(9);
    root1->right->left = new Node(7);

    Node* root2 = new Node(5);
    root2->left = new Node(3);
    root2->left->left = new Node(2);
    root2->right = new Node(8);
    root2->right->right = new Node(9);
    root2->right->left = new Node(7);

    cout<<"Are Identicle: "<<isIdenticle(root1, root2);

    return 0;
}