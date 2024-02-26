/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
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
int main()
{
    node* node1 = new node(1);
    node* head = node1;
    print(head);
    inserthead(head,4);
    inserthead(head,3);
    inserthead(head,2);
    inserthead(head,1);
    print(head);
    
    
    
    //swap
    node* slow = head;
    node* fast = head->next;

    while(slow && fast){
    int temp = slow->data;
    slow->data = fast->data;
    fast->data = temp;
    if(fast->next){
    slow = slow->next->next;
    fast = fast->next->next;
    }
    }
    print(head);
    
}
