// You are using GCC
#include <iostream>
using namespace std;
class Room{
    int len,bre,ht;
    public:
    Room(){
        len = 0;
        bre = 0;
        ht = 0;
    }
    Room(int len,int bre , int ht){
        this->len = len;
        this->bre = bre;
        this->ht = ht;
    }
    Room(const Room& i){
        this->len = i.len;
        this->ht = i.ht;
        this->bre = i.bre - 10;
    }
    int  area(){
        return 2*(len + bre)*ht;
    }
    int area(Room d){
        return 2*(d.len + d.bre)*d.ht;
    }
}; 
int main(){
    int l,b,h;
    cin>>l>>b>>h;
    Room r1(l,b,h);
    cout<<"r1 area: "<<r1.area()<<endl;
    Room r2(r1);
    cout<<"r2 area: "<<r2.area(r1)<<endl;
    return 0;
    
    
}