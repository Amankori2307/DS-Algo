#include<iostream>
#include<string>
#include<stack>
#include<algorithm>
using namespace std;

int prec(char c){
    if(c=='^'){
        return 3;
    }else if(c=='*' || c=='/'){
        return 2;
    }else if(c=='+' || c=='-'){
        return 1;
    }else{
        return -1;
    }
}

// Infix to Prefix
string infixToPrefix(string infix){
    stack<char> st;
    string res;
    reverse(infix.begin(), infix.end());

    // Convert '(' to ')' and ')' to '('
    for(int i=0; i<infix.length(); i++){
        if(infix[i] == ')'){
            infix[i] = '(';
        }else if(infix[i] == '('){
            infix[i] = ')';
        }
    }

    for(int i=0; i<infix.length(); i++){
        if(infix[i] >= 'a' && infix[i] <= 'z'){
            res += infix[i];
        }else if(infix[i] == '('){
            st.push(infix[i]);
        }else if(infix[i] == ')'){
            while(!st.empty() && st.top() != '('){
                res+=st.top();
                st.pop();
            }
            if(!st.empty()){
                st.pop();
            }
        }else{
            while(!st.empty() && prec(st.top()) > prec(infix[i])){
                res+=st.top();
                st.pop();
            }
            st.push(infix[i]);
        }
    }
    while(!st.empty()){
        res+=st.top();
        st.pop();
    }
    reverse(res.begin(), res.end());
    return res;
}

int main(){
    string infix;
    cin>>infix;

    cout<<infixToPrefix(infix)<<endl;
    
    return 0;
}