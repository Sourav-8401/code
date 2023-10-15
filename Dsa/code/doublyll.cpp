#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node* prev;
    node* next;
    node(int data){
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
    ~node(){
        int val = this->data;
        if(next != NULL){
            delete next;
            next = NULL;
        }
    }
};
//inserting likedlist at head
void insertathead(node* &head,int data){
    if(head == NULL){
        node* temp = new node(data);
        head = temp;
    }
    node* temp = new node(data);
    temp->next = head; 
    head->prev = temp;
    head = temp;
    cout<<"node inserted"<<endl;
}
void insertattail(node* &tail, int data){ 
    if(tail == NULL){
        node* temp = new node(data);
        tail = temp;
    }
    node* temp = new node(data);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
    cout<<"inserted_end"<<endl;
}

//traversing a doubly linked list
void print(node* head){
    node* temp = head;
    if(head==NULL){
        cout<<"empty";
        return;
    }
    else
    {
    while(head != NULL){
        cout<<"<-"<<head->data<<"->";
        head = head->next; 
    }
    }
    cout<<endl;
}
void insertatpos(node* &tail,node* &head, int pos, int d){
    cout<<"pos"<<pos<<" "<<"data:"<<d<<endl;
    if(pos == 1){
        insertathead(head,d);
        return;
    }
    node* temp = head;
    int cnt = 1;
    while(cnt < pos-1){
        temp = temp->next;
        cnt++ ;
    }   
    if(temp->next == NULL){
        insertattail(tail,d);
        return;
    } 
    node* nodetoinsert = new node(d);
    nodetoinsert->next = temp->next;
    temp->next->prev = nodetoinsert;
    temp->next = nodetoinsert;
    nodetoinsert->prev = temp;

}
//getting lenght of linked list;
int getlenght(node *head){
    node* temp = head;
    int len=0;
    if(head==NULL){
        cout<<"empty";
        return 0; 
    }
    else
    {
    while(head != NULL){
        len++;
        head = head->next; 
    }
    }
    return len;
}
void deleteNode(int pos, node* &head){
    if(pos == 1){
        node* temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp = NULL;
        delete temp;
    }
    else{
        node*  curr = head;
        node* prev = NULL;
        int cnt = 1;
        while(cnt < pos){
            prev = curr;
            curr = curr ->next;
            cnt++;
        }
    curr->prev = NULL;
    prev ->next = curr ->next;
    curr->next = NULL;
    delete curr;
    }
}
int main(){
    node* tail=NULL;
    node* head=NULL;
    insertathead(head,20);
    insertathead(head,30);
    insertathead(head,40);
    insertathead(head,50);
    insertathead(head,320);
    print(head);
    // cout<<getlenght(head)<<endl
    print(head);
    // cout<<getlenght(head)<<endl; 
    insertatpos(tail,head,3,100);
    print(head);
    insertatpos(tail,head,1,101);
    print(head);
    insertatpos(tail,head,9,100);
    print(head);
    insertatpos(tail,head,10,100);
    print(head);
    deleteNode(2,head);
    print(head);
    deleteNode(1,head);
    print(head);
    return 0;
}