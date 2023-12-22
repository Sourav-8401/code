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
void reverse(node* &main){
    node* prev = nullptr;
    node* curr = main;
    node* nxt = nullptr;
    while(curr != nullptr){
        nxt = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nxt;
    }
    main = prev;
}
void add(node* &head){
    reverse(head);
    int c = 1;
    int sum;
    node* temp = head;
    while(temp != NULL){
        sum = temp->data + c;
        temp->data = sum % 10;
        c = sum / 10;
        if(c==0){break;};
        temp = temp->next;
    }
    if(c !=0){
        node* newnode = new node(c);
        
    }
    reverse(head);
}
void display(node* head){
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
    add(head);
    display(head);
}