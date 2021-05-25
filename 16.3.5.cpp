#include<iostream>
#include<string>
using namespace std;

// Move all the x to end
string moveXToEnd(string s){
    if(s.length()==0){
        return "";
    }
    
    string ans = moveXToEnd(s.substr(1));
    if(s[0] != 'x'){
        return s[0]+ans;
    }
    return ans+s[0];
}

int main(){
    string s;
    getline(cin, s);

    cout<<moveXToEnd(s);

    return 0;
}