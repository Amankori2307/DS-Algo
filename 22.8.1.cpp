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

int intersectionPoint(node* &head1, node* &head2){
    int l1 = length(head1);
    int l2 = length(head2);
    int d;
    node* ptr1;
    node* ptr2;

    if(l1>l2){
        d = l1-l2;
        ptr1 = head1;
        ptr2 = head2;
    }else{
        d = l2-l1;
        ptr1 = head2;
        ptr2 = head1;
    }

    while(d){
        ptr1 = ptr1->next;
        d--;
    }

    while(ptr1->next != NULL && ptr2->next != NULL){
        if(ptr1 == ptr2){
            return ptr1->data;
        }
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }
    return -1;
}

void intersect(node* &head1, node* &head2, int point){
    node* temp1 = head1;
    while(point){
        temp1 = temp1->next;
        point--;
    }
    node* temp2 = head2;
    while(temp2->next != NULL){
        temp2 = temp2->next;
    }
    temp2->next = temp1;
}
int main(){
    node* head1 = NULL;
    node* head2 = NULL;
    insertAtTale(head1, 1);
    insertAtTale(head1, 2);
    insertAtTale(head1, 3);
    insertAtTale(head1, 4);
    insertAtTale(head1, 5);
    insertAtTale(head1, 6);
    insertAtTale(head1, 7);

    insertAtTale(head2, 1);
    insertAtTale(head2, 2);
    insertAtTale(head2, 3);
    insertAtTale(head2, 4);
    insertAtTale(head2, 5);
    insertAtTale(head2, 6);
        


    display(head1);
    display(head2);
    cout<<"\n\n";
    intersect(head1, head2, 3);
    
    display(head1);
    display(head2);
    cout<<intersectionPoint(head1, head2)<<endl;


    return 0;
}