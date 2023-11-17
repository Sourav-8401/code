#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream obj;
    // read mode
    obj.open("abc.txt", ios::in);
    //
    if (!obj)
    {
        cout << "Error \n";
    }
    else
    {
        cout << "Done";
        char ch;
        while (true)
        {
            obj >> ch;
            cout << ch;
            if (obj.eof())
            {
                break;
            }
        }
    }
    obj.close();
}

// open("abc.txt", Mode) // iso :: in/out/app
// read()
// write()
// close()
#include<bits/stdc++.h>
#include<fstream>
using namespace std;
int main(){
fstream my_file,my_file2;
my_file.open("class1.txt",ios::in);
my_file2.open("Amrit2.txt",ios::out);
if(!my_file){
cout<<"Error";
}
if(!my_file2){
cout<<"Error";
}

else{
cout<<"Done \n";
string s;
while(getline(my_file,s)){
my_file2<<s<<endl;
}
my_file.close();
my_file2.close();
}
return 0;
}