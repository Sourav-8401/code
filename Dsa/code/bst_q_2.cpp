#include <iostream>
using namespace std;

const int MAX_NODES = 50; // Maximum number of nodes

struct Node {
    int data;
    int leftIndex;  // Index of the left child in the array
    int rightIndex; // Index of the right child in the array
};

struct Node tree[MAX_NODES];
int currentIndex = 0; // Current index in the array

int createNode(int data) {
    tree[currentIndex].data = data;
    tree[currentIndex].leftIndex = -1; // Initialize left child index
    tree[currentIndex].rightIndex = -1; // Initialize right child index
    return currentIndex++;
}

int insertNode(int rootIndex, int data) {
    if (rootIndex == -1) {
        return createNode(data);
    }
    if (data < tree[rootIndex].data) {
        tree[rootIndex].leftIndex = insertNode(tree[rootIndex].leftIndex, data);
    }
    else {
        tree[rootIndex].rightIndex = insertNode(tree[rootIndex].rightIndex, data);
    }
    return rootIndex;
}

// Function to find the sum of the elements
int sum(int root) {
    if (root == -1) return 0; // Initialize the result to 0
    int leftSum = sum(tree[root].leftIndex);
    int rightSum = sum(tree[root].rightIndex);
    return tree[root].data + leftSum + rightSum;
}

int main() {
    int rootIndex = -1;
    int n, data;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> data;
        rootIndex = insertNode(rootIndex, data);
    }
    int su = sum(rootIndex);
    cout << su << endl;
    return 0;
}
