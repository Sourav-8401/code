#include <iostream>
using namespace std;
class Distance{
    float feet, inch;
    public:
    Distance(){
        feet = 0;
        inch = 0;
    }
    Distance(float f, float i){
        feet = f;
        inch = i;
    }
    
    Distance add(Distance i){
        Distance c;
        c.feet =this->feet + i.feet;
        c.inch =this->inch + i.inch;
        return c;
    }
    void display(){
        cout<<"distance = "<<(int)this->feet<<"\'"<<this->inch<<"\"";
    }
};
int main(){
    float f, i;
    cin>>f>>i;
    Distance q1(f,i);
    return 0;}

