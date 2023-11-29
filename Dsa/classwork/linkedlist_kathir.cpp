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

void insertatbeg(node* &head, int data){
    node* temp = new node(data);
    temp->next = head;
    head = temp;
    cout<<"Node inserted"<<endl;
}
void display(node* &head){
    node* traverse = head;
    while(traverse!=NULL){
        cout<<traverse->data<<" ";
        traverse = traverse->next;
    }
    cout<<endl;
    cout<<"Node ended";

}

int main(){
    node* head = NULL;
    while(1){
    int data,c; 
    cin>>data;
    insertatbeg(head,data);
    cin>>c;
    if(c){
        break;
    }
    }
    cout<<"Linked List:";
    display(head);
   
}