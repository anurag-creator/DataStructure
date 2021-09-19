#include <bits/stdc++.h>
using namespace std;

struct Node  
{ 
  int key; 
  struct Node *left; 
  struct Node *right; 
  Node(int k){
      key=k;
      left=right=NULL;
  }
};
//recursive
Node* Insert(Node* root,int x){
      if(root==NULL)
            return new Node(x);
      else if(root->key<x){
          root->right=Insert(root->right,x);
      }
      else{
          root->left=Insert(root->left,x);
      }
      return root;
}
//Iterative
Node *insert(Node *root, int x){
    Node *temp=new Node(x);
    Node *parent=NULL,*curr=root;
    while(curr!=NULL){
        parent=curr;
        if(curr->key>x)
            curr=curr->left;
        else if(curr->key<x)
            curr=curr->right;
        else
            return root;
    }
    if(parent==NULL)
        return temp;
    if(parent->key>x)
        parent->left=temp;
    else
        parent->right=temp;
    return root;
} 
void Inorder(Node* root){
     if(root!=NULL){
        Inorder(root->left);
        cout<<root->key<<" ";
        Inorder(root->right);    
    }
}
int main() {
	
	Node *root=new Node(10);
	root->left=new Node(5);
	root->right=new Node(15);
	root->right->left=new Node(12);
	root->right->right=new Node(18);
	int x=20;
	
	//root=Insert(root,x);//recursive
    root=insert(root,x);
    Inorder(root);
}