#include<iostream>
using namespace std;

int main(){
    int a; //declaration
    a = 5; //initialisation
    cout<<"Size of int is: "<<sizeof(a)<<endl;

    float f;
    f = 3.14;
    cout<<"Size of float is: "<<sizeof(f)<<endl;

    char c;
    c = 'c';
    cout<<"Size of char is: "<<sizeof(c)<<endl;

    short int si;
    cout<<"Size of short int is: "<<sizeof(si)<<endl;

    long int li;
    cout<<"Size of long int is: "<<sizeof(li)<<endl;
    
    return 0;
}