#include <iostream>
using namespace std;

int main(){
    // Check if characters are upper case or lover case
    char c;
    cin>>c;

    bool isUpper = false;
    bool isLower = false;

    if(c=='a' || c == 'e' || c == 'i' || c == 'o' || c=='u'){
        isLower = true;
    }
    else if(c=='A' || c == 'E' || c == 'I' || c == 'O' || c=='U'){
        isUpper = true;
    }

    if(isUpper || isLower)
        cout<<"Vowel"<<endl;
    else
        cout<<"Consonant"<<endl;
    return 0;
}