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
    node** add_main = &main;
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
// void reverse(node* &head){
//     node* temp1 = head;
//     node* temp2 = head->next;
//     node* temp3 = temp2->next;
//     int flag = 0;
//     while(temp2 != NULL){
//         temp2->next = temp1;
//         if(flag ==0){
//             temp1->next = NULL;
//             flag++;
//         }
//         temp1 = temp2;
//         temp2 = temp3;
//         // if(temp3 != NULL){
//         temp3 = temp3->next;
//         // }
//     }
//     head = temp1;
//     cout<<"head data:"<<head->data<<endl; 
// }
// void reverse(node* &head){
//     node* temp1 = head;
//     node* temp2 = head->next;
//     node* temp3;
//     int flag = 0;
//     while(temp2 != NULL){
//         temp3 = temp2->next;
//         temp2->next = temp1;
//         if(flag ==0){
//             temp1->next = NULL;
//             flag++;
//         }
//         temp1 = temp2;
//         temp2 = temp3;
//     }
//     head = temp1;
//     cout<<"head data:"<<head->data<<endl; 
// }
// void reverse(node* &head){
//     node* temp1 = head;
//     node* temp2 = head->next;
//     node* temp3 = nullptr; // Initialize temp3 to nullptr
//     int flag = 0;
    
//     while(temp2 != NULL){
//         temp3 = temp2->next; // Move this line inside the loop
//         temp2->next = temp1;
        
//         if(flag == 0){
//             temp1->next = NULL;
//             flag++;
//         }
        
//         temp1 = temp2;
//         temp2 = temp3;
//     }
    
//     head = temp1; // Set head to temp1, not temp2
//     cout << "head data: " << head->data << endl;
// }

// void reverse(node* &head){
//     node* temp1 = NULL;
//     node* temp2 = head;
//     node* temp3 = NULL;
//     while(temp2 != NULL){
//         temp3 = temp2->next;
//         temp2->next = temp1;
//         temp1 = temp2;
//         temp2 = temp3;
//     }
//     head = temp1;
//     cout<<"head data:"<<head->data<<endl;
    
// }
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
    node** add_head =  &head;
    reverse(head);
    display(head);
}










void reverse(node* &main){
    
}