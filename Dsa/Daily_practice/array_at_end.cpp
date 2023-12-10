#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int data){
        this->data= data;
        this->next = NULL;
    }
};
node* at_end(node* &head,int data){
    node* last = head;
    node* newnode = new node(data);
    if(head == NULL){
        head = newnode;
        return head;
    }
    else{
        while(last->next != NULL)
        last->next = newnode;
    }
}
int main(){
    node* head = NULL;
    int data;
    while(true){
        cin>>data;
        if(data<0){
            break;
        }
        at_end(head,data);
    }
    node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}