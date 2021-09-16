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
//Naive Approach
int countNode(Node *root){
    if(root==NULL)return 0;
    else
        return 1+countNode(root->left)+countNode(root->right);
}  
//Efficient Solution
int countNode2(Node* root){
          int lh=0,rh=0;
    Node *curr=root;
    while(curr!=NULL){
        lh++;
        curr=curr->left;
    }
    curr=root;
    while(curr!=NULL){
        rh++;
        curr=curr->right;
    }
    if(lh==rh){
        return pow(2,lh)-1;
    }else{
        return 1+countNode(root->left)+countNode(root->right);
    }
}
int main() {
	
	Node *root=new Node(10);
	root->left=new Node(20);
	root->right=new Node(30);
	root->right->left=new Node(40);
	root->right->right=new Node(50);
	
	//cout<<countNode(root);
    cout<<countNode2(root);
}