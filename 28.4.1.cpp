/*
    Approach 1
        node > left child
        node < right child

        check this for all nodes

            4
           / \
          2   7
         /   / \
        1   3   8
        (NOTE: THIS APPROACH IS WRONG)

    Approach 2
        node > maxL(Max value from left subtree)
        node < minR(Min value from right subtree)

    Approach 3
        min allowed
        max allowed

        node > min allowed 
        node < max allowed
*/

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *left, *right;
    Node(int val){
        data = val;
        right = NULL;
        left = NULL;
    }
};

Node* insertInBST(Node* root, int key){
    if(root == NULL){
        return new Node(key);
    }

    if(key < root->data){
        root->left = insertInBST(root->left, key);
    }else{
        root-> right = insertInBST(root->right, key);
    }
    return root;
}

void printPreorder(Node* root){
    if(root == NULL) return;
    cout<<root->data<<" ";
    printPreorder(root->left);
    printPreorder(root->right);
}

bool isBST(Node* root, int minAllowed, int maxAllowed){
    if(root == NULL) return true;

    if(root->data > minAllowed && root->data < maxAllowed){
        return isBST(root->left, minAllowed, root->data) && isBST(root->right, root->data, maxAllowed);
    }
    return false;
}

int main() {
    Node* root = NULL;
    root = insertInBST(root,4);
    root = insertInBST(root, 2);
    root = insertInBST(root, 1);
    root = insertInBST(root,7);
    root = insertInBST(root,3); 
    root = insertInBST(root,5); 
    root = insertInBST(root, 6);

    printPreorder(root);
    cout<<endl<<"IS BST: "<<isBST(root, INT_MIN, INT_MAX)<<endl;



    // Constructing Invalid BST
    /*
            4
           / \
          2   7
         /   / \
        1   3   8
    */
    Node* root2 = new Node(4);
    root2->left = new Node(2);
    root2->right = new Node(7);
    root2->left->left = new Node(1);
    root2->right->left = new Node(3);
    root2->right->right = new Node(8);
    printPreorder(root2);
    cout<<endl<<"IS BST: "<<isBST(root2, INT_MIN, INT_MAX)<<endl;
    return 0;
}