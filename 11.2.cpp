#include <iostream>
using namespace std;

int main(){
    int a = 10;
    int *ptr1 = &a;
    int **ptr2 = &ptr1;

    // How to Access a address
    cout<<&a<<endl;
    cout<<ptr1<<endl;
    cout<<*ptr2<<endl;

    // How to access a value
    cout<<a<<endl;
    cout<<*ptr1<<endl;
    cout<<**ptr2<<endl;

    // How to change a's value using ptr2
    **ptr2 = 30;
    cout<<**ptr2<<endl;
    return 0;
}