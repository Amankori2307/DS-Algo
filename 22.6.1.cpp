#include<iostream>
using namespace std;

class node{
    public:
        int data;
        node* next;
        node* prev;

        node(int d){
            data = d;
            next = NULL;
            prev = NULL;
        }
};
void inserAtHead(node* &head, int value){
    node* n = new node(value);
    
    n->next = head;
    if(head != NULL){
        head->prev = n;
    } 
    head = n;
}
void insertAtTale(node* &head, int value){
    if(head == NULL){   
        inserAtHead(head, value);
        return;
    }
    node* n = new node(value);
    node* temp = head;
    while(temp->next!=NULL){
        temp=temp->next;
    }

    temp->next = n;
    n->prev = temp;
}
void deleteAtHead(node* &head){
    if(head == NULL){
        cout<<"No node at head to delete"<<endl;
    }else{
        node* nodeToDelete = head;
        head = head->next;
        head->prev = NULL;

        delete nodeToDelete;
    }
}

void deleteNode(node* &head, int pos){
    if(pos == 1){
        deleteAtHead(head);
        return;
    }
    node* temp = head;
    int count = 1;
    while(temp!= NULL && count != pos){
        temp = temp->next;
        count++;
    }
    if(count == pos){

        temp->prev->next = temp->next;
        if(temp->next != NULL){
            temp->next->prev = temp->prev;
        }
        delete temp;
    }else{
        cout<<"Position Out Of Range"<<endl;
    }
}
void display(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<"NULL\n";
}
int main(){
    node* head = NULL;
    insertAtTale(head, 1);
    insertAtTale(head, 2);
    insertAtTale(head, 3);
    insertAtTale(head, 4);
    inserAtHead(head, 0);
    display(head);
    deleteAtHead(head);
    display(head);
    deleteNode(head, 2);
    display(head);
    deleteNode(head, 5);
    display(head);

    return 0;
}