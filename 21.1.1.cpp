#include<iostream>
using namespace std;

// Class
class student{
    // by default all members are private
    string name;

    public:
    int age;
    bool gender;

    // Setter Function
    void setName(string s){
        name = s;
    }
    void getName(){
        cout<<name<<endl;
    }
    void printInfo(){
        cout<<"Name: "<<name<<", ";
        cout<<"age: "<<age<<", ";
        cout<<"gender: "<<gender<<" ";
        cout<<endl;
    }
};

int main(){
    // student a;
    // a.age = 12;
    // a.name = "Aman";
    // a.gender = true;

    // cout<<a.age<<" ";
    // cout<<a.name<<" ";
    // cout<<a.gender<<" ";
    // cout<<endl;


    // Object Array
    int n;
    cin>>n;
    student st[n];

    for(int i=0; i<n; i++){
        string s;
        cin>>s;
        st[i].setName(s);
        cin>>st[i].age;
        cin>>st[i].gender;
    }
    
    for(int i=0; i<n; i++){
        st[i].printInfo();
    }

    st[0].getName();
    return 0;
}