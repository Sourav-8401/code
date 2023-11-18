#include <iostream>
using namespace  std;
struct node{
    int data;
    node* next;
};
node* front=NULL;
node* rear=NULL;
void enqueue(int val){
        node* newnode = new node();
        newnode->data = val;
        newnode->next = NULL;

        
        if(front == NULL){
        front = newnode;
        rear = newnode;
        }
        else{
            rear->next = newnode;
            rear = newnode;
        }
}
void dequeue(){
    if(front == NULL){
        cout<<"underflow";
    } 
    else{
    node* temp = front;
    front = front->next;
    free(temp);
    }
}
void display(){
    node* temp = front;
    if(temp==NULL){
        cout<<"NO element!";
        return;
    }
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
int main(){
    enqueue(5);
    enqueue(10);
    enqueue(5);
    enqueue(5);
    enqueue(5);
    display();
    dequeue();
    display();
    dequeue();
    display();
    dequeue();
    display();
}