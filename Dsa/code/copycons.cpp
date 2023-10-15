#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
class student{
    public:
    string name;
    int age;
    student(string n, int a){
        name = n;
        age = a;
        cout<<"Student constructor called: "<<name<<endl;
    }
    ~student(){
        cout<<"Student destructor called: "<<name<<endl
        ;
    }
};
class teacher{
    public:
    string name;
    int age;
    teacher(string n, int a){
        name = n;
        age = a;
        cout<<"Teacher constructor called: "<<name<<endl;
    }
    ~teacher(){
        cout<<"Teacher destructor called: "<<name<<endl
        ;
    }
};
class person{
    public:
    string name;
    int age;
    person(string n, int a){
        name = n;
        age = a;
        cout<<"Person constructor called: "<<name<<endl;
        student obj2(name, age);

    }
    ~person(){
        cout<<"Person destructor called: "<<name<<endl;
    }
};
class persont{
    public:
    string name;
    int age;
    persont(string n, int a){
        name = n;
        age = a;
        cout<<"Person constructor called: "<<name<<endl;
        teacher obj2(name, age);

    }
    ~persont(){
        cout<<"Person destructor called: "<<name<<endl;
    }
};


int main(){
    double totalage = 0;
    int count = 0;
    double totaltaget = 0;
    int countt = 0;
    while(1){
    string name;
    cin>>name;
    if(name == "q"){
        break;
    }
    int age;
    cin>>age;
    totalage = totalage + age;
    count++;
    person obj3(name,age);
    }
    while(1){
    string name;
    cin>>name;
    if(name == "q"){
        break;
    }
    int age;
    cin>>age;
    totaltaget = totaltaget + age;
    countt++;
    persont obj3(name,age);
    }
    cout<<"Average student age: "<<totalage/count<<endl;
    cout<<"Average teacher age: "<<totaltaget/countt<<endl;

    return 0;
}