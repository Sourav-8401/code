#include <iostream>
#include <stack>

using namespace std;

// Function to insert an element at the correct position in a sorted stack
void insertSorted(stack<int>& s, int num) {
    if (s.empty() || num >= s.top()) {
        s.push(num);
        return;
    }

    int top = s.top();
    s.pop();
    insertSorted(s, num);
    s.push(top);
}

// Function to sort a stack in ascending order
void sortStack(stack<int>& s) {
    if (!s.empty()) {
        int temp = s.top();
        s.pop();
        sortStack(s);
        insertSorted(s, temp);
    }
}

int main() {
    int n;
    cin >> n;

    stack<int> inputStack;

    if (n > 10) {
        cout << "Stack is full." << endl;
        return 0;
    } else if (n == 0) {
        cout << "Stack is empty." << endl;
        return 0;
    }

    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        inputStack.push(num);
    }

    cout << "Original stack: ";
    stack<int> copyStack = inputStack;
    while (!copyStack.empty()) {
        cout << copyStack.top() << " ";
        copyStack.pop();
    }
    cout << endl;

    sortStack(inputStack);

    cout << "Sorted stack: ";
    while (!inputStack.empty()) {
        cout << inputStack.top() << " ";
        inputStack.pop();
    }
    cout << endl;

    return 0;
}
