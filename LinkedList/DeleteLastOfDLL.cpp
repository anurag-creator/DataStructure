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
Node* DeleteLastOfDLL(Node* Head){
       if(Head==NULL)return NULL;
       if(Head->next==NULL){
           delete(Head);
           return NULL;
       }
       Node* curr=Head;
       while(curr->next!=NULL)
           curr=curr->next;
        curr->prev->next=NULL;
        delete(curr);
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
	head=DeleteLastOfDLL(head);
	PrintDLL(head);
	return 0;
} 