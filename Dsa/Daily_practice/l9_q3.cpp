#include <iostream>
using namespace std;
class node{
    public:
    char data;
    node* next;
    node(char data){
        this->data = data;
        this->next = NULL;
    }
};
void insert(node* &head,char data){
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
void display(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp= temp->next;
    }
    cout<<endl;
    delete(temp);
}
int length(node* head){
    node* temp = head;
    int count = 0;
    while(temp != NULL){
        count++;
        temp = temp->next;
    }
    return count;
}
void ispalindrome(node* &head){
    node* h = head;
    node* toe = head;
    int flag = 0;
    int n = length(head);
    int mid = n/2;

    //reching at mid
    int reach = mid;
    if(n%2 == 0){reach--;}
    while(reach != 0){
        toe = toe->next;
        reach--;
    }

    //check function;
    while(mid != 0){
        int check = mid;
        node* temp = toe;
        while(check != 0){
            temp = temp->next;
            check--;
        }
        if(h->data != temp->data){
            flag++;
            break;
        }else{
            h = h->next;
        }
        mid--;
    }

    //print function
    if(flag>0){
        cout<<"The linked list is not a palindrome.";
    }
    else{
        cout<<"The linked list is a palindrome.";
    }
}
int main(){
    char c;
    node* head = NULL; 
    while(true){
        cin>>c;
        if(c == '$'){
            break;
        }
        insert(head,c);
    }
    display(head);
    ispalindrome(head);
}