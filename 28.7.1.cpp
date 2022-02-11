#include<iostream>
#include <stack>
using namespace std;

struct Node{
    int data;
    Node *right, *left;
    Node(int val) {
        data = val;
        right = NULL;
        left = NULL;
    }
};

void zigZagTraverse(Node* root){
    stack<Node*> currLvl;
    stack<Node*> nextLvl;
    bool leftToRight = true;

    currLvl.push(root);
    while(!currLvl.empty()){
        Node* temp = currLvl.top();
        currLvl.pop();
        
        if(temp != NULL) {
            cout << temp->data << " ";
        }        
        if(leftToRight){
            if(temp->left){
                nextLvl.push(temp->left);
            }
            if(temp->right){
                nextLvl.push(temp->right);
            }
        }else{
            if(temp->right){
                nextLvl.push(temp->right);
            }
            if(temp->left){
                nextLvl.push(temp->left);
            }
        }

        if(currLvl.empty()){
            leftToRight = !leftToRight;
            swap(currLvl, nextLvl);
        }
    }
}


void printPreorder(Node* root) {
    if(root == NULL) return ;
    cout<<root->data<<" ";
    printPreorder(root->left);
    printPreorder(root->right);
}
int main() {

    /*
            5
           / \
          2   10
         / \   \
        1   3   11
               /  \
              6    19

    ZIG ZIG: 5 10 2 1 3 11 19 6
    */         
    Node* root = new Node(5);
    root->left = new Node(2);
    root->right = new Node(10);
    root->left->left = new Node(1);
    root->left->right = new Node(3);
    root->right->right = new Node(11);
    root->right->right->left = new Node(6);
    root->right->right->right = new Node(19);

    // printPreorder(root);
    zigZagTraverse(root);

    return 0;
}