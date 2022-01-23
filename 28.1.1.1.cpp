#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *left;
    Node *right;
    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

Node* insertBST(Node* root, int val){
    if(root == NULL){
        return new Node(val);
    }

    if(val < root->data){
        root->left = insertBST(root->left, val);
    }else {
        root->right = insertBST(root->right, val);
    }

    return root;
}


void inorder(Node* root){
    if(root == NULL) return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

int main(){
    Node* root = insertBST(NULL, 7);
    root = insertBST(root, 5);
    root = insertBST(root, 4);
    root = insertBST(root, 13);
    root = insertBST(root, 2);
    inorder(root); 

    return 0;
}