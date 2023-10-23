#include <iostream>
using namespace std;

/* a node of the doubly linked list */
struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
};

/* Function to delete a node in a Doubly Linked List.
   head_ref --> pointer to head node pointer.
   del --> pointer to node to be deleted. */
// void deleteNode(struct Node* &head, struct Node* del)
// {
//     /* base case */
//     if (*head_ref == NULL || del == NULL)
//         return;

//     /* If node to be deleted is head node */
//     if (*head_ref == del)
//         *head_ref = del->next;

//     /* Change next only if node to be deleted is NOT
//        the last node */
//     if (del->next != NULL)
//         del->next->prev = del->prev;

//     /* Change prev only if node to be deleted is NOT
//        the first node */
//     if (del->prev != NULL)
//         del->prev->next = del->next;

//     /* Finally, free the memory occupied by del */
//     free(del);
// }

/* Function to delete the node at the given position
   in the doubly linked list */
void deleteNodeAtGivenPos(struct Node* &head, int pos)
{
    Node* curr = head;
    int len = 1;
    while(curr->next!=nullptr){
        len++;
        curr= curr->next;    
    }
    if(head==NULL){
        return;
    }
    if(pos==1){
        head = curr->next;
        head->prev = NULL;
        free(curr);
    }
    else if(pos>len){
        return;
    }
    else{
        Node* prev = NULL;
    for(int i=1; i<pos; i++){
        prev=curr;
        curr=curr->next;
    }
    prev->next = curr->next;
    curr->next->prev= prev;
    curr->next = NULL;
    free(curr);
    }

}

/* Function to insert a node at the beginning
   of the Doubly Linked List */
void push(struct Node** head_ref, int new_data)
{
    /* allocate node */
    struct Node* new_node =
        (struct Node*)malloc(sizeof(struct Node));

    /* put in the data */
    new_node->data = new_data;

    /* since we are adding at the beginning,
       prev is always NULL */
    new_node->prev = NULL;

    /* link the old list to the new node */
    new_node->next = (*head_ref);

    /* change prev of the head node to new node */
    if ((*head_ref) != NULL)
        (*head_ref)->prev = new_node;

    /* move the head to point to the new node */
    (*head_ref) = new_node;
}

/* Function to print nodes in a given doubly
   linked list */
void printList(struct Node* head)
{
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
}

/* Driver program to test above functions */
int main()
{
    /* Start with the empty list */
    struct Node* head = NULL;

    int n, data;
   // cout << "Enter the number of nodes: ";
    cin >> n;

   // cout << "Enter the data for each node:\n";
    for (int i = 0; i < n; i++) {
        cin >> data;
        push(&head, data);
    }

    cout << "Doubly linked list before deletion:\n";
    printList(head);

    int pos;
   // cout << "\nEnter the position of the node to delete: ";
    cin >> pos;

    /* delete node at the given position 'pos' */
    deleteNodeAtGivenPos(head, pos);

    cout << "\nDoubly linked list after deletion:\n";
    printList(head);

    return 0;
}
