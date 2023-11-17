#include <iostream>
using namespace std;

class a{
    int x;
    public:
    a(int x){
        this->x = x;
    }
    friend void fun(a);
};
void fun(a obj1){
    int sum;
    sum = obj1.x + 2;
    cout<<"sum: "<<sum;
}
int main(){
    a obj2(5);
    fun(obj2);
}