#include<iostream>
#include <stack>
#include <string>
using namespace std;

bool redundantParanthesas(string s){
    stack<char> st;
    for(int i=0; i<s.size(); i++){
        if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/'){
            st.push(s[i]);
        }else if(s[i] == '('){
            st.push(s[i]);
        }else if(s[i] == ')'){
            // If st.top is opening brackets
            if(st.top() == '('){
                return true;
            }
            while(st.top() != '('){
                // Pop Operators
                st.pop();
            }
            // Pop Open Bracket
            st.pop();
        }
    }
    return false;
}

int main(){
    string s;
    cin>>s;
    cout<<redundantParanthesas(s)<<endl;
    return 0;
}