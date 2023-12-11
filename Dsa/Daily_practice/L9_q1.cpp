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
void insert(node* &head,int data){
    node* newnode = new node(data);
    if(head == NULL){
        head = newnode;
    }
    else{
    node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newnode;}
}
void display(node* &head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp= temp->next;
    }
    cout<<endl;
    delete(temp);
}
int main(){
    node* head = NULL;
    int n; cin>>n;
    int data;
    for(int i=0; i<n; i++){
        cin>>data;
        insert(head,data);
    }
    display(head);
}