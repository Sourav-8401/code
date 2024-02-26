#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    ~node(){
        
    }

};
void inserthead(node* &head,int d){
    node* temp = new node(d);
    temp->next = head;
    head = temp;

}
void print(node* &head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<endl;

}
void insertend(node* &tail, int d){
    node* temp = new node(d);
    tail->next = temp;
    tail = temp;
}
void givenposition(node* &head,int pos ,int d){
    node* traverse = head;
    if(pos ==1){
        inserthead(head,d);
        return;
    }
    int curr = 1;
    while(curr<pos - 1){
        traverse = traverse->next;
        curr++;
    }
    if(traverse->next == NULL){
        insertend(head,d);
    }
    node* temp = new node(d);
    temp->next = traverse->next;
    traverse->next = temp;

}
void deletenode(int pos, node* &head){
    if(pos == 1){
        node* temp = head;
        head = head->next;
        delete temp;
    }
    else{
        node* prev = NULL;
        node* curr = head;
        int cnt = 1;
        while(cnt<= pos - 1){
            prev = curr;
            curr = curr -> next;
            cnt++;
        }
    prev->next = curr->next;
    curr->next = NULL;
    delete curr;
    }
}