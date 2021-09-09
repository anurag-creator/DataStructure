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
//Naive Solution
Node* ReverseList(Node* Head){
    vector<int>arr;
    for(Node* curr=Head;curr!=NULL;curr=curr->next){
        arr.push_back(curr->data);
    }
    for(Node* curr=Head;curr!=NULL;curr=curr->next){
        curr->data=arr.back();
        arr.pop_back();
    }
    return Head;
}
//Efficient
Node* ReverseList2(Node* Head){
     Node* curr=Head;
     Node* prev=NULL;
     while(curr!=NULL){
         Node* next=curr->next;
         curr->next=prev;
         prev=curr;
         curr=next;
     }
     return prev;
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
    Node* Head1=ReverseList2(Head);
    PrintList(Head1);
	
}