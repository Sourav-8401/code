#include <iostream>
using namespace std;
void sum(int &f, int &s, int &su){
    int summ = f + s;
    su = summ;
}
void swap(int* aa, int* bb){
    int temp = *bb;
    *bb = *aa;
    *aa = temp;
}
int main(){
    int a,b,sumb;
    cin>>a>>b;
    sum(a,b,sumb);
    cout<<"a: "<<a<<"b: "<< b<<endl;
    swap(&a,&b);
    cout<<"a: "<<a<<"b: "<< b<<endl;
    cout<<"sum is:"<<sumb<<endl;
}
