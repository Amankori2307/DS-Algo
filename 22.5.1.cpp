// Detect and remove cycle
/*
    PROOF
    distace coverd by fastptr = m+n+(l*j)
    distace coverd by slowptr = m+n+(l*i)

    fastptr = 2(slowptr) //Because fast pointer's speed is 2 times of speed of slow pointer
    m+n+(l*j) = 2(m+n+(l*i))
    m+n+lj = 2m+2n+2li
    lj-2li = m+n
    l(j-2i) = m+n
    m = l(j-21) - n

    HERE,
        l = length of loop
        m = length from starting point of cycle to starting point of loop
        n = lenfrom from starting point of loop to current position of ptr
*/ 

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

void makeCycle(node* &head, int pos){
    node* temp = head;
    node*startNode;

    int count=1;
    while(temp->next!=NULL){
        if(count == pos){
            startNode = temp;
        }
        temp=temp->next;
        count++;
    }
    temp->next = startNode;
}

bool detectCycle(node* &head){
    node* slow = head;
    node* fast = head;

    while(fast!=NULL && fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;

        if(fast==slow){
            return true;
        }
    }
    return false;
}

void removeCycle(node* head){
    node* slow = head;
    node* fast = head;
    do{
        slow = slow->next;
        fast = fast->next->next;
    }while(fast!=slow);
    fast = head;
    while(fast->next != slow->next){
        fast = fast->next;
        slow = slow->next;
    }
    slow->next = NULL;
}


int main(){
    node* head = NULL;
    insertAtTale(head, 1);
    insertAtTale(head, 2);
    insertAtTale(head, 3);
    insertAtTale(head, 4);
    insertAtTale(head, 5);
    insertAtTale(head, 6);
    makeCycle(head, 3); 
    cout<<detectCycle(head)<<endl;
    removeCycle(head);
    cout<<detectCycle(head)<<endl;
    display(head);


    return 0;
}