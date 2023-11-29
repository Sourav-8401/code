#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;
    node(int x)
    {
        this->data = x;
        this->left = this->right = NULL;
    }
};
class BStree
{
public:
    node *insert(node *root, int data)
    {
        if (root == NULL)
        {
            return new node(data);
        }
        if (data < root->data)
        {
            root->left = insert(root->left, data);
            return root;
        }
        else
        {
            root->right = insert(root->right, data);
            return root;
        }
    }
    void preorder(node *root)
    {
        if (root == NULL)
        {
            return;
        }
        cout << root->data << " ";
        preorder(root->left);
        preorder(root->right);
    }
    void inorder(node *root)
    {
        if (root == NULL)
        {
            return;
        }
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
    void postorder(node *root)
    {
        if (root == NULL)
        {
            return;
        }
        postorder(root->left);
        postorder(root->right);
        cout << root->data << " ";
    }
    bool search(node *root, int check)
    {
        if (root == NULL)
        {
            return false;
        }
        else if (root->data == check)
        {
            return true;
        }
        else if (root->data < check)
        {
            return search(root->left, check);
        }
        else
        {
            return search(root->right, check);
        }
    }
    int findmax(node *root)
    {
        if (root == NULL)
        {
            return root->data;
        }
        while (root->right != NULL)
        {
            root = root->right;
        }
    }
    node* deletenode(node* root, int val){
        if(root==NULL){
            return root;
        }
        if(root->data==val){
            
        }
        else if(val<root->data){
            root->left = deletenode(root->left,val);
            return root;
        }
        else{
            root->right = deletenode(root->right,val);
            return root;
        }
    }
};

int main()
{
    node *root = NULL;
    BStree obj1;
    while (1)
    {
        int x;
        cin >> x;
        if (x == -1)
        {
            break;
        }
        root = obj1.insert(root, x);
    }

    obj1.preorder(root);
    cout << endl;
    cout << obj1.search(root, 5);
}
