/*
    Problem: Recover BST

    2 nodes of a BST are swaped. Our task is to restore or correct the BST


    Approach
        - Inorder of a BST is always sorted
        - So we can use this propery to tackle this problem once we print inorder of this BST we will get an integer array which
          no longer sorted because 2 nodes has been swaped
          
        - so now we have converted our problem from restoring a BST to restoring a sorted array
        - 

        Case 1:
            - Swapped elements are not adjecent to each other
            e.g. original = {1,2,3,4,5,6,7,8}, after swapping = {1,8,3,4,5,6,7,2};
        
            First: previous node where 1st number < previous [8]
            Mid: node where 1st number < previous [3]
            Last" 2nd node where 1st number < previous [2]

            - Swap first with last 
        Case 2:
            - Swapped elements are adjecent to each other
            e.g. original = {1,2,3,4,5,6,7,8}, after swapping = {1,2,4,3,5,6,7,8};

            First: previous node where 1st number < previous [4]
            Mid: node where 1st number < previous [3]
            Last" 2nd node where 1st number < previous [NULL]

            - Swap mid with first

*/ 

#include <iostream>
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
void calcPointers(Node* root, Node **first, Node **mid, Node **last, Node **prev){
    if(root == NULL){
        return;
    }

    calcPointers(root->left, first, mid, last, prev);
    if(*prev && root->data < (*prev)->data){
        if(!*first){
            *first = *prev;
            *mid = root;
        }else{
            *last = root;
        }
    }
    *prev = root;
    calcPointers(root->right, first, mid, last, prev);
}

void swap(int *a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
 
void restoreBst(Node* root){
    Node *first, *mid, *last, *prev;
    first = NULL;
    mid = NULL;
    last = NULL;
    prev = NULL;
    calcPointers(root, &first, &mid, &last, &prev);
    // Case 1
    if(first && last){
        swap(&(first->data), &(last->data));
    }
    // case 2
    else if(first != NULL && mid != NULL){
        swap(&(first->data), &(mid->data));
    }

}

void printInorder(Node* root){
    if(root ==  NULL) return;
    printInorder(root->left);
    cout<<root->data<<" ";
    printInorder(root->right);
}

void printPreorder(Node* root){
    if(root == NULL) return;
    cout<<root->data<<" ";
    printPreorder(root->left);
    printPreorder(root->right);
}

int main() {
    /*
                6
               / \
              9   3
             / \   \
            1   4   13

    */
    Node* root = new Node(6);
    root->left = new Node(9);
    root->right = new Node(3);
    root->left->left = new Node(1);
    root->left->right = new Node(4);
    root->right->right = new Node(14);

    printInorder(root);
    cout<<endl;
    restoreBst(root);
    printInorder(root);
    cout<<endl;
    
    return 0;
}