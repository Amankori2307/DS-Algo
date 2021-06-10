#include<iostream>
using namespace std;
#define n 20


class queue{
    int* arr;
    int front;
    int back;
    public:
        queue(){
            arr = new int[n];
            front = -1;
            back = -1;
        }
        void push(int x){
            if(back == n-1){
                cout<<"Queue overflow"<<endl;
                return;
            }
            if(front == -1){
                front++;
            }
            back++;
            arr[back] = x;
        }
        void pop(){
            if(front==-1 || front>back){
                cout<<"Queue is empty"<<endl;
                return;
            }
            front++;
        }
        int peek(){
            if(front==-1 || front>back){
                cout<<"No Elements In Queue"<<endl;
                return -1;
            }
            return arr[front];
        }
        bool empty(){
            if(front==-1 || front>back){
                return true;
            }
            return false;
        }


};

int main(){
    queue q;
    q.push(1);
    q.push(2);
    cout<<q.peek()<<endl;
    cout<<q.empty()<<endl;

    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    cout<<q.empty()<<endl;


    return 0;
}