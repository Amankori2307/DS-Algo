#include <iostream>
using namespace std;

class A{
    public:
        void funcA(){
            cout<<"Class A"<<endl;
        }
};



class B: public A{
    public:
        void funcB(){
            cout<<"Class B"<<endl;
        }
};


class C: public B{
    public:
        void funcC(){
            cout<<"Class C"<<endl;
        }
};

int main(){
    C obj;

    obj.funcA();
    obj.funcB();
    obj.funcC();
    return 0;
}