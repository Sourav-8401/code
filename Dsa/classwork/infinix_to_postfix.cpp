#include <iostream>
#include <stack>
#include <string>
using namespace std;
int prec(char a){
    if(a == '^'){
        return 3;
    }
    else if(a=='/' || a== '*'){
        return 2;
    }
    else if(a=='+' || a== '-'){
        return 1;
    }
    else{
        return -1;
    }
}
string inToPost(string s){
    stack<char> st;
    string res;
    for(int i=0;i<s.length(); i++){
        if((s[i]>='a'&&s[i]<'z')||(s[i]>='A'&&s[i]<'Z')){
            res = res + s[i];
        }
        else if(s[i] == '('){
            st.push(s[i]);
        }
        else if(s[i] == ')'){
            while(!st.empty() && st.top() != '('){
                res = res + st.top();
                st.pop();
            }
            if(!st.empty()){
                st.pop();
            }
        }
        else{
            while(!st.empty() && prec(s[i])<prec(st.top())){
                res = res + st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }
    while(!st.empty()){
        res = res + st.top();
        st.pop();

    }
    return res;

}
int main(){
    cout<<"ans is "<<inToPost("(a-b/c)*(a/k-l)")<<endl;
}