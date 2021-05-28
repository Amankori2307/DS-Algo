#include <iostream>
using namespace std;


// Multiple Inheritence
class A{
    public:
        void funcA(){
            cout<<"Class A"<<endl;
        }
};

class B{
    public:
        void funcB(){
            cout<<"Class B"<<endl;
        }
};

class AB: public A, public B{

};

int main(){
    AB obj;
    obj.funcA();
    obj.funcB();
    return 0;
}