/*
    Lowest Common Ancestor

            1
           / \
          2   3
         /   / \
        4   5   6

    lowest common ancestor of 5 and 6 is 3
    and lowest common ansestor of 4 and 5 is 1

    Approach
    1. get and store the path from root to node for both the nodes
        e.g 1->2->4 and 1->3->5
    2. compare both the paths and see what is the last common node and return it
*/



#include "bits/stdc++.h"
#include<vector>
using namespace std;

struct Node{
    int data;
    Node *right, *left;
    Node(int val){
        data = val;
        right = NULL;
        left= NULL;
    }
};

bool getPath(Node *root, int n, vector<int> &path){
    if(root == NULL) return false;
    path.push_back(root->data);
    if(root->data == n) return true;
    else if(getPath(root->left, n, path) || getPath(root->right, n, path)) return true;
   
    path.pop_back();
    return false;
}

void preorder(Node* root){
    if(root == NULL) return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}


void disp(vector<int> path){
    for(int i=0; i<path.size(); i++){
        cout<<path[i]<<" ";
    }
    cout<<endl;
}
int LCA(Node* root, int n1, int n2) {
    vector<int> path1, path2;
   
    if(!getPath(root, n1, path1) || !getPath(root, n2, path2)){
        return true;
    }
    int i = 0;
    while(i < path1.size() && i < path2.size()){
        if(path1[i] != path2[i]){
            return path1[i-1];
        }
        i++;
    }
    return -1;
}

int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->right->left = new Node(5);
    root->right->right = new Node(6);
    cout<<"(5, 6) Lowest Common Ancestor: "<<LCA(root, 5, 6)<<endl;
    cout<<"(4, 6) Lowest Common Ancestor: "<<LCA(root, 4, 6)<<endl;
    return 0;
}
