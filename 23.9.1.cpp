#include<iostream>
#include<string>
#include<stack>
using namespace std;

bool balacedParanthesis(string s){
    stack<char> st;
    for(int i=0; i<s.length(); i++){
        if(s[i] == '{' || s[i] == '(' || s[i] == '['){
            st.push(s[i]);
        }else{
            if(s[i] == ')' && st.top() == '('){
                st.pop();
            }
            else if(s[i] == '}' && st.top() == '{'){
                st.pop();
            }
            else if(s[i] == ']' && st.top() == '['){
                st.pop();
            }else{
                return false;
            }
        }
    }
    return st.empty();
}

int main(){
    string s;
    cin>>s;

    cout<<balacedParanthesis(s)<<endl;
    return 0;
}