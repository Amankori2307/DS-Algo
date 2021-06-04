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

node* merge(node* &head1, node* &head2){
    node* ptr1 = head1;
    node* ptr2 = head2;
    node* dummy = new node(-1); //dummy Node
    node* ptr3 = dummy;

    
    while(ptr1!=NULL && ptr2!=NULL){
        if(ptr1->data < ptr2->data){
            ptr3->next = ptr1;
            ptr1=ptr1->next;
        }else{
            ptr3->next = ptr2;
            ptr2 = ptr2->next;
        }
        ptr3 = ptr3->next;
    }
    if(ptr1!=NULL){
        ptr3->next = ptr1;
    }
    
    if(ptr2!=NULL){
        ptr3->next = ptr2;
    }

    return dummy->next;
}


node* mergeRecurrsion(node* &head1, node* &head2){
    if( head1 == NULL){
        return head2;
    }
    if(head2 == NULL){
        return head1;
    }
    cout<<head1->data<<" "<<head2->data<<endl;
        
    node* newHead;
    node* next;
    if(head1->data < head2->data){
        newHead = head1;
        next = mergeRecurrsion(head1->next, head2);
    }else{
        newHead = head2;
        next = mergeRecurrsion(head1, head2->next);
    }
    newHead->next =  next;
    return newHead;

}
    

int main(){
    node* head1 = NULL;
    node* head2 = NULL;
    int n1;
    cin>>n1;
    for(int i=0; i<n1; i++){
        int val;
        cin>>val;
        insertAtTale(head1,val);
    }

    int n2;
    cin>>n2;
    for(int i=0; i<n2; i++){
        int val;
        cin>>val;
        insertAtTale(head2,val);
    }


    display(head1);
    display(head2);

    // node* newHead = merge(head1, head2);
    // display(newHead);


    node* newHead2 = mergeRecurrsion(head1, head2);
    display(newHead2);

    return 0;
}