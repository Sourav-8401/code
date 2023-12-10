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
class ll{
    public:
    node* insert(node* &head, int data){
        node* newnode = new node(data);
        if(head==NULL){
            cout<<"Node inserted"<<endl;
            head = newnode;
            return head;
        }
        else{
            newnode->next = head;
            head = newnode;
            cout<<"Node inserted"<<endl;
            return head;  } 
    }
};
int main(){
    node* head=NULL;
    int data;
    ll obj;
    while(true){
        cin>>data;
        if(data==0){
            break;
        }
        obj.insert(head,data);
    }
    node* temp=head;
    cout<<"Linked List: ";
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
    cout<<"Node ended"<<endl;
}