#include <iostream>
using namespace std;
class definer{
    private:
    int a,b;
    public:
    definer(int a, int b){
        this->a = a;
        this->b = b;
    }
    void display(){
        cout<<a<<b<<endl;
    }
    friend void fun1(definer);
};
void fun1(definer obj){
    int sum = obj.a + obj.b;
    cout<<sum<<endl;
}
int main(){
    definer obj3(15,20);
    obj3.display();
    fun1(obj3);
    
}