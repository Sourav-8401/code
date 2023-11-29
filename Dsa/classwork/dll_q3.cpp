#include <iostream>

struct Node {
    int data;
    Node* prev;
    Node* next;
};

void insertAtBeginning(Node* &head, int newData) {
    Node* newnode = new Node;
    newnode->data = newData;
    newnode->next = newnode->prev = NULL;
    if(head != nullptr){
        // Node* temp = *head;
        newnode->next = head;
        head->prev = newnode;
        head = newnode;
    }

}

void reverseList(Node* &head) {
  Node* curr = head;
  Node* temp = NULL;
  while(curr!=NULL){
    temp = curr->prev;
    curr->prev = temp->next;
    curr->next = temp;
    curr = curr->prev;
  }
}

void printList(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << std::endl;
}

int main() {
    Node* head = nullptr;
    int n, data;

    std::cin >> n;

    // Create the doubly linked list
    for (int i = 0; i < n; i++) {
        std::cin >> data;
        insertAtBeginning(head, data);
    }

    std::cout << "Original List: ";
    printList(head);

    // Reverse the list
    reverseList(head);

    std::cout << "Reversed List: ";
    printList(head);

    return 0;
}
