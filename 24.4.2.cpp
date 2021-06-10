#include<iostream>
#include <queue>
using namespace std;

class stack{
    queue<int> q1;
    queue<int> q2;
    public:
        void push(int val){
            q1.push(val);
        }

        int pop(){
            if(q1.empty()){
                cout<<"Queue is empty"<<endl;
                return -1;
            }
        
            int x = q1.front();
            q1.pop();
            while(!q1.empty()){
                q2.push(x);
                x = q1.front();
                q1.pop();
            }
           
           queue<int> temp = q1;
           q1 = q2;
           q2 = temp;
            return x;
        }
};


int main(){
    stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    s.push(7);
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    return 0;
}
