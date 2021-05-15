#include <iostream>
using namespace std;

// Swap using Pass by reference
void swap (int *a, int *b){
    *a = *a+*b;
    *b = *a-*b;
    *a = *a -*b;
}
int main(){
    int a = 2;
    int b = 4;

    cout<<"a: "<<a<<", b: "<<b<<endl;
    swap(&a, &b);
    cout<<"a: "<<a<<", b: "<<b<<endl;
    return 0;

}