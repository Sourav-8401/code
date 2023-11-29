#include <iostream>
using namespace std;
struct  node
{
    int data;
    node* next;
};
void push(node*  &top, int val){
    node* newnode = new node();
    newnode->data = val;
    newnode->next = NULL;

    if(top == NULL){
        top = newnode;
    }
    else{
        top->next = newnode;
        top = newnode;
    }
}
void pop(node* &top){
    if(top==NULL){
        cout<<"underflow";
        return;
    }
    else{
        node* temp = top;
        top = temp->next;
        free(temp);
    }
}
void display(node* &top){
    node* temp = top;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    
}

























// struct node{
//     int data;
//     node* next;
// };
// void push(node* &top,int value){
//     node* newnode = new node();
//     newnode->data = value;
//     top = newnode;
// }
// void display(node* &top){
//     if(top==NULL){
//         cout<<"empty";
//         return;
//     }
//     node* temp = top;
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp = temp->next;
//     }
//     cout<<endl;
// }
// void pop(node* &top){
//     if(top==NULL)
//     {return;}
//     node* temp = top;
//     top = temp->next;
//     free(temp);
// }
// void deleteEven(node* &top){
//     if(top!=NULL){
//         while (top!= NULL){
//             if(top->data%2==0){
//                 pop(top);
//                 top=top->next;
//             }
//         }  
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     node* top=NULL;
//     int value;
//     for(int i=0;i<n;i++){
//         cin>>value;
//         push(top,value);
//     }
// }