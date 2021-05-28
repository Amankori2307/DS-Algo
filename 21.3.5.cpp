#include <iostream>
using namespace std;

class Ground{
        int Rooms;
    protected:
        void put();
    public:
        void get();
};

class Middle: private Ground{
    int Labs;
    public:
        void Take();
        void Give();

};

class Top: public Middle{
        int Roof;
    public:
        void In();
        void Out();
};

/*
    1. Which type of inheritance is this?
    Ans. Multi-Level Inheritance

    2.Write the names of all the members, which are 
    directly accessible by the member function Give() 
    of class Middle
    Ans. Take(), Labs, put(), get()

    3.Write the names of all the members, which are
     directly accessible by the member function Out()
      of class Top
    Ans. In(), Roof, Take(), Give()

    4. Write the names of all the members, which are directly
    accessible by the object T of class Top declared in main()
    function.
    Ans. In(), Out(), Take(), Give()
*/ 

int main(){

}