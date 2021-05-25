#include<iostream>
#include<string>
using namespace std;

// Remove all duplicate from a string
string removeDuplicate(string s){
    if(s.length()==0){
        return "";
    }
    string ans = removeDuplicate(s.substr(1));
    if(s[0] == ans[0]){
        return ans; 
    }
    return s[0]+ans;

}


int main(){
    string s;
    getline(cin, s);

    string s2 = removeDuplicate(s); 
    cout<<s2;
    return 0;
}