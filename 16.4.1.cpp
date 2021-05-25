#include<iostream>
#include<string>
using namespace std;

// Print all possible permutation of a string
void permutation(string s, string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    for(int i=0; i<s.length(); i++){
        char ch=s[i];
        string ros=s.substr(0,i)+s.substr(i+1);
        permutation(ros, ans+ch);
    }
}

int main(){
    string s;
    getline(cin, s);

    permutation(s, "");
    return 0;
}

