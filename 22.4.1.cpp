#include<iostream>
using namespace std;

class node{
    public:
        int data;
        node* next;

        node(int d){
            data=d;
            next=NULL;
        }
};

void insertAtTale(node* &head, int value){
    node* n = new node(value);
    if(head == NULL){
        head = n;
        return;
    }

    node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = n;
}


void display(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

node* reverseK(node* head, int k){
    node* prevptr = NULL;
    node* currptr = head;
    node* nextptr;

    int count = 0;
    while(currptr != NULL && count<k){
        nextptr = currptr->next;
        currptr->next = prevptr;
        prevptr = currptr;
        currptr = nextptr;
        count++;
    }
    if(nextptr != NULL)
        head->next = reverseK(nextptr, k);
    return prevptr;

}

int main(){
    node* head = NULL;
    int n, k;
    cin>>n>>k;
    for(int i=0; i<n; i++){
        insertAtTale(head, i+1);
    }
    node *temphead = reverseK(head, k);
    display(temphead);
    return 0;
}