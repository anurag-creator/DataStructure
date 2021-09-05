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
Node* insertionBegin(Node* Head,int k){
    if(Head==NULL){
        Node* temp=new Node(k);
        temp->next=NULL;
        return temp;
    }
    Node* temp=new Node(k);
        temp->next=Head;
        return temp;

}
void  printRecursive(Node* Head){
    if(Head==NULL)
            return;
    cout<<Head->data<<" ";
    printRecursive(Head->next);
}
int main(){
	Node* Head= TakeInputBetter();
    Node* Head1=insertionBegin(Head,5);
    printRecursive(Head1);
}