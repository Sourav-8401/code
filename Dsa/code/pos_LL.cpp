#include <iostream>
#include <string>
using namespace std;
class node{
    public:
    string data;
    node* next;
    node(string data){
        this->data = data;
        this->next = NULL;
    }
};
class singlyLL{
    public:
    void atend(node* &tail,string data){
        node* temp = new node(data);
        tail->next = temp;
        tail = temp; 

    }
    void atbeg(node* &head, string data){
        node* temp = new node(data);
        temp->next = head;
        head = temp;
    }
    void print(node* head){
        node* temp = head;
        if(temp==NULL){
            cout<<"List is empty.";
        }
        while(temp != NULL){
            cout<<temp->next<<" ";
            temp = temp->next;
        } 
    }
    void atpos(node* &head, node* &tail,int pos,string data){
        node* temp = new node(data);
        node* temp = head; 
        if(pos==1){
            atbeg(head,data);
        }
        // else if(pos==len){

        // }
        int curr = 1;
        while(curr<pos-1){
            curr++;
            temp = temp->next;
        }
        


    }
};