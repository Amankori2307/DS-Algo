#include<iostream>
#include<string>
using namespace std;


// Constructor
class student{
    string name;
    int age;
    bool gender;
    public:
    // Deafault Constructor
    student(){
        cout<<"Default Constructor"<<endl;
    }
    // Parameterized constructor
    student(string n, int a, bool g){
        cout<<"Parameterised Constructor"<<endl;

        name = n;
        age = a;
        gender = g;
    }

    
    // Copy Constructor
    student(student &a){
        cout<<"Copy Constructor"<<endl;
        name = a.name;
        age = a.age;
        gender = a.gender;
    }

    // Destructor
    ~student(){
        cout<<"Destructor for object "<<name<<endl;
    }

    void getName(){
        cout<<name<<endl;
    }
    void printInfo(){
        cout<<name<<" ";
        cout<<age<<" ";
        cout<<gender<<" ";
        cout<<endl;
    }

    bool operator == (student &a){
        if(name == a.name && age == a.age && gender == a.gender)
            return true;
        else
            return false;
    }
};

int main(){
    student a("Aman", 20, 0);
    // a.getName();
    a.printInfo();
    student b;
    student c = a;
    c.printInfo();
    student d("Aman", 20, 0);
    bool res = a==d;
    cout<<res<<endl;
    res = a==b;
    cout<<res<<endl;
    return 0;
}