#include <iostream>
using namespace std;
#define size 4
int count=0;
class node{
    public:
    int data;
    node* next;
    node(int data){
        this->data = data;
        this->next = NULL;
    }
};
void push(node* &head, int data){
    node* newnode = new node(data);
    if(!head){
        head = newnode;
        return;
    }
    else{
        if(count == 4){
            cout<<"stack overflow"<<endl;
        }
        else{
            head->next = newnode;
            head = newnode;
        }        
    }
}
void display(node* head){
    cout<<head->data<<endl;
}
void pop(node* &head){
    while(temp->next->next != NULL){

    }
}
int main(){

}