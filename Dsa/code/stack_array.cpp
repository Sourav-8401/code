#include <iostream>
using namespace std;

// #define SIZE 3
// int stack[SIZE], top = -1;
// void push(int data){
//     if(top == SIZE -1){
//         cout<<"Stack overflow" <<endl;;
//     }
//     else{
//         top++;
//         stack[top] = data;
//     }
// }
// void pop(){
//     if(top == -1){
//         cout<< "stack underflow" <<endl;
//     }
//     else{
//         cout<<"The deleted element is:"<<stack[top]<<endl;
//         top--;
//     }
// }
// void display(){
//     if(top == -1){
//         cout<<" stack is empty" <<endl;
//     }
//     else{
//         int i;
//         for(i=top; i>=0; i--){
//             cout<<stack[i]<<" " <<endl;
//         }
//     }
// }
#include <iostream>
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
void rstr(char* str){
    int len = strlen(str);
    for(int i=0;i<len;i++){
        // cin>>data;
        push(str[i]);
    }
    for(int i=top; i>=0; i--){
        cout<<pop();
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
