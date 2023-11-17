#include <iostream>
using namespace std;
class over{
    int x;
    int y;
    public:
    over(int x,int y):x(x),y(y){}
    void operator++(int){
        ++x;
        ++y;
        cout<<"x:"<<x<<"y:"<<y<<endl;
    }
};
int main(){
    over obj2(5,10);
    obj2++;

}