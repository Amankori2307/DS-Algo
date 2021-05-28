#include <iostream>
using namespace std;

class Base{
    public:
        virtual void print(){
            cout<<"This is base class's print function"<<endl;
        }
        void display(){
            cout<<"This is base class's display function"<<endl;
        }
};

class Derived: public Base{
    public:
        void print(){
            cout<<"This is derived class's print function"<<endl;
        }
        void display(){
            cout<<"This is derived class's display function"<<endl;
        }
};

int main(){
    Base *baseptr;
    Derived d;
    baseptr = &d;


    baseptr->print();
    baseptr->display();

    return 0;
}