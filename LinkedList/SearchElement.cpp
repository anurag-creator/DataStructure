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
//Search Element
int SearchElement(Node* Head,int x){
    Node* curr = Head;
    int pos=1;
    while(curr!=NULL){
        if(curr->data==x){
            return pos;
        }
        else{
            curr=curr->next;
            pos++;
        }
    }
    return -1;

}

int main(){
	Node* Head= TakeInputBetter();
    cout<<SearchElement(Head,3);
}