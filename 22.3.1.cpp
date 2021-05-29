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

void reverse(node* &head){

    node* prev = NULL;
    node* curr = head;
    node* next;

    while(curr != NULL){
        next = curr->next;
        curr->next=prev;

        prev = curr;
        curr = next;
    }
    head = prev;    
}

node* reverseRecursive(node* head){
    if(head == NULL || head->next ==NULL){
        return head;
    }
    node* newHead  = reverseRecursive(head->next);
    head->next->next = head;
    head->next = NULL;
    return newHead;
}
int main(){
    node* head = NULL;
    insertAtTale(head, 1);
    insertAtTale(head, 2);
    insertAtTale(head, 3);
    insertAtTale(head, 4);
    display(head);
    reverse(head);
    display(head);
    head = reverseRecursive(head);
    display(head);
    return 0;
}