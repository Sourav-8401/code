// You are using GCC
#include<bits/stdc++.h>
#include<cstring>
using namespace std;
class custom{
    string s;
    public:
    custom(string &s){
        this->s = s;
        // cout<<s;
    }
    void operator!(){
        for(int i = 0; i<s.length();i++){
            if(islower(s[i])){
                s[i] = toupper(s[i]);
            }
            else if(isupper(s[i])){
                s[i] = toupper(s[i]);
            }
        }
    }
};
int main(){
    string s; 
    getline(cin,s);
    cout<<"Original String: "<<s<<endl;
    custom obj(s);
    !obj;
    cout<<"Inverted String: "<<s<<endl;
    return 0;
}