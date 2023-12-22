#include<iostream>
using namespace std;
bool isprime(int n){
    int i;
    for(i=2; i*i <=n; i++ ){
        if(i%n==0){
            return false;

        }
    }
    return true;
    }

    
int main(){
    int n ;
    int count = 0;
    int x = 2;
    cin >>n;
    while(count != (n-1)){
        if(isprime(x)){
            count++;
        }
        x++;
    }
    cout << x-1;
}