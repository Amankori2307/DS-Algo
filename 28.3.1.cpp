// /*
//     BUILD BST FROM PREORDER

//      Approach

// */

// #include <iostream>
// #include<climits>
// using namespace std;

// struct Node
// {
//     int data;
//     Node *left;
//     Node *right;

//     Node(int val)
//     {
//         data = val;
//         left = NULL;
//         right = NULL;
//     }
// };


// Node* constructBST(int preorder[], int* preorderIdx, int key, int min, int max, int n){
//     if(*preorder >= n){
//         return NULL;
//     }

//     Node* root = NULL;
//     if(key > min && key < max){
//         root = new Node(key); 
//         cout<<key<<" ";
//         *preorderIdx = *preorderIdx + 1;
//         if(*preorderIdx < n){
//             root->left = constructBST(preorder, preorderIdx, preorder[*preorderIdx], min, key, n);
//         }
//         if(*preorderIdx < n){
//             root->right = constructBST(preorder, preorderIdx, preorder[*preorderIdx], key, max, n);
//         }
//     }

//     return root;
// }

// void printPreorder(Node* root){
//     if(root == NULL) return;
//     cout<<root->data<<" ";
//     printPreorder(root->left);
//     printPreorder(root->right);
// }

// int main()
// {
//     /*
//                 10
//                /  \
//               2   13
//              /    /
//             1    11

//     */
//     int n = 5;
//     int preorder[] = {10, 2, 1, 13, 11};
//     int preorderIdx = 0;
//     Node* root = constructBST(preorder, &preorderIdx, preorder[preorderIdx], INT_MIN, INT_MAX, n);
//     cout<<"Hello World"<<endl;
//     cout<<root<<endl;
//     cout<<root->data <<endl;
//     printPreorder(root);

//     return 0;
// }


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

Node* constructBST(int preorder[], int* preorderIdx, int key, int min, int max, int n){
    if(*preorderIdx >= n){
        return NULL;
    }

    Node* root = NULL;
    if(key > min && key < max){
        root = new Node(key);
        *preorderIdx = *preorderIdx + 1;

        if(*preorderIdx  < n) {
            root->left = constructBST(preorder, preorderIdx, preorder[*preorderIdx], min, key, n);
        }
        if(*preorderIdx < n) {
            root->right = constructBST(preorder, preorderIdx, preorder[*preorderIdx], key, max, n);
        }

    }
    return root;
} 

void printPreorder(Node* root){
    if(root == NULL) return;
    cout<<root->data<<" ";
    printPreorder(root->left);
    printPreorder(root->right);
}

void printInorder(Node* root){
    if(root == NULL) return;
    printInorder(root->left);
    cout<<root->data<<" ";
    printInorder(root->right);
}

int main() {
    int preorder[] = {10, 2, 1, 13, 11};
    int n = 5;
    int preorderIdx = 0;
    Node* root = constructBST(preorder, &preorderIdx, preorder[preorderIdx], INT_MIN, INT_MAX, n);
    printPreorder(root);
    cout<<"\n";
    printInorder(root);
    return 0;
}