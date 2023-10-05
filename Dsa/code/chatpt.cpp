#include <iostream>

using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = nullptr;
    }
};

class LinkedList {
public:
    Node* head=NULL;

    void insertEnd(int data) {
        Node* newNode = new Node(data);
        if (!head) {
            head = newNode;
        } else {
            Node* current = head;
            while (current->next) {
                current = current->next;
            }
            current->next = newNode;
        }
    }

    void display() {
        if (!head) {
            cout << "Linked List is empty." << endl;
        } else {
            cout << "Linked List: ";
            Node* current = head;
            while (current) {
                cout << current->data << " ";
                current = current->next;
            }
            cout << endl;
        }
    }
};

int main() {
    LinkedList linkedList;

    while (true) {
        int data;
        cin >> data;
        if (data < 0) {
            break;
        }
        linkedList.insertEnd(data);
    }

    linkedList.display();

    return 0;
}
