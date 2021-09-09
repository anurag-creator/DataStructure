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
Node* InsertInSortedLL(Node* Head,int x){
        Node* temp=new Node(x);
          if(Head==NULL){
              return temp;
         }
         if(x<Head->data){
              temp->next=Head;
              return temp;
         }
         Node* curr=Head;
        while(curr->next!=NULL && x>curr->next->data)
             curr=curr->next;
        temp->next=curr->next;
        curr->next=temp;
        return Head;
         


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
    Node* Head1=InsertInSortedLL(Head,3);
    PrintList(Head1);
	
	
}