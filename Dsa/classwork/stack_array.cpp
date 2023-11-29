#include <iostream>
#include <string>
using namespace std;
#define size 4
int stack[size], top = -1;
void push(int data){
    if(top == size-1){
        cout<<"overflow" <<endl;
    }
    else{
        top++;
        stack[top] = data;
    }
}
void pop(){
    if(top==-1) cout<<"underflow";
    else top--;
}
void display(){
    if(top==-1) cout<<"empty";
    else{
        for(int i=top; i>=0; i--){
            cout<<stack[i];
        }
    }
}
int main(){
    int value, choice;
    while(1){
        cin>>choice;
        switch (choice)
        {
        case 1:
            cin>> value;
            push(value);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        default: cout<<"wrong selection!!";
            break;
        }
    }
}
