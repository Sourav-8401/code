#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main(){
    int a = 5;
    int b  = 0;
    int div;
    try{
        if(b==0){
            throw(b);
        }
        else{
          div = a/b;  
        }
    }
    catch(int d){
        cout<<"error div by zero:"<<b<<endl;

    }
}