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
int Height(Node* root){
    if(root==NULL) return 0;
    else
        return max(Height(root->left),Height(root->right))+1;
    
}
bool isBinaryTree(Node* root){
    if(root==NULL) return true;
    int leftHeight=Height(root->left);
    int rightHeight=Height(root->right);
    return (abs(leftHeight-rightHeight)<=1 && isBinaryTree(root->left)&& isBinaryTree(root->right));
}
//Efficient
int isBalanced(Node* root){
     if(root==NULL) return 0;
     int lh=isBalanced(root->left);
     if(lh==-1) return -1;
     int rh=isBalanced(root->right);
     if(rh==-1) return -1;
     if(abs(lh-rh)>1) 
         return -1;
     else 
        return max(lh,rh)+1;
}
int main() {
	
	Node *root=new Node(10);
	root->left=new Node(5);
	root->right=new Node(30);
	root->right->left=new Node(15);
	root->right->right=new Node(20);
	
	//cout<<isBinaryTree(root);
    cout<<isBalanced(root);
}