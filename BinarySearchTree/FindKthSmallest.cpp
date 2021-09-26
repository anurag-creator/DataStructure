#include<bits/stdc++.h>
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
void FindKthSmallest(Node* root,int k,int & count){
    while(root!=NULL){
        FindKthSmallest(root->left,k,count);
        count++;
        if(count==k)
              cout<<root->key<<" "<<endl;
              return;
        FindKthSmallest(root->right,k,count);
    }
}
int main(){
    Node *root=new Node(15);
	root->left=new Node(5);
	root->left->left=new Node(3);
	root->right=new Node(20);
	root->right->left=new Node(18);
	root->right->left->left=new Node(16);
	root->right->right=new Node(80);
	int k=3;
	int count=0;
    FindKthSmallest(root,k,count);
}