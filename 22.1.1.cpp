#include <iostream>
using namespace std;

class node{
    public:
        int data;
        node * next;

        node(int d){
            data = d;
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
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = n;
}

void insertAtHead(node* &head, int value){
    node* n = new node(value);
    n->next = head;
    head = n;
}

void display(node* head){
    node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

bool search(node* head, int key){
    node* temp=head;
    while(temp!=NULL){
        if(temp->data == key){
            return true;
        }
        temp = temp->next;
    }
    return false;
}
int main(){

    node* head = NULL;
    insertAtHead(head, 1);
    insertAtTale(head, 2);
    insertAtTale(head, 3);
    insertAtTale(head, 4);
    insertAtTale(head, 5);
    insertAtHead(head, 6);
    display(head);
    cout<<search(head, 7)<<endl;
    cout<<search(head, 6)<<endl;
    
    return 0;
}