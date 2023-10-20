// You are using GCC
#include <iostream>
// #include <cstdlib>
using namespace std;
class node
{
public:
  int data;
  node* left;
  node* right;
  node(int data){
      this->data = data;
      this->right = NULL ;
      this->left = NULL;
  }
  
};
node* insert(node* root, int d)
{
  if(root==NULL) return new node(d);
  if(d < root->data){
      root->left = insert(root->left, d);
      return root;
  }
  else{
      root->right = insert(root->right,d);
      return root;
  }
    //Type code here
}
void postorder(node* root)
{
  //Type code here
  if(root==NULL){
      return;
  }
  postorder(root->left);
  postorder(root->right);
  cout<<root->data<<" ";
}
int main()
{
    node* root =NULL;
  int d=1;
  while(true){
  cin>>d;
  if(d==-1){
      break;
  }
    root =  insert(root,d);
  }
  cout<<"Post order Traversal:"<<endl;
  postorder(root);
  return 0;
}