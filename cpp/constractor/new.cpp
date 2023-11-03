#include <iostream>
using namespace std;
int main(){
    int* p = NULL;
    p = new int;
    *p = 10;
    cout<<"p is : "<<p<<" val is : "<<*p<<endl;
    delete p;
    cout<<"p is : "<<p<<" val is : "<<*p<<endl;
    delete p;
    cout<<"p is : "<<p<<" val is : "<<*p<<endl;



    int* q = NULL;
    q = new int(101);
    cout<<"q is : "<<q<<" val is : "<<*q<<endl;

    int* a = new int;
    *a = 110;
    cout<<"a is : "<<a<<" val is : "<<*a<<endl;

    float* b = new float(10.22);
    cout<<"b is : "<<b<<" val is : "<<*b<<endl;
    
    delete a , b, q;

    int* cr = new(nothrow) int[10];
    if(!cr){
        cout<<"Memory allocation failed."<<endl;
    }
    else{
        for(int i =0;i<10;i++){
            cr[i] = i + 3;
        }
        for(int i =0;i<10;i++){
            cout<<cr[i]<<" ";
        }
    }
    return 0;

}