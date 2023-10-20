#include <iostream>
using namespace std;
struct node{
    int data;
    node* next;
};
void push(node* &top, int value){
        node* temp = new node();
        temp->data = value;
        temp->next = top;
        top = temp;
    };
void pop(node* &top){
    if(top==NULL){cout<<"empty";
     return;}
    node* temp = top;
    top = temp->next;
    free(temp);
}
void display(node* &top){
    node* temp = top;
    if(temp==NULL){
        cout<<"empty"<<endl;
        return;
    }
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
int main(){
    node* top = NULL;
    while(true){
    int value, choice;
    cin>>choice;
    switch(choice){
        case 1:
        cin>>value;
        push(top, value);
        break;
        case 2:
        pop(top);
        break;
        case 3:
        display(top);
        break;
        default:
        exit(0);
        break;
    }

    }


}
