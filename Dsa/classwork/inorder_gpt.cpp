#include <iostream>
#include <vector>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

int predecessor;

// Function to create a new node
Node* newNode(int data) {
    Node* a = new Node();
    a->data = data;
    a->left = NULL;
    a->right = NULL;
    return a;
}

// Function to build the tree
Node* insert(Node* root, int data) {
    if (root == NULL) {
        return newNode(data);
    }
    if (data < root->data) {
        root->left = insert(root->left, data);
    }
    else {
        root->right = insert(root->right, data);
    }
    return root;
}

vector<int> arr;

void inorder(Node* root) {
    if (root == NULL) {
        return;
    }
    inorder(root->left);
    arr.push_back(root->data);
    inorder(root->right);
}

// Function to find the predecessor
void findPredecessor(Node* root, int val) {
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == val) {
            if (i > 0) {
                predecessor = arr[i - 1];
            }
            return; // Found the value, no need to continue searching
        }
    }
}

int main() {
    Node* root = nullptr;
    int n, data;
    std::cin >> n;
    for (int i = 0; i < n; ++i) {
        std::cin >> data;
        root = insert(root, data);
    }
    inorder(root);

    int targetData;
    std::cin >> targetData;
    predecessor = -1;
    findPredecessor(root, targetData);
    if (predecessor != -1) {
        std::cout << "Inorder Predecessor: " << predecessor << std::endl;
    } else {
        std::cout << "Doesn't exist" << std::endl;
    }
    
    // Deallocate memory for the tree nodes
    delete root;
    
    return 0;
}
