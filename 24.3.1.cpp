#include<iostream>
#include<stack>
using namespace std;

// Implementing queue using stack

class queue{
    stack<int> st1;
    stack<int> st2;
    public:
        void push(int val){
            st1.push(val);
        }

        int pop(){
            if(st1.empty() && st2.empty()){
                cout<<"Queue is empty"<<endl;
                return -1;
            }
            else if(st2.empty()){
                while(!st1.empty()){
                    st2.push(st1.top());
                    st1.pop();
                } 
            }
            int el = st2.top(); 
            st2.pop();
            return el;
        }
        bool empty(){
            return st1.empty() && st2.empty();
        }
};

int main(){

    queue q;
    q.push(1);
    q.push(2);
    cout<<q.pop()<<endl;
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;



    return 0;
}