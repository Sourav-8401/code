#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int data){
        this->data = data;
        this->next = NULL;
    }
};
void insert(node* &head, int data){
    node* newnode = new node(data);
    if(head == NULL){
        head = newnode;
    }
    else{
        node* temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = newnode;
    }
}
void display(node* head){
    node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
void removeDuplicate(node* &head){
    node* temp = head;
    // node* com = head->next;
    while(temp->next != NULL){
        node* cprev =temp;
        node* com = temp->next;
        while(com != NULL){
            if(com->data == temp->data){
                node* del = com;
                com = com->next;
                cprev->next = com;
                del = NULL;
                delete(del);
            }
            else{
                com = com->next;
                cprev = cprev->next;
            }
        }       
        temp = temp->next;
  }    
}
int main(){
    node* head = NULL;
    insert(head, 1);
    display(head);
    removeDuplicate(head);
    display(head);
    int data; 
}