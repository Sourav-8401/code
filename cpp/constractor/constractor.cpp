#include<iostream>
using namespace std;
class Height {
public :
int feet;
int inches;

Height(){
feet = 0;
inches = 0;
}

Height(int feet, int inches){
this->feet = feet;
this->inches = inches;
}
Height add(Height b){
Height c; 
c.feet = this->feet + b.feet;
c.inches = this->inches + b.inches;
return c;
}

// int c = x + y;
void display(){
cout << "Feet : " << this->feet << " Inches : " << this->inches << "\n";
}

// Height operator+(Height obj){

// }
};

int main(){
Height a(1, 3);

Height b(4, 4);

		//(1,3) (4,4)
Height c = a.add(b);
c.display();

return 0;
}
