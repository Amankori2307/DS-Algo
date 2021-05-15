#include <iostream>
using namespace std;

int main(){
    int a = 10;
    int * aptr;
    aptr = &a;

    // To Get The Idea of What Stores what
    cout<<&a<<endl;
    cout<<aptr<<endl;
    cout<<*aptr<<endl;

    *aptr = 20;
    cout<<*aptr<<endl; // Dereferencing a

    // Array also behaves like a pointer
    int arr[] = {10, 20, 30};
    cout<<arr<<endl;
    cout<<*arr<<endl;

    int *ptr = arr;
    for( int i=0; i<3; i++){
        cout<<*ptr<<", ";
        ptr++;
    }
    cout<<endl;

    // or

    for(int i=0; i<3; i++){
        cout<<*(arr + i)<<", ";
        // arr++; // Illeggal expression
    }


    cout<<endl;

}