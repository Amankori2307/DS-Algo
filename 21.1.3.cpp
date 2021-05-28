#include <iostream>
#include <string>
using namespace std;

class student{
    string name;
    public:

    // constructor 
    student(string s){
        name=s;
    }

    // Operator Overloading
    bool operator == (student &a){
        if(name == a.name) return true;
        else return false;
    }

};

int main(){
    student a("Aman");
    student b("Aman");
    student c("Abhishek");

    string res = a==b?"Same":"Different";
    cout<<res<<endl;
    res = a==c?"Same":"Different";
    cout<<res<<endl;
}