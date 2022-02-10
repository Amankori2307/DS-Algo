/*
    CATALAN NUMBERS

    Catalan numbers are a sequence of natural numbers that occur in various counting problems, often involving
    recursively defined objects
    

    Applications of Catalan no:-
    - Possible BSTs
    - Paranthesis / bracket combination
    - Possible forests
    - Ways of triangulation
    - Passible path in matrix
    - Dividing a circle using N chords
    - Dyck of words of given length and much more


*/ 

#include <iostream>
#include <vector>
using namespace std;

int catalan(int n){
    if(n == 0) return 1;

    int no = 0;
    for(int i=0; i<=n-1; i++){
        no += catalan(i) * catalan(n-1-i);
    }
    return no;
}

struct Node {
    int data;
    Node *right, *left;
    Node(int val){
        data = val;
        right = NULL;
        left = NULL;
    }
};

// Possible BSTs
vector<Node*> constructBST(int start, int end){
    vector<Node*> trees;
    if(start > end) {
        trees.push_back(NULL);
        return trees;
    }

    for(int i=start; i<=end; i++){
        vector<Node*> leftSubTrees = constructBST(start, i-1);
        vector<Node*> rightSubTrees = constructBST(i+1, end);
        for(int j=0; j<leftSubTrees.size(); j++){
            Node* left = leftSubTrees[j];
            for(int k=0; k<rightSubTrees.size(); k++){
                Node* right = rightSubTrees[k];
                Node* root = new Node(i);
                root->right = right;
                root->left = left;
                trees.push_back(root);
            }
        }
    }
    return trees;
}

void printPreorder(Node* root){
    if(root == NULL) return;
    cout<<root->data<<" ";
    printPreorder(root->left);
    printPreorder(root->right);
}

int main() {
    vector<Node*> trees = constructBST(1, 3);
    for(int i=0; i<trees.size(); i++){
        cout<<i+1<<": ";
        printPreorder(trees[i]);
        cout<<endl;
    }
    return 0;
}