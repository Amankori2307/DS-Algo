#include<iostream>
using namespace std;


// Single Ingeritance

class A{
    public:
        void funcA(){
            cout<<"Inherited << A"<<endl;
        }
    protected:
        void funcB(){
            cout<<"Inherited << B"<<endl;
        }
};

// It Means Inherited All the public and protected members of class B as public members of class B
class B: public A{
    public:
        void funcC(){
            cout<<"Inside funcC: ";
            funcB();
        }
};

int main(){
    B obj;
    obj.funcA();
    obj.funcC();
}

