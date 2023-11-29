#include <iostream>
using namespace std;
struct node{
    int data;
    node* left;
    node* right;
};
node* insert(node* root,int val){
    node* newnode = new node();
    newnode->data = val;
    newnode->left = newnode->right = NULL;
    if(root==NULL){
        return newnode;
    }
    if(val>root->data){
        root->right = insert(root->right, val);
        return root;
    }
    else{
        root->left = insert(root->left, val);
        return root;
    }
}
void pre(node* root){
    if(root == NULL){
        return;
    }
    cout<<root->data<<" ";
    pre(root->left);
    pre(root->right);
}
int main(){
    node* root = NULL;
    root = insert(root,8);
    root = insert(root,10);
    root = insert(root,4);
    root = insert(root,5);
    root = insert(root,3);
    pre(root);
}