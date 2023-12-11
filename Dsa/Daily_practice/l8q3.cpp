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
void insertion(node* &head, string data, int pos){
    node* newnode = new node(data);
    if(pos <= 1 || head==NULL){
        newnode->next = head;
        head = newnode;
        }
    node* temp = head;
    for(int i=1; i<pos-1; i++){
       temp = temp->next;
    }
    newnode->next = temp->next;
    temp->next = newnode;
}
int main(){
    node* head = NULL;
    int n;
    cin>>n;
    string arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=n-1; i>=0; i--){
    insertion(head,arr[i],1);
    }
    node* temp2 = head;
    cout<<"Current Linked List: ";
    while(temp2!=NULL){
        cout<<temp2->data<<" ";
        temp2 = temp2->next;
    }
    cout<<endl;
    string str;
    cin>>str;
    int pos;
    cin>>pos;
    insertion(head,str,pos);
    cout<<"Updated Linked List: ";
    node* temp3 = head;
    while(temp3!=NULL){
        cout<<temp3->data<<" ";
        temp3 = temp3->next;
    }
    delete(temp2);
    delete(temp3);
    delete(head);
}