#include<iostream>
using namespace std;
// Polymorphism
// Function overriding
class ApnaCollege{
    public:
        void fun(){
            cout<<"I am a function with no argument"<<endl;
        }
        
        void fun(int x){
            cout<<"I am a function with one int argument"<<endl;
        }

        
        void fun(double x){
            cout<<"I am a function with one double argument"<<endl;
        }
};


int main(){
    ApnaCollege obj;
    obj.fun();
    obj.fun(4);
    obj.fun(3.4);

    return 0;
}