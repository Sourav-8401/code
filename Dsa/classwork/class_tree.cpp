#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int data)
    {
        this->data = data;
        left = right = nullptr;
    }
};

Node *insert(Node *root, int x)
{
    if (root == nullptr)
    {
        return new Node(x);
    }

    if (x < root->data)
    {
        root->left = insert(root->left, x);
    }
    else
    {
        root->right = insert(root->right, x);
    }

    return root;
}

Node *deleteMax(Node *root)
{

    if (root == NULL)
    {
        return NULL;
    }

    if (root->right == NULL)
    {
        return root->left;
    }

    root->right = deleteMax(root->right);
    return root;
}

Node *check(Node *root, int x)
{
    if (root == NULL)
    {
        return NULL;
    }

    if (root->data == x)
    {
        return root;
    }
    if (root->data > x)
    {
        return check(root->left, x);
    }

    return check(root->right, x);
}

int main()
{
    Node *root = NULL;

    while (1)
    {
        int x;
        cin >> x;
        if (x == -1)
        {
            break;
        }
        root = insert(root, x);
    }
}
// amrit code
Node *delnode(Node *root, int x)
{
    if (root == NULL)
    {
        return root;
    }
    if (root->data > x)
    {
        root->left = delnode(root->left, x);
    }
    else if (root->data < x)
    {
        root->right = delnode(root->right, x);
    }
    else
    {
        if (root->left == NULL)
        {
            Node *temp = root->right;
            delete root;
            return temp;
        }
        else if (root->right == NULL)
        {
            Node *temp = root->left;
            delete root;
            return temp;
        }
        else
        {
            Node *nextdata = next(root);
            root->data = nextdata->data;
            root->right = delnode(root->right, nextdata->data);
        }
    }
}

Node *next(Node *curr)
{
    curr = curr->right;
    while (curr != NULL && curr->left != NULL)
    {
        curr = curr->left;
    }
    return curr;
}