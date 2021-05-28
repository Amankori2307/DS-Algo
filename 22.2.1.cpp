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
void deleteFromHead(node* &head){
    node* nodeToBeDeleted = head;
    head = head->next;
    delete nodeToBeDeleted;
}
void deleteNode(node* &head, int val){
    // If list is empty
    if(head==NULL){
        return;
    }
    // If value is present at head
    if(head->data == val){
        deleteFromHead(head);
        return;
    }
    node* temp = head;
    while(temp->next != NULL && temp->next->data != val){
        temp=temp->next;
    }
    // If item not found in the list
    if(temp->next == NULL){
        return;
    }
    node* nodeToBeDeleted = temp->next;
    temp->next = temp->next->next;
    delete  nodeToBeDeleted;
}

int main(){
    node* head = NULL;
    insertAtTale(head, 1);
    insertAtTale(head, 2);
    insertAtTale(head, 3);
    insertAtTale(head, 4);
    display(head);
    deleteFromHead(head);
    deleteNode(head, 2);
    deleteNode(head, 4);
    deleteNode(head, 5);
    display(head);
}