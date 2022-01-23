// Search in BST
#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

Node* insertInBST(Node* root, int val) {
    if(root == NULL){
        return new Node(val);
    }

    if(val < root->data){
        root->left = insertInBST(root->left, val);
    }else {
        root->right = insertInBST(root->right, val);
    }

    return root;
}

void inorder(Node* root){
    if(root == NULL) return;

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

Node* searchInBST(Node* root, int val){
    if(root == NULL) return NULL;
    
    if(val == root->data){
        return root;
    }else if(val < root->data){
        return searchInBST(root->left, val);
    }else{
        return searchInBST(root->right, val);
    }
}

int main(){
    Node* root = NULL;
    root = insertInBST(root, 4);
    root = insertInBST(root, 2);
    root = insertInBST(root, 5);
    root = insertInBST(root, 1);
    root = insertInBST(root, 3);
    root = insertInBST(root, 6);

    inorder(root);
    cout<<endl;

    if(searchInBST(root, 3) == NULL){
        cout<<"Key doesn't exist"<<endl;
    }else{
        cout<<"Key exists"<<endl;
    }
    if(searchInBST(root, 7) == NULL){
        cout<<"Key doesn't exist"<<endl;
    }else{
        cout<<"Key exists"<<endl;
    }
    return 0;
}