#include<iostream>
#include <Stack>
using namespace std;

class queue{
    stack<int> s1;
    public:
        void push(int val){
            s1.push(val);
        }

        int pop(){
            if(s1.empty()){
                cout<<"Queue is empty"<<endl;
                return -1;
            }

            int x = s1.top();
            s1.pop();
            if(s1.empty()){
                return x;
            }

            int item = pop();
            s1.push(x);
            return item;

        }


};

int main(){

    queue q;
    q.push(1);
    q.push(2);
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
    cout<<q.pop()<<endl;
    return 0;
}