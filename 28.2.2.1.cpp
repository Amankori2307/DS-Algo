// DELETE IN BST
/*
    CASE 1:
        Deleting leaf node, in this case you can just directly delete the node
    CASE 2:
        Deleting node with one child, in this case the child node will replace the deleted node 
    CASE 3:
        Deleting node with two child, if a node two child(left, right), in this case we have to perfrom a multiple step procedure
        STEP 1: Find inorder successor of the element which is being deleted
        STEP 2: Replace node with inorder successor node
        STEP 3: Delete node

        (NOTE: Inorder successor of a node is the node which will be printed next to the node being deleted in the inorder traversal of the tree)
*/


#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data = val;
        right = NULL;
        left = NULL;
    }
};

Node* insertInBST(Node* root, int val){
    if(root == NULL) return new Node(val);
    if(val < root->data){
        root->left = insertInBST(root->left, val);
    }else{
        root->right = insertInBST(root->right, val);
    }
}

void inorder(Node* root){
    if(root == NULL) return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

Node* inorderSucc(Node* root){
    Node* curr = root;
    if(curr && curr->left != NULL){
        curr = curr->left;
    }
    return curr;
}

Node* deleteInBST(Node* root, int key){
    if(key < root->data){
        root->left = deleteInBST(root->left, key);
    }else if(key > root->data){
        root->right = deleteInBST(root->right, key);
    }else{
        if(root->left == NULL){
            Node* temp = root->right;
            free(root);
            return temp;
        }else if(root->right == NULL){
            Node* temp = root->left;
            free(root);
            return temp;
        }else {
            Node* temp = inorderSucc(root->right);
            root->data = temp->data;
            root->right = deleteInBST(root->right, temp->data);
        }
    }
    return root; 
}
int main(){
    Node* root = NULL;
    root = insertInBST(root, 4);
    root = insertInBST(root, 2);
    root = insertInBST(root, 5);
    root = insertInBST(root, 1);
    root = insertInBST(root, 3);
    root = insertInBST(root, 6);
    root = insertInBST(root, 7);

    Node* is = inorderSucc(root->right);
    cout<<"INORDER SUCCESSOR OF 4 "<<is->data<<endl;

    inorder(root);
    cout<<endl;
    root = deleteInBST(root, 5);
    inorder(root);
    cout<<endl;
    root = deleteInBST(root, 1);
    inorder(root);
    cout<<endl;



    Node* root2 = NULL;
    root2 = insertInBST(root2, 4);
    root2 = insertInBST(root2, 13);
    root2 = insertInBST(root2, 12);
    root2 = insertInBST(root2, 10);
    root2 = insertInBST(root2, 9);
    root2 = insertInBST(root2, 8);
    root2 = insertInBST(root2, 7);
    Node* iss = inorderSucc(root2->right);
    cout<<"INORDER SUCCESSOR OF 4 "<<iss->data<<endl;

    return 0;
}