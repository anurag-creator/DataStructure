#include<iostream>
#include<vector>
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
//Recursive Approach
Node *reverseK(Node *head,int k){
    Node *curr=head,*next=NULL,*prev=NULL;
    int count=0;
    while(curr!=NULL&&count<k){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
        count++;
    }
    if(next!=NULL){
        Node *rest_head=reverseK(next,k);
        head->next=rest_head;
    }
    return prev;
}

//IterativeApproach
Node* reverseK2(Node* Head,int k){
	Node* curr=Head, *prevFirst=NULL;
	bool isFirstPass=true;
	while(curr!=NULL){
		Node* first=curr, *prev=NULL;
		int count=0;
		while(curr!=NULL && count<k){
			Node* next=curr->next;
			curr->next=prev;
			prev=curr;
			curr=next;
			count++;
		}
		if(isFirstPass){
			Head=prev;
			isFirstPass=false;
		}
		else{
			prevFirst->next=prev;
		}
	   prevFirst=first;
	}
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
    Node* Head1=reverseK2(Head,3);
    PrintList(Head1);
	
}