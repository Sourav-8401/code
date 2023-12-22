#include <iostream>
using namespace std;
class car{

    protected:
    int set_color = 0;

    public:
    int wheel_size = 20;
    int car_weigth = 200;

    void setwheel(int){
        cout<<"Wheel size is "<<wheel<<endl;
    };
    void setpower(){
        int set ;
        return set++;
    };
}
class audi: private car{
    set_c(){
        set_color++
    };

    private:
    int car_name;

    public :
    car_n(){
        cout<<"car name is" << car_name<< endl;
    }

}
int main(){
    audi a1,a2;
    a1.set_c();
    int color_a1 = a1.set_color;
    cout<<"Color"<< color_a1<<endl;
}