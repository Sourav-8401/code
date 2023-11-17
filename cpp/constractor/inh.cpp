#include <iostream>
using namespace std;
class parent{
    public:
    int a ;
    int b ; 
    parent(int a, int b){
        this->a = a;
        this->b = b;
    }
    void display(){
        cout<<a<<b<<endl;
    }

};
class child:public parent{
    public:
    child(int c,int d):parent(c,d){
    }
    int sum = a + b;
};
int main(){
    // parent obj1(5,10);
    child obj2(5,10);
    obj2.display();
    cout<<obj2.sum<<endl;
    return 0;
}