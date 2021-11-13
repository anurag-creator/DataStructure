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

int maxInBinaryTree(Node* root){
    if(root==NULL)
        return INT_MIN;
    else{
        return max(root->key,max(maxInBinaryTree(root->left),maxInBinaryTree(root->right)));
    }
}
int maxInBinaryTree2(Node* root){
    if(root==NULL)
         return INT_MIN;
    int max=root->key;
    int lmax=maxInBinaryTree2(root->left);
    int rmax=maxInBinaryTree2(root->right);
    if(lmax>max){
        max=lmax;
    }
    if(rmax>max){
        max=rmax;
    }
    return max;
}   
int main() {
	
	Node *root=new Node(10);
	root->left=new Node(20);
	root->right=new Node(30);
	root->left->left=new Node(40);
	root->left->right=new Node(50);
	root->right->left=new Node(60);
	root->right->right=new Node(70);
	
	cout<<maxInBinaryTree2(root);
}