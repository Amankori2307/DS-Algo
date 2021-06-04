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
    if(head ==NULL){
        head = n;
        head->next = head;
        return;
    }


    node* tale = head;
    while(tale->next != head){
        tale = tale->next;
    }
    n->next = head;
    head = n;
    tale->next = head;
}

void display(node* &head){
    node* temp = head;
    if(head!=NULL){
        do{
            cout<<temp->data<<"->";
            temp = temp->next;
        }while(temp!=head);
    }
    cout<<"NULL\n";
}

void insertAtTale(node* &head, int val){
    if(head == NULL){
        insertAtHead(head, val);
        return;
    }
    
    node* n = new node(val);
    node* temp = head;
    while(temp->next!=head){
        temp = temp->next;
    }
    temp->next = n;
    temp->next->next = head;
}

void deleteAtHead(node* &head){
    if(head == NULL){
        cout<<"Nothing to delete\n";
        return;
    }
    else if(head->next == head){
        node* todelete = head;
        head = NULL;
        delete todelete;
        return;
    }


    node* temp = head;
    while(temp->next != head){
        temp = temp->next;
    }

    node* todelete = head;
    temp->next = head->next;
    head = head->next;

    delete todelete;

}
// 1 based indexing
void deletion(node* &head, int pos){
    if(pos == 1){
        deleteAtHead(head);
        return;
    }
    node* temp=head;
    int count = 1;
    while(count<pos-1){
        temp = temp->next;
        count++;
    }
    cout<<temp->data<<endl;
    node* nodeToDelete = temp->next;
    temp->next = nodeToDelete->next;
    delete nodeToDelete;
}

int main(){
    node* head = NULL;
    display(head);
    insertAtHead(head, 1);
    insertAtHead(head, 2);
    insertAtHead(head, 3);
    insertAtTale(head, 0);
    display(head);

    deletion(head, 1);
    display(head);

    deletion(head, 1);
    display(head);

    deletion(head, 1);
    display(head);

    deletion(head, 1);
    display(head);

    return 0;
}