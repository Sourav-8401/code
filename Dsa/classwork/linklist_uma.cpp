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

void insertatend(node* &head, int d)
{
    node *temp = new node(d);
    if(head==NULL){
        head = temp;
    }
    else{
    node* tra = head;
    while(tra->next!=NULL){

    tra = tra->next;
    }
    tra->next = temp;
    }
    cout<<"inserted"<<endl;
}
void display(node* &head)
{
    node* temp = head;
    if (temp == NULL)
    {
        cout << "Linked List is empty." << endl;
    }

    else{
    cout << "lindked list: ";

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout<<endl;
    }
}

int main()
{
    node* head = NULL;
    // int data;
    while (1)
    {
        int data;
        cin >> data;
        if (data < 0)
        {
            break;
        }
        else
        {
    insertatend(head, data);
        }
    }
    display(head);
    return 0;
}