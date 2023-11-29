#include <iostream>
using namespace std;
#define SIZE 3
int front = 0;
int rear = 0;
int queue[SIZE];
//f = 0 //R = 0
// 0 1 2 3
// 1 2 3
void enqueue(int val){
    if(rear == SIZE){
        cout<<"overflow"<<endl;
    }
    else{
        queue[rear] = val;
        rear++;
    }
}
void dequeue(){
    if(front==rear){
        cout<<"Underflow"<<endl;
    }
    else{
        front++;
    }
}
void display(){
    for(int i=front;i<rear;i++){
        cout<<queue[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int val;
    int n;cin>>n;
    for(int i =0; i<n;i++){
        cout<<"data: ";
        cin>>val;
        enqueue(val);   
    }
    display();
    dequeue();
    display();
    dequeue();
    display();
    dequeue();
    display();
    dequeue();
    display();
    dequeue();
}