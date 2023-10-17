#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(){
    fstream file1, file2;
    file1.open("class1.txt", ios::in);
    file2.open("Class2.txt", ios::out);
    if(!file1){
        cout<<"Error \n";
    }
    if(!file2){
        cout<<"Error \n";
    }
    else{
        string s;
        while(getline(file1, s)){
            file2<<s<<endl;
        }
        }
    file1.close();
    file2.close();

    // else{
    //     char ch;
    //     int constant = 0 , vowel = 0;
    //     string s;
    //     while(true){
    //         file1 >>ch;
    //         if(ch == 'a' || 'e' || 'i' || 'o' || 'u' || 'A' || 'E' || 'I' || 'O' || 'U' ){
    //             vowel++;
    //         }
    //         else{
    //             constant++;
    //         }
    //         if(file1.eof()){
    //             break;
    //         }
    //     }
    // cout<<"vowel:"<<vowel<<endl;
    // cout<<"constant:"<<constant<<endl;
    // }
    return 0;
}