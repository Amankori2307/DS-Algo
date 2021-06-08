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
    if(head == NULL){
        head = n;
        return;    
    }
    n->next = head;
    head = n;
}
void insertAtTale(node* &head, int val){

    if(head==NULL){
        insertAtHead(head, val);
        return;
    }
    node* n = new node(val);
    node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = n;
}

void display(node* &head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL\n";
}

node* oddeven(node* head){
    if(head->next == NULL){
        return head;
    } 

    node* tempNode = head;
    node* prev = oddeven(head->next);
    if(tempNode->data %2 != 0){
        tempNode->next = prev;
        return tempNode;
    }else{
        node* temp = prev;
        while(temp->next!=NULL){
            temp = temp->next;
        }
        // cout<<temp->data<<" "<<tempNode->data<<endl;
        tempNode->next = NULL;
        temp->next = tempNode;
        return prev;
    }


}

node* oddeven2(node* head){
    node* odd = head;
    node* even = head->next;
    node* evenStart = even;

    while(odd ->next != NULL and even->next != NULL){
        odd->next = even->next;
        odd = odd->next;
        even->next = odd->next;
        even=even->next;
    }

    odd->next = evenStart;
    return head;

}   

int main(){
    node* head = NULL;
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int temp;`
        cin>>temp;
        insertAtTale(head, temp);
    }
    display(head);

    // node* newHead = oddeven(head);
    // display(newHead);

    
    node* newHead = oddeven2(head);
    display(newHead);
    return 0;
}