#include <iostream>
#include <stack>

using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* createNode(int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = nullptr;
    return newNode;
}

bool isPalindrome(Node* head) {
    
}

int main() {
    int n;
    cin >> n;

    Node* head = nullptr;
    Node* prev = nullptr;
    for (int i = 0; i < n; i++) {
        int value;
        cin >> value;

        Node* newNode = createNode(value);
        if (head == nullptr) {
            head = newNode;
            newNode->next = head;
        } else {
            prev->next = newNode;
            newNode->next = head;
        }
        prev = newNode;
    }

    if (isPalindrome(head))
        cout << "Linked list is a palindrome.";
    else
        cout << "Linked list is not a palindrome.";

    return 0;
}
