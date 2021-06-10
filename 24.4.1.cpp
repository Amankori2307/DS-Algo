#include<iostream>
#include<queue>
using namespace std;

class stack{
    queue<int> q1;
    queue<int> q2;

    public:
        void push(int val){
            q2.push(val);

            // Transfer all value of q1 in q 2
            while(!q1.empty()){
                q2.push(q1.front());
                q1.pop();
            }

            // swap list
            while(!q2.empty()){
                q1.push(q2.front());
                q2.pop();
            }
        }

        void pop(){
            if(q1.empty()){
                cout<<"Queue is empty"<<endl;
                return;
            }
            q1.pop();
        }
        int top(){
            if(q1.empty()){
                cout<<"Queue is empty"<<endl;
                return -1;
            }
            return q1.front();
        }
        int size(){
            return q1.size();
        }

};


int main(){
    stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    s.pop();

    cout<<s.top()<<endl;
    s.pop();

    cout<<s.top()<<endl;
    s.pop();

    s.push(4);
    s.push(5);
    cout<<s.top()<<endl;
    s.pop();

    s.push(6);
    s.push(7);
    cout<<"Size: "<<s.size()<<endl;
    cout<<s.top()<<endl;
    s.pop();

    cout<<s.top()<<endl;
    s.pop();

    cout<<s.top()<<endl;
    s.pop();

    cout<<s.top()<<endl;
    s.pop();



    return 0;
}