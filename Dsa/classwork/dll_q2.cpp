#include <iostream>

struct Node {
    std::string data;
    Node* prev;
    Node* next;
};

void insertAtEnd(Node** head, const std::string& newData) {
    Node* newnode = new Node;
    newnode->data = newData;
    newnode->next = newnode->prev = NULL;
    if(*head == NULL){
        *head = newnode;
    }
    else{   
    Node* temp = *head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next = newnode;
    newnode->prev = temp;
    // *head = 
    }

}

void searchAndReplace(Node* head, const std::string& searchData, const std::string& newValue) {
    Node* temp = head;
    while(temp!=NULL){
        if(temp->data == searchData){
            temp->data = newValue;
        }
        temp = temp->next;
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
    int n;
    std::string searchData, newValue;

    std::cin >> n;

    // Create the doubly linked list
    for (int i = 0; i < n; i++) {
        std::string data;
        std::cin >> data;
        insertAtEnd(&head, data);
    }
    // printList(head);
    std::cin >> searchData >> newValue;

    // Search and replace element in the list
    searchAndReplace(head, searchData, newValue);

    std::cout << "Modified List: ";
    printList(head);

    return 0;
}
    // Node* newNode = new Node;
    // newNode->data = newData;
    // newNode->prev = nullptr;
    // newNode->next = nullptr;

    // if (*head == nullptr) {
    //     *head = newNode;
    // } else {
    //     Node* current = *head;
    //     while (current->next != nullptr) {
    //         current = current->next;
    //     }
    //     current->next = newNode;
    //     newNode->prev = current;
    // }
// //
//     Node* current = head;
//     while (current != nullptr) {
//         if (current->data == searchData) {
//             current->data = newValue;
//         }
//         current = current->next;
//     }