#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
    vector<string> res;
    int n=1;

    //2 (( ))
    //   (())
    //   ()()()
    //((())) ()()
    //  (()) ()()
    //(())
    //arr1 = ((  arr2 = ))
    //() () ()
    string f = "(";
    string b = ")";
    for(int i=0;i<n;i++){
        string ans = f + b;
        res.push_back(ans);
    }
    for(string s :res){
        cout<<s;
    }
}