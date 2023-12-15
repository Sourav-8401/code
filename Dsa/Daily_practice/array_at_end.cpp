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
        while(last->next != NULL){
            last = last->next;
        }
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
void reverse(node* &head){
    node* temp1 = head;
    node* temp2 = head->next;
    node* temp3;
    int flag = 0;
    while(temp2 != NULL){
        temp3 = temp2->next;
        temp2->next = temp1;
        if(flag ==0){
            temp1->next = NULL;
            flag++;
        }
        temp1 = temp2;
        temp2 = temp3;
    }
    head = temp1;
    cout<<"head data:"<<head->data<<endl; 
}

void reverse(node* &head){
    node* temp1 = head;
    node* temp2 = head->next;
    node* temp3 = temp2->next;
    int flag = 0;
    while(temp2 != NULL){
        temp2->next = temp1;
        if(flag ==0){
            temp1->next = NULL;
            flag++;
        }
        temp1 = temp2;
        temp2 = temp3;
        temp3 = temp3->next;
    }
    head = temp1;
    cout<<"head data:"<<head->data<<endl; 
}