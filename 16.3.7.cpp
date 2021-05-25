#include<iostream>
#include<string>
using namespace std;

// Print all substring 
void subseq(string s, string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }

    char ch=s[0];
    int code = ch;
    string ros=s.substr(1);

    subseq(ros, ans);
    subseq(ros, ans+ch);
    subseq(ros, ans+to_string(code));
}
int main(){
    string s;
    getline(cin, s);

    subseq(s, "");
    return 0;
}