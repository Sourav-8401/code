#include<iostream>
using namespace std;
int lcm(int x , int y){
    int gre;
    int result;
    if (x>y){
        gre = x;

    }
    else{
        gre = y;
    }

    while(true){
        if((gre%x == 0) && (gre %y ==0)){
            result = gre;
            break ;
        }
        gre = gre +1;
    }
    return result ;
}

int main(){
    int x;
    int y;
    cin >> x ;
    cin >> y ;
    cout << lcm(x,y);
}