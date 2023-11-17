#include <iostream>
#include <bits/stdc++.h>
#include <fstream>
#include <string>
using namespace std;
int main(){
    fstream f1;
    fstream f2;
    f1.open("f1.txt",ios::in); //read
    f2.open("f2.txt", ios::out); //write
    // f2 << "Hello \nmy name is sourav.\ni am fine.";
    string s;
    while(getline(f1,s)){
        f2 << s <<endl;
        cout<<s;
    }
    f1.close();
    f2.close();
}