#include <iostream>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

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