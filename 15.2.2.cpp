#include <iostream>
using namespace std;

// Euclid Algorithm To Find GCD(Greatest Common Divisor) or HCF(Highest Common Factor)
// If we subtract two no their GCD does not change

int GCD(int num1, int num2){
    while(num1 % num2 != 0){
        int temp = num1%num2;
        num1 = num2;
        num2 = temp;
    }
    return num2;
}

int main(){
    int num1, num2;
    cin>>num1>>num2;

    cout<<GCD(num1, num2)<<endl;
    return 0;
}