#include<iostream>
using namespace std;
// 1 feet and 3 inches
// 4 feet and 4 inches
// 5 feet and 7 inches
class Height {
public :
int feet;
int inches;

Height(){
feet = 0;
inches = 0;
}

Height(int feet, int inches){
this->feet = feet; // Explain this ? // *(this).feet = feet
this->inches = inches;
}

// int add(int b){
// int c;
// c = b + a;
// return y;
// }
// 1 + 4 3 + 4
//(1,3) (4,4)
// a.add(b);
// 1.9 + 4.7
//(4,4)
Height add(Height b){
Height c; // 1 4
c.feet = this->feet + b.feet;
c.inches = this->inches + b.inches;
return c;
}

// int c = x + y;
void display(){
cout << "Feet : " << this->feet << " Inches : " << this->inches << "\n";
}

Height operator+(Height b){
Height c; // 1 4
c.feet = this->feet + b.feet;
c.inches = this->inches + b.inches;
return c;
}
// a - b -> a.-(b); -> a.di
Height operator-(Height obj){
Height obj3;
obj3.feet = feet - obj.feet;
obj3.inches = inches - obj.inches;
return obj3;
}
// post inc
Height operator++(int){
// 1 3
Height c;
c.feet = feet;
c.inches = inches;

feet += 1;
inches += 1;

return c;
}
// pre inc
Height operator++(){ // Why height ? Why not void
feet += 1;
inches += 1;
return *(this);
}



};

int main(){
// int c = 'd' + 'y';
// 100 + 120
// (1,2) + (3,4)
Height a(1, 3);
a.display();

++a;
a.display(); //
a++;
a.display();

Height c = ++a; // copy constructor
Height d = a++;

c.display();
d.display();


return 0;
}