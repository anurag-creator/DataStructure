#include <bits/stdc++.h> 
using namespace std; 

struct Node{
    int data;
    Node* next;
    Node(int x){
        data=x;
        next=NULL;
    }
};

bool isLoop(Node* head) 
{ 
    Node* slowPointer = head, *FastPointer=head;
    while(slowPointer->next!=NULL && FastPointer->next!=NULL){
        slowPointer=slowPointer->next;
        FastPointer=FastPointer->next->next;
        if(slowPointer==FastPointer){
            return true;
        }
    }
    return false;
}

int main() 
{ 
	Node *head=new Node(15);
	head->next=new Node(10);
	head->next->next=new Node(12);
	head->next->next->next=new Node(20);
	head->next->next->next->next=head->next;
	if (isLoop(head)) 
        cout << "Loop found"; 
    else
        cout << "No Loop"; 
	return 0;
} 
