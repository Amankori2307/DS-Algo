#include <iostream>
using namespace std;

class node{
    public:
        int data;
        node* next;

        node(int val){
            data = val;
            next = NULL;
        }

};
void insertAtHead(node* &head, int val){
    node* n = new node(val);
    n->next = head;
    head = n;
}

void insertAtTale(node* &head, int val){
    node* n = new node(val);
    if(head == NULL){
        insertAtHead(head, val);
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
    cout<<"NULL\n";
}

int length(node* head){
    node* temp=head;
    int count =0;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
}
void kappend(node* &head, int k){
    int l = length(head);
    if( k >= l){
        return;
    }
    node* newTail;
    node* newHead;
    node* tail=head;
    int count = 1;
    while(tail->next!=NULL){
        if(count == l-k){
            newTail = tail;
            newHead = tail->next;
        }
        tail = tail->next;
        count++;
    }
    tail->next = head;
    newTail->next = NULL;
    head = newHead;
}
int main(){
    node* head = NULL;
    insertAtTale(head, 1);
    insertAtTale(head, 2);
    insertAtTale(head, 3);
    insertAtTale(head, 4);
    insertAtTale(head, 5);
    insertAtTale(head, 6);
    insertAtHead(head, 0);
    display(head);
    kappend(head, 4);
    display(head);
    kappend(head, 90);
    display(head);


    return 0;
}