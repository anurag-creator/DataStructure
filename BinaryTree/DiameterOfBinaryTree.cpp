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
// Approach 1
int Height(Node* root){
    if(root==NULL) return 0;
    else
        return max(Height(root->left),Height(root->right))+1;
    
}
int DiameterOfBinaryTree(Node* root){
    if(root==NULL) return 0;
    int d1=1+Height(root->left)+Height(root->right);
    int d2=DiameterOfBinaryTree(root->left);
    int d3=DiameterOfBinaryTree(root->right);
    return max(d1,max(d2,d3));
}
//Approach 3 Best Approach
int res=0;
int hight(Node* root){
    if(root==NULL) 
         return 0;
    int lh=hight(root->left);
    int rh=hight(root->right);
    res=max(res,1+lh+rh);//compute Diameter and update to res
    return 1+ max(lh,rh);
}
int main() {
	
	Node *root=new Node(10);
	root->left=new Node(5);
	root->right=new Node(30);
	root->right->left=new Node(15);
	root->right->right=new Node(20);
    cout<<"Diameter: "<<DiameterOfBinaryTree(root)<<endl;

    cout<<"Diameter: "<<hight(root)<<endl;
    cout<<res<<endl;
}