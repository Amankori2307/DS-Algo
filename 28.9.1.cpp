/*
    Lasgest BST in a binary tree

    Problem: Return the size of the largest BST in a binary tree

    Approach:
        For each node store the following infor
        1. Min in subtree
        2. Max in subtree
        3. subtree size
        4. size of largest BST
        5. is BST

        Recursively traverse in a bottom up manner & find out the size of largest BST
*/ 


#include <iostream>
#include<climits>
using namespace std;

struct Node{
    int data;
    Node *left, *right;
    Node(int val) {
        data = val;
        right = NULL;
        left = NULL;
    }
};


struct Info{
    int size;
    int max;
    int min;
    int ans;
    bool isBST;
    
};



Info largestBSTInBT(Node* root){
    if(root == NULL) {
        return {0, INT_MIN, INT_MAX, 0, true};
    } 
    else if(root->left == NULL && root->right == NULL){
        return {1, root->data, root->data, 1, true};    
    }

    Info leftInfo = largestBSTInBT(root->left);
    Info rightInfo = largestBSTInBT(root->right);
    
    Info curr;
    curr.size = (1 + leftInfo.size + rightInfo.size);
    if(leftInfo.isBST && rightInfo.isBST && root->data > leftInfo.max && root->data < rightInfo.min){
        curr.isBST = true;
        curr.max = max(root->data,max(rightInfo.max, leftInfo.max));
        curr.min = min(root->data,min(rightInfo.max, leftInfo.max));
        curr.ans = curr.size;
        return curr;
    }
    curr.isBST = false;
    curr.ans = max(leftInfo.ans, rightInfo.ans);
    return curr;
}

int main() {
    /*
                10
               /  \
              5    15
             /     / \
            6     11  20
            Ans: 3
    */ 

    Node* root = new Node(10);
    root->left = new Node(5);
    root->left->left = new Node(6);
    root->right = new Node(15);
    root->right->left = new Node(11);
    root->right->right = new Node(20);

    cout<<"Size of largest BST: "<<largestBSTInBT(root).ans<<endl;
    return 0;
}