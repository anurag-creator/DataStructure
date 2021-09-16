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

int res=0;
int burnTime(Node *root, int leaf, int &dist){
    if(root==NULL)return 0;
    if(root->key==leaf){dist=0;return 1;}
    int leftdist=-1,rightdist=-1;
    int leftHight=burnTime(root->left,leaf,leftdist);
    int rightHight=burnTime(root->right,leaf,rightdist);
    
    if(leftdist!=-1){
       dist=leftdist+1;
       res=max(res,dist+rightHight);
    }
    else if(rightdist!=-1){
        dist=rightdist+1;
        res=max(res,dist+leftHight);
    }
    return max(leftHight,rightHight)+1;
}
int main() {
	
	Node *root=new Node(10);
	root->left=new Node(20);
	root->right=new Node(30);
	root->left->left=new Node(40);
	root->left->right=new Node(50);
	root->left->left->left=new Node(60);
	root->left->left->left->left=new Node(70);
	int dist=-1;int leaf=50;
	burnTime(root,leaf,dist);
	cout<<res;
}