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
//Delete LastNode
Node* DeleteLastNodeOfLL(Node* Head){
    if(Head==NULL)return NULL;
    if(Head->next==NULL){
           delete(Head);
           return NULL;
    }
    Node* temp=Head;
    while(temp->next->next!=NULL)
            temp=temp->next;
        delete(temp->next);
        temp->next=NULL;
        return Head;
}
void  printRecursive(Node* Head){
    if(Head==NULL)
            return;
    cout<<Head->data<<" ";
    printRecursive(Head->next);
}
int main(){
	Node* Head= TakeInputBetter();
    Node* Head1=DeleteLastNodeOfLL(Head);
    printRecursive(Head1);
}