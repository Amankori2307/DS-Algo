#include <iostream>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    // Write a program to check whether the given characte is vowel or consonant
    char ch;
    cin>>ch;

    switch(ch){
        case 'a':
            cout<<"Vowel"<<endl;
            break;
        case 'e':
            cout<<"Vowel"<<endl;
            break;
        case 'i':
            cout<<"Vowel"<<endl;
            break;
        case 'o':
            cout<<"Vowel"<<endl;
            break;
        case 'u':
            cout<<"Vowel"<<endl;
        case 'A':
            cout<<"Vowel"<<endl;
            break;
        case 'E':
            cout<<"Vowel"<<endl;
            break;
        case 'I':
            cout<<"Vowel"<<endl;
            break;
        case 'O':
            cout<<"Vowel"<<endl;
            break;
        case 'U':
            cout<<"Vowel"<<endl;
            break;
        default:
            cout<<"Consonant"<<endl;
            break;
    }
    return 0;
}