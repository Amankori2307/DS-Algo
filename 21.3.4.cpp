#include <iostream>
using namespace std;

// Hybrid Inheritance
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

class C{
    public:
        void funcC(){
            cout<<"Class C"<<endl;
        }
};

class D: public B, public C{
    public:
};
int main(){
    D obj;
    obj.funcA();
    obj.funcB();
    obj.funcC();
}