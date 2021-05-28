#include <iostream>
using namespace std;


// Operator Overloading
class Complex{
        int real;
        int imag;
    public:
        Complex(){

        }
        Complex(int r, int i){
            real = r;
            imag = i;
        }

        Complex operator + (Complex const &obj){
            Complex res;
            res.imag = imag + obj.imag;
            res.real = real + obj.real;
            return res;
        }
        void display(){
            cout<<real<<" + i"<<imag<<endl;
        }

};

int main(){
    Complex c1(2, 3);
    Complex c2(4, 6);
    Complex c3 = c1 + c2;

    c3.display();
    return 0;
}