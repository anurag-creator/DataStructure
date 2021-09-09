#include<iostream>
using namespace std;
class Node{
	public:
  		
     	int data;
	    Node* next;
	    Node(int data){
		    this->data=data;
		    next=NULL;
	}
};


//Take Input
Node* TakeInputBetter(){
	int data;
	cin>>data;
	Node* Head=NULL;
	Node* Tail=NULL;
	while(data!=-1){
		Node *newNode=new Node(data);
		if(Head==NULL){
			Head=newNode;
			Tail=newNode;
		}
		else{
			Tail->next=newNode;
			Tail=Tail->next;
		}
		cin>>data;
	}
	return Head;
}
//length Approach
void PrintNthFromTheEndLL(Node* Head,int n){
    int len=0;
    for(Node* curr=Head;curr!=NULL;curr=curr->next)
        len++;
    if(len<n) 
        return;
    Node* curr=Head;
    for(int i=1;i<len-n+1;i++){
        curr=curr->next;
    }
    cout<<curr->data<<" "<<endl;

}
//Two pointer Approach
void PrintNthFromTheEndLL2(Node* Head,int n){
    if(Head==NULL) return;
    Node* first=Head;
    for(int i=0;i<n;i++){
        if(first==NULL)return;//less than n Node
        first=first->next;
    }
    Node* second=Head;
    while(first!=NULL){
        first=first->next;
        second=second->next;
    }
    cout<<second->data<<" "<<endl;
}
void PrintList(Node* Head){
    Node* curr=Head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
}
int main()
{
	Node* Head=TakeInputBetter();
    PrintNthFromTheEndLL2(Head,2);
    //PrintList(Head1);
	
	
}