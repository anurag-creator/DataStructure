#include<iostream>
using namespace std;
class Node{
    public:
        int data;
        Node* prev;
        Node* next;
        Node(int data){
        this->data=data;
        prev=NULL;
        next=NULL;
     }
};
Node* InsertEndOfDLL(Node* Head,int x){
    if(Head==NULL){
        Node* temp=new Node(x);
        temp->next=NULL;
        temp->prev=NULL;
        return temp;
    }
    Node* curr= Head;
    while(curr->next!=NULL){
        curr=curr->next;
    }
    Node* temp=new Node(x);
    curr->next=temp;
    temp->prev=curr;
    temp->next=NULL;
    return Head;

    
}
void PrintDLL(Node* Head){
    Node* curr=Head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
    cout<<endl;
}
int main() 
{ 
	Node *head=new Node(10);
	Node *temp1=new Node(20);
	Node *temp2=new Node(30);
	head->next=temp1;
	temp1->prev=head;
	temp1->next=temp2;
	temp2->prev=temp1;
	head=InsertEndOfDLL(head,5);
	PrintDLL(head);
	return 0;
} 